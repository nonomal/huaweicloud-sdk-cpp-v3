

#include "huaweicloud/gaussdb/v3/model/BatchUpdateBackupPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BatchUpdateBackupPolicyRequest::BatchUpdateBackupPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateBackupPolicyRequest::~BatchUpdateBackupPolicyRequest() = default;

void BatchUpdateBackupPolicyRequest::validate()
{
}

web::json::value BatchUpdateBackupPolicyRequest::toJson() const
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
bool BatchUpdateBackupPolicyRequest::fromJson(const web::json::value& val)
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
            BatchUpdateBackupPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateBackupPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void BatchUpdateBackupPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BatchUpdateBackupPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BatchUpdateBackupPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchUpdateBackupPolicyRequestBody BatchUpdateBackupPolicyRequest::getBody() const
{
    return body_;
}

void BatchUpdateBackupPolicyRequest::setBody(const BatchUpdateBackupPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateBackupPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateBackupPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


