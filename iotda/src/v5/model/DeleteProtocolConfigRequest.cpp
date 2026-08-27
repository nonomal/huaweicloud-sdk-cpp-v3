

#include "huaweicloud/iotda/v5/model/DeleteProtocolConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteProtocolConfigRequest::DeleteProtocolConfigRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    protocolId_ = "";
    protocolIdIsSet_ = false;
}

DeleteProtocolConfigRequest::~DeleteProtocolConfigRequest() = default;

void DeleteProtocolConfigRequest::validate()
{
}

web::json::value DeleteProtocolConfigRequest::toJson() const
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
bool DeleteProtocolConfigRequest::fromJson(const web::json::value& val)
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


std::string DeleteProtocolConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteProtocolConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteProtocolConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteProtocolConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteProtocolConfigRequest::getProtocolId() const
{
    return protocolId_;
}

void DeleteProtocolConfigRequest::setProtocolId(const std::string& value)
{
    protocolId_ = value;
    protocolIdIsSet_ = true;
}

bool DeleteProtocolConfigRequest::protocolIdIsSet() const
{
    return protocolIdIsSet_;
}

void DeleteProtocolConfigRequest::unsetprotocolId()
{
    protocolIdIsSet_ = false;
}

}
}
}
}
}


