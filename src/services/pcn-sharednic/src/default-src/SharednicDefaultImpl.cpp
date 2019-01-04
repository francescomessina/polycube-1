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


// These methods have a default implementation. Your are free to keep it or add your own


#include "../Sharednic.h"




std::string Sharednic::getName(){
  // This method retrieves the name value.
  return Cube::get_name();
}


std::string Sharednic::getUuid(){
  // This method retrieves the uuid value.
  return Cube::get_uuid().str();
}


CubeType Sharednic::getType(){
  // This method retrieves the type value.
  return Cube::get_type();
}


SharednicLoglevelEnum Sharednic::getLoglevel(){
  // This method retrieves the loglevel value.
    switch(Cube::get_log_level()){
      case polycube::LogLevel::TRACE:
        return SharednicLoglevelEnum::TRACE;
      case polycube::LogLevel::DEBUG:
        return SharednicLoglevelEnum::DEBUG;
      case polycube::LogLevel::INFO:
        return SharednicLoglevelEnum::INFO;
      case polycube::LogLevel::WARN:
        return SharednicLoglevelEnum::WARN;
      case polycube::LogLevel::ERR:
        return SharednicLoglevelEnum::ERR;
      case polycube::LogLevel::CRITICAL:
        return SharednicLoglevelEnum::CRITICAL;
      case polycube::LogLevel::OFF:
        return SharednicLoglevelEnum::OFF;
    }
}

void Sharednic::setLoglevel(const SharednicLoglevelEnum &value){
  // This method sets the loglevel value.
    switch(value){
      case SharednicLoglevelEnum::TRACE:
        Cube::set_log_level(polycube::LogLevel::TRACE);
        break;
      case SharednicLoglevelEnum::DEBUG:
        Cube::set_log_level(polycube::LogLevel::DEBUG);
        break;
      case SharednicLoglevelEnum::INFO:
        Cube::set_log_level(polycube::LogLevel::INFO);
        break;
      case SharednicLoglevelEnum::WARN:
        Cube::set_log_level(polycube::LogLevel::WARN);
        break;
      case SharednicLoglevelEnum::ERR:
        Cube::set_log_level(polycube::LogLevel::ERR);
        break;
      case SharednicLoglevelEnum::CRITICAL:
        Cube::set_log_level(polycube::LogLevel::CRITICAL);
        break;
      case SharednicLoglevelEnum::OFF:
        Cube::set_log_level(polycube::LogLevel::OFF);
        break;
    }
}

std::shared_ptr<Ports> Sharednic::getPorts(const std::string &name){
  return Ports::getEntry(*this, name);
}

std::vector<std::shared_ptr<Ports>> Sharednic::getPortsList(){
  return Ports::get(*this);
}

void Sharednic::addPorts(const std::string &name, const PortsJsonObject &conf){
  Ports::create(*this, name, conf);
}

void Sharednic::addPortsList(const std::vector<PortsJsonObject> &conf){
  for(auto &i : conf){
    std::string name_ = i.getName();
    Ports::create(*this, name_,  i);
  }
}

void Sharednic::replacePorts(const std::string &name, const PortsJsonObject &conf){
  Ports::removeEntry(*this, name);
  std::string name_ = conf.getName();
  Ports::create(*this, name_, conf);

}

void Sharednic::delPorts(const std::string &name){
  Ports::removeEntry(*this, name);
}

void Sharednic::delPortsList(){
  Ports::remove(*this);
}
