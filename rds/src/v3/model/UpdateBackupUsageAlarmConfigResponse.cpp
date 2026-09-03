

#include "huaweicloud/rds/v3/model/UpdateBackupUsageAlarmConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateBackupUsageAlarmConfigResponse::UpdateBackupUsageAlarmConfigResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

UpdateBackupUsageAlarmConfigResponse::~UpdateBackupUsageAlarmConfigResponse() = default;

void UpdateBackupUsageAlarmConfigResponse::validate()
{
}

web::json::value UpdateBackupUsageAlarmConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateBackupUsageAlarmConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpdateBackupUsageAlarmConfigResponse::getStatus() const
{
    return status_;
}

void UpdateBackupUsageAlarmConfigResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateBackupUsageAlarmConfigResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateBackupUsageAlarmConfigResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


