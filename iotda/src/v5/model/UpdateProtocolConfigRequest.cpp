

#include "huaweicloud/iotda/v5/model/UpdateProtocolConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateProtocolConfigRequest::UpdateProtocolConfigRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    protocolId_ = "";
    protocolIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProtocolConfigRequest::~UpdateProtocolConfigRequest() = default;

void UpdateProtocolConfigRequest::validate()
{
}

web::json::value UpdateProtocolConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(protocolIdIsSet_) {
        val[utility::conversions::to_string_t("protocol_id")] = ModelBase::toJson(protocolId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateProtocolConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateProtocolConfigDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProtocolConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateProtocolConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateProtocolConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateProtocolConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateProtocolConfigRequest::getProtocolId() const
{
    return protocolId_;
}

void UpdateProtocolConfigRequest::setProtocolId(const std::string& value)
{
    protocolId_ = value;
    protocolIdIsSet_ = true;
}

bool UpdateProtocolConfigRequest::protocolIdIsSet() const
{
    return protocolIdIsSet_;
}

void UpdateProtocolConfigRequest::unsetprotocolId()
{
    protocolIdIsSet_ = false;
}

UpdateProtocolConfigDTO UpdateProtocolConfigRequest::getBody() const
{
    return body_;
}

void UpdateProtocolConfigRequest::setBody(const UpdateProtocolConfigDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProtocolConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProtocolConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


