

#include "huaweicloud/gaussdb/v3/model/SetInstanceReadonlyStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetInstanceReadonlyStatusRequest::SetInstanceReadonlyStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetInstanceReadonlyStatusRequest::~SetInstanceReadonlyStatusRequest() = default;

void SetInstanceReadonlyStatusRequest::validate()
{
}

web::json::value SetInstanceReadonlyStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetInstanceReadonlyStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
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
            SetInstanceReadonlyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetInstanceReadonlyStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetInstanceReadonlyStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetInstanceReadonlyStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetInstanceReadonlyStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetInstanceReadonlyStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void SetInstanceReadonlyStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetInstanceReadonlyStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetInstanceReadonlyStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SetInstanceReadonlyRequestBody SetInstanceReadonlyStatusRequest::getBody() const
{
    return body_;
}

void SetInstanceReadonlyStatusRequest::setBody(const SetInstanceReadonlyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetInstanceReadonlyStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetInstanceReadonlyStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


