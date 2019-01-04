/**
* sharednic API
* Sharednic Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/netgroup-polito/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* SharednicApiImpl.h
*
*
*/

#pragma once

#include "SharednicApi.h"


#include <memory>
#include <map>
#include <mutex>
#include "../Sharednic.h"

#include "PortsJsonObject.h"
#include "SharednicJsonObject.h"
#include <vector>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

class SharednicApiImpl : public io::swagger::server::api::SharednicApi {
public:
  SharednicApiImpl();
  ~SharednicApiImpl() { };

  void create_sharednic_by_id(const std::string &name, const SharednicJsonObject &value);
  void create_sharednic_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void create_sharednic_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
  void delete_sharednic_by_id(const std::string &name);
  void delete_sharednic_ports_by_id(const std::string &name, const std::string &portsName);
  void delete_sharednic_ports_list_by_id(const std::string &name);
  SharednicActionEnum read_sharednic_action_by_id(const std::string &name);
  SharednicJsonObject read_sharednic_by_id(const std::string &name);
  std::vector<SharednicJsonObject> read_sharednic_list_by_id();
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_sharednic_list_by_id_get_list();
  SharednicLoglevelEnum read_sharednic_loglevel_by_id(const std::string &name);
  PortsJsonObject read_sharednic_ports_by_id(const std::string &name, const std::string &portsName);
  std::vector<PortsJsonObject> read_sharednic_ports_list_by_id(const std::string &name);
  std::vector<nlohmann::fifo_map<std::string, std::string>> read_sharednic_ports_list_by_id_get_list(const std::string &name);
  std::string read_sharednic_ports_peer_by_id(const std::string &name, const std::string &portsName);
  PortsStatusEnum read_sharednic_ports_status_by_id(const std::string &name, const std::string &portsName);
  std::string read_sharednic_ports_uuid_by_id(const std::string &name, const std::string &portsName);
  CubeType read_sharednic_type_by_id(const std::string &name);
  std::string read_sharednic_uuid_by_id(const std::string &name);
  void replace_sharednic_by_id(const std::string &name, const SharednicJsonObject &value);
  void replace_sharednic_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void replace_sharednic_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
  void update_sharednic_action_by_id(const std::string &name, const SharednicActionEnum &value);
  void update_sharednic_by_id(const std::string &name, const SharednicJsonObject &value);
  void update_sharednic_list_by_id(const std::vector<SharednicJsonObject> &value);
  void update_sharednic_loglevel_by_id(const std::string &name, const SharednicLoglevelEnum &value);
  void update_sharednic_ports_by_id(const std::string &name, const std::string &portsName, const PortsJsonObject &value);
  void update_sharednic_ports_list_by_id(const std::string &name, const std::vector<PortsJsonObject> &value);
  void update_sharednic_ports_peer_by_id(const std::string &name, const std::string &portsName, const std::string &value);

private:
  std::unordered_map<std::string, std::shared_ptr<Sharednic>> cubes;
  std::shared_ptr<Sharednic> get_cube(const std::string &name);
  std::mutex cubes_mutex;
};

}
}
}
}

