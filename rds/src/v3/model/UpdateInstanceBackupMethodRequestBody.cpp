

#include "huaweicloud/rds/v3/model/UpdateInstanceBackupMethodRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateInstanceBackupMethodRequestBody::UpdateInstanceBackupMethodRequestBody()
{
    backupMethod_ = "";
    backupMethodIsSet_ = false;
}

UpdateInstanceBackupMethodRequestBody::~UpdateInstanceBackupMethodRequestBody() = default;

void UpdateInstanceBackupMethodRequestBody::validate()
{
}

web::json::value UpdateInstanceBackupMethodRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupMethodIsSet_) {
        val[utility::conversions::to_string_t("backup_method")] = ModelBase::toJson(backupMethod_);
    }

    return val;
}
bool UpdateInstanceBackupMethodRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupMethod(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceBackupMethodRequestBody::getBackupMethod() const
{
    return backupMethod_;
}

void UpdateInstanceBackupMethodRequestBody::setBackupMethod(const std::string& value)
{
    backupMethod_ = value;
    backupMethodIsSet_ = true;
}

bool UpdateInstanceBackupMethodRequestBody::backupMethodIsSet() const
{
    return backupMethodIsSet_;
}

void UpdateInstanceBackupMethodRequestBody::unsetbackupMethod()
{
    backupMethodIsSet_ = false;
}

}
}
}
}
}


