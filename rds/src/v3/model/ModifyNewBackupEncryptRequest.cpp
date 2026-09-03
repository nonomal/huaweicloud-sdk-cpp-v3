

#include "huaweicloud/rds/v3/model/ModifyNewBackupEncryptRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyNewBackupEncryptRequest::ModifyNewBackupEncryptRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyNewBackupEncryptRequest::~ModifyNewBackupEncryptRequest() = default;

void ModifyNewBackupEncryptRequest::validate()
{
}

web::json::value ModifyNewBackupEncryptRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyNewBackupEncryptRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
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
            ModifyNewBackupEncryptRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyNewBackupEncryptRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyNewBackupEncryptRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyNewBackupEncryptRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyNewBackupEncryptRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ModifyNewBackupEncryptRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyNewBackupEncryptRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyNewBackupEncryptRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyNewBackupEncryptRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ModifyNewBackupEncryptRequestBody ModifyNewBackupEncryptRequest::getBody() const
{
    return body_;
}

void ModifyNewBackupEncryptRequest::setBody(const ModifyNewBackupEncryptRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyNewBackupEncryptRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyNewBackupEncryptRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


