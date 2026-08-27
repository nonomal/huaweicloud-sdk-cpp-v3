

#include "huaweicloud/iotda/v5/model/ShowProtocolConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowProtocolConfigRequest::ShowProtocolConfigRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    protocolId_ = "";
    protocolIdIsSet_ = false;
}

ShowProtocolConfigRequest::~ShowProtocolConfigRequest() = default;

void ShowProtocolConfigRequest::validate()
{
}

web::json::value ShowProtocolConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(protocolIdIsSet_) {
        val[utility::conversions::to_string_t("protocol_id")] = ModelBase::toJson(protocolId_);
    }

    return val;
}
bool ShowProtocolConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocolId(refVal);
        }
    }
    return ok;
}


std::string ShowProtocolConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowProtocolConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowProtocolConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowProtocolConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowProtocolConfigRequest::getProtocolId() const
{
    return protocolId_;
}

void ShowProtocolConfigRequest::setProtocolId(const std::string& value)
{
    protocolId_ = value;
    protocolIdIsSet_ = true;
}

bool ShowProtocolConfigRequest::protocolIdIsSet() const
{
    return protocolIdIsSet_;
}

void ShowProtocolConfigRequest::unsetprotocolId()
{
    protocolIdIsSet_ = false;
}

}
}
}
}
}


