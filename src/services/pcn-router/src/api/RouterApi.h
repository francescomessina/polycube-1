/**
* router API
* router API generated from router.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* RouterApi.h
*
*/

#pragma once

#define POLYCUBE_SERVICE_NAME "router"


#include "polycube/services/response.h"
#include "polycube/services/shared_lib_elements.h"

#include "ArpEntryJsonObject.h"
#include "PortsJsonObject.h"
#include "PortsSecondaryipJsonObject.h"
#include "RouteJsonObject.h"
#include "RouterJsonObject.h"
#include <vector>


#ifdef __cplusplus
extern "C" {
#endif

Response create_router_arp_entry_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_arp_entry_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_ports_secondaryip_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_ports_secondaryip_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_route_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response create_router_route_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response delete_router_arp_entry_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_arp_entry_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_ports_secondaryip_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_ports_secondaryip_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_route_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response delete_router_route_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_arp_entry_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_arp_entry_interface_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_arp_entry_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_arp_entry_mac_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_ports_ip_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_ports_mac_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_ports_netmask_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_ports_secondaryip_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_ports_secondaryip_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_route_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_route_interface_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_route_list_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response read_router_route_pathcost_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response replace_router_arp_entry_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_arp_entry_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_ports_secondaryip_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_ports_secondaryip_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_route_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response replace_router_route_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_arp_entry_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_arp_entry_interface_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_arp_entry_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_arp_entry_mac_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_ports_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_ports_ip_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_ports_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_ports_mac_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_ports_netmask_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_ports_secondaryip_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_ports_secondaryip_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_route_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_route_list_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);
Response update_router_route_pathcost_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);

Response router_arp_entry_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response router_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response router_ports_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response router_ports_secondaryip_list_by_id_help(const char *name, const Key *keys, size_t num_keys);
Response router_route_list_by_id_help(const char *name, const Key *keys, size_t num_keys);

Response read_router_shadow_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response update_router_shadow_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);

Response read_router_debugmod_by_id_handler(const char *name, const Key *keys, size_t num_keys);
Response update_router_debugmod_by_id_handler(const char *name, const Key *keys, size_t num_keys, const char *value);

#ifdef __cplusplus
}
#endif
