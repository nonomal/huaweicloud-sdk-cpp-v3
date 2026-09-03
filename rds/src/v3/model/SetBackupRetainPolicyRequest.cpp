

#include "huaweicloud/rds/v3/model/SetBackupRetainPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetBackupRetainPolicyRequest::SetBackupRetainPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

SetBackupRetainPolicyRequest::~SetBackupRetainPolicyRequest() = default;

void SetBackupRetainPolicyRequest::validate()
{
}

web::json::value SetBackupRetainPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetBackupRetainPolicyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetBackupRetainPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetBackupRetainPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetBackupRetainPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetBackupRetainPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetBackupRetainPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SetBackupRetainPolicyRequestBody SetBackupRetainPolicyRequest::getBody() const
{
    return body_;
}

void SetBackupRetainPolicyRequest::setBody(const SetBackupRetainPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetBackupRetainPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetBackupRetainPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


