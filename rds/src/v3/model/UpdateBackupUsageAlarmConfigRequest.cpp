

#include "huaweicloud/rds/v3/model/UpdateBackupUsageAlarmConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateBackupUsageAlarmConfigRequest::UpdateBackupUsageAlarmConfigRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateBackupUsageAlarmConfigRequest::~UpdateBackupUsageAlarmConfigRequest() = default;

void UpdateBackupUsageAlarmConfigRequest::validate()
{
}

web::json::value UpdateBackupUsageAlarmConfigRequest::toJson() const
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
bool UpdateBackupUsageAlarmConfigRequest::fromJson(const web::json::value& val)
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
            UpdateBackupUsageAlarmConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateBackupUsageAlarmConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateBackupUsageAlarmConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateBackupUsageAlarmConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateBackupUsageAlarmConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

UpdateBackupUsageAlarmConfigRequestBody UpdateBackupUsageAlarmConfigRequest::getBody() const
{
    return body_;
}

void UpdateBackupUsageAlarmConfigRequest::setBody(const UpdateBackupUsageAlarmConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBackupUsageAlarmConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBackupUsageAlarmConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


