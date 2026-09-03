

#include "huaweicloud/rds/v3/model/ModifyNewBackupEncryptRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyNewBackupEncryptRequestBody::ModifyNewBackupEncryptRequestBody()
{
    kmsKey_ = "";
    kmsKeyIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
}

ModifyNewBackupEncryptRequestBody::~ModifyNewBackupEncryptRequestBody() = default;

void ModifyNewBackupEncryptRequestBody::validate()
{
}

web::json::value ModifyNewBackupEncryptRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kmsKeyIsSet_) {
        val[utility::conversions::to_string_t("kms_key")] = ModelBase::toJson(kmsKey_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool ModifyNewBackupEncryptRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kms_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kms_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKmsKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    return ok;
}


std::string ModifyNewBackupEncryptRequestBody::getKmsKey() const
{
    return kmsKey_;
}

void ModifyNewBackupEncryptRequestBody::setKmsKey(const std::string& value)
{
    kmsKey_ = value;
    kmsKeyIsSet_ = true;
}

bool ModifyNewBackupEncryptRequestBody::kmsKeyIsSet() const
{
    return kmsKeyIsSet_;
}

void ModifyNewBackupEncryptRequestBody::unsetkmsKey()
{
    kmsKeyIsSet_ = false;
}

bool ModifyNewBackupEncryptRequestBody::isEnabled() const
{
    return enabled_;
}

void ModifyNewBackupEncryptRequestBody::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ModifyNewBackupEncryptRequestBody::enabledIsSet() const
{
    return enabledIsSet_;
}

void ModifyNewBackupEncryptRequestBody::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


