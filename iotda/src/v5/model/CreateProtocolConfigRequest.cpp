

#include "huaweicloud/iotda/v5/model/CreateProtocolConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateProtocolConfigRequest::CreateProtocolConfigRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateProtocolConfigRequest::~CreateProtocolConfigRequest() = default;

void CreateProtocolConfigRequest::validate()
{
}

web::json::value CreateProtocolConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateProtocolConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateProtocolConfigDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateProtocolConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateProtocolConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateProtocolConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateProtocolConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateProtocolConfigDTO CreateProtocolConfigRequest::getBody() const
{
    return body_;
}

void CreateProtocolConfigRequest::setBody(const CreateProtocolConfigDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProtocolConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProtocolConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


