#!/usr/bin/env bash

#         TOPOLOGY
#
#                              +-----------+                 +-----------+
#      veth1 (10.0.1.1)--------|     r1    |-----------------|    nat1   |------- veth2 (10.0.2.1)
#                            ^ +-----------+  ^            ^ +-----------+  ^
#                            |                |            |                |
#                          to_veth1        to_nat1  to_r1 (INTERNAL)    to_veth2 (EXTERNAL)
#

# TEST 5
# test TCP with netcat and masquerade

source "${BASH_SOURCE%/*}/helpers.bash"

function test_tcp {
    sudo ip netns exec ns2 netcat -l -w 5 $tcp_port&
	sleep 2
	sudo ip netns exec ns1 netcat -w 2 -nvz $veth2_ip $tcp_port
	sleep 4
}

function cleanup {
    set +e
    delete_veth 2
    polycubectl nat del nat1
    polycubectl router del r1
    sudo pkill -SIGTERM netcat
}
trap cleanup EXIT

veth1_ip=10.0.1.1
veth2_ip=10.0.2.1
to_veth2_ip=10.0.2.254
to_veth1_ip=10.0.1.254
tcp_port=60123

set -x
set -e

create_veth_net 2

polycubectl nat add nat1
polycubectl router add r1

polycubectl router r1 ports add to_veth1 ip=$to_veth1_ip/24 peer=veth1
polycubectl router r1 ports add to_veth2 ip=$to_veth2_ip/24 peer=veth2

polycubectl attach nat1 r1:to_veth2 position=first

polycubectl nat1 rule masquerade enable

test_tcp
