

#include "huaweicloud/modelarts/v1/model/AttachDevServerPortResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AttachDevServerPortResponse::AttachDevServerPortResponse()
{
    macAddr_ = "";
    macAddrIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    portState_ = "";
    portStateIsSet_ = false;
    virsubnetId_ = "";
    virsubnetIdIsSet_ = false;
}

AttachDevServerPortResponse::~AttachDevServerPortResponse() = default;

void AttachDevServerPortResponse::validate()
{
}

web::json::value AttachDevServerPortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(macAddrIsSet_) {
        val[utility::conversions::to_string_t("mac_addr")] = ModelBase::toJson(macAddr_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(portStateIsSet_) {
        val[utility::conversions::to_string_t("port_state")] = ModelBase::toJson(portState_);
    }
    if(virsubnetIdIsSet_) {
        val[utility::conversions::to_string_t("virsubnet_id")] = ModelBase::toJson(virsubnetId_);
    }

    return val;
}
bool AttachDevServerPortResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mac_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mac_addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMacAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("virsubnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virsubnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVirsubnetId(refVal);
        }
    }
    return ok;
}


std::string AttachDevServerPortResponse::getMacAddr() const
{
    return macAddr_;
}

void AttachDevServerPortResponse::setMacAddr(const std::string& value)
{
    macAddr_ = value;
    macAddrIsSet_ = true;
}

bool AttachDevServerPortResponse::macAddrIsSet() const
{
    return macAddrIsSet_;
}

void AttachDevServerPortResponse::unsetmacAddr()
{
    macAddrIsSet_ = false;
}

std::string AttachDevServerPortResponse::getPortId() const
{
    return portId_;
}

void AttachDevServerPortResponse::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool AttachDevServerPortResponse::portIdIsSet() const
{
    return portIdIsSet_;
}

void AttachDevServerPortResponse::unsetportId()
{
    portIdIsSet_ = false;
}

std::string AttachDevServerPortResponse::getPortState() const
{
    return portState_;
}

void AttachDevServerPortResponse::setPortState(const std::string& value)
{
    portState_ = value;
    portStateIsSet_ = true;
}

bool AttachDevServerPortResponse::portStateIsSet() const
{
    return portStateIsSet_;
}

void AttachDevServerPortResponse::unsetportState()
{
    portStateIsSet_ = false;
}

std::string AttachDevServerPortResponse::getVirsubnetId() const
{
    return virsubnetId_;
}

void AttachDevServerPortResponse::setVirsubnetId(const std::string& value)
{
    virsubnetId_ = value;
    virsubnetIdIsSet_ = true;
}

bool AttachDevServerPortResponse::virsubnetIdIsSet() const
{
    return virsubnetIdIsSet_;
}

void AttachDevServerPortResponse::unsetvirsubnetId()
{
    virsubnetIdIsSet_ = false;
}

}
}
}
}
}


