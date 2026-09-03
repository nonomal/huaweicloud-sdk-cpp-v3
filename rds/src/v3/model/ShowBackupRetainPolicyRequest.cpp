

#include "huaweicloud/rds/v3/model/ShowBackupRetainPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowBackupRetainPolicyRequest::ShowBackupRetainPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ShowBackupRetainPolicyRequest::~ShowBackupRetainPolicyRequest() = default;

void ShowBackupRetainPolicyRequest::validate()
{
}

web::json::value ShowBackupRetainPolicyRequest::toJson() const
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
bool ShowBackupRetainPolicyRequest::fromJson(const web::json::value& val)
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
            ShowBackupRetainPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowBackupRetainPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowBackupRetainPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowBackupRetainPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowBackupRetainPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ShowBackupRetainPolicyRequestBody ShowBackupRetainPolicyRequest::getBody() const
{
    return body_;
}

void ShowBackupRetainPolicyRequest::setBody(const ShowBackupRetainPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowBackupRetainPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowBackupRetainPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


