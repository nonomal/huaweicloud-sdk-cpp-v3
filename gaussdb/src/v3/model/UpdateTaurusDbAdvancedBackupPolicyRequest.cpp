

#include "huaweicloud/gaussdb/v3/model/UpdateTaurusDbAdvancedBackupPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateTaurusDbAdvancedBackupPolicyRequest::UpdateTaurusDbAdvancedBackupPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTaurusDbAdvancedBackupPolicyRequest::~UpdateTaurusDbAdvancedBackupPolicyRequest() = default;

void UpdateTaurusDbAdvancedBackupPolicyRequest::validate()
{
}

web::json::value UpdateTaurusDbAdvancedBackupPolicyRequest::toJson() const
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
bool UpdateTaurusDbAdvancedBackupPolicyRequest::fromJson(const web::json::value& val)
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
            UpdateTaurusBackupPolicyRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTaurusDbAdvancedBackupPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateTaurusDbAdvancedBackupPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateTaurusDbAdvancedBackupPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateTaurusDbAdvancedBackupPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateTaurusDbAdvancedBackupPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateTaurusDbAdvancedBackupPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateTaurusDbAdvancedBackupPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateTaurusDbAdvancedBackupPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateTaurusBackupPolicyRequest UpdateTaurusDbAdvancedBackupPolicyRequest::getBody() const
{
    return body_;
}

void UpdateTaurusDbAdvancedBackupPolicyRequest::setBody(const UpdateTaurusBackupPolicyRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTaurusDbAdvancedBackupPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTaurusDbAdvancedBackupPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


