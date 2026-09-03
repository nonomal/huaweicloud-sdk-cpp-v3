

#include "huaweicloud/rds/v3/model/UpdateInstanceBackupMethodResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateInstanceBackupMethodResponse::UpdateInstanceBackupMethodResponse()
{
    backupMethod_ = "";
    backupMethodIsSet_ = false;
}

UpdateInstanceBackupMethodResponse::~UpdateInstanceBackupMethodResponse() = default;

void UpdateInstanceBackupMethodResponse::validate()
{
}

web::json::value UpdateInstanceBackupMethodResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupMethodIsSet_) {
        val[utility::conversions::to_string_t("backup_method")] = ModelBase::toJson(backupMethod_);
    }

    return val;
}
bool UpdateInstanceBackupMethodResponse::fromJson(const web::json::value& val)
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


std::string UpdateInstanceBackupMethodResponse::getBackupMethod() const
{
    return backupMethod_;
}

void UpdateInstanceBackupMethodResponse::setBackupMethod(const std::string& value)
{
    backupMethod_ = value;
    backupMethodIsSet_ = true;
}

bool UpdateInstanceBackupMethodResponse::backupMethodIsSet() const
{
    return backupMethodIsSet_;
}

void UpdateInstanceBackupMethodResponse::unsetbackupMethod()
{
    backupMethodIsSet_ = false;
}

}
}
}
}
}


