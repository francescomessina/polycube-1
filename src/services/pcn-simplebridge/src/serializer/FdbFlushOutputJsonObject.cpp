/**
* simplebridge API generated from simplebridge.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */



#include "FdbFlushOutputJsonObject.h"
#include <regex>

namespace polycube {
namespace service {
namespace model {

FdbFlushOutputJsonObject::FdbFlushOutputJsonObject() {
  m_flushedIsSet = false;
}

FdbFlushOutputJsonObject::FdbFlushOutputJsonObject(const nlohmann::json &val) :
  JsonObjectBase(val) {
  m_flushedIsSet = false;


  if (val.count("flushed")) {
    setFlushed(val.at("flushed").get<bool>());
  }
}

nlohmann::json FdbFlushOutputJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();
  if (!getBase().is_null()) {
    val.update(getBase());
  }

  if (m_flushedIsSet) {
    val["flushed"] = m_flushed;
  }

  return val;
}

bool FdbFlushOutputJsonObject::getFlushed() const {
  return m_flushed;
}

void FdbFlushOutputJsonObject::setFlushed(bool value) {
  m_flushed = value;
  m_flushedIsSet = true;
}

bool FdbFlushOutputJsonObject::flushedIsSet() const {
  return m_flushedIsSet;
}




}
}
}

