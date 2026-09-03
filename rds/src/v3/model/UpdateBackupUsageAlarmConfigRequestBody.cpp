

#include "huaweicloud/rds/v3/model/UpdateBackupUsageAlarmConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateBackupUsageAlarmConfigRequestBody::UpdateBackupUsageAlarmConfigRequestBody()
{
    alarmEnabled_ = "";
    alarmEnabledIsSet_ = false;
    thresholdPercent_ = 0;
    thresholdPercentIsSet_ = false;
    incrementPercent_ = 0;
    incrementPercentIsSet_ = false;
}

UpdateBackupUsageAlarmConfigRequestBody::~UpdateBackupUsageAlarmConfigRequestBody() = default;

void UpdateBackupUsageAlarmConfigRequestBody::validate()
{
}

web::json::value UpdateBackupUsageAlarmConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alarmEnabledIsSet_) {
        val[utility::conversions::to_string_t("alarm_enabled")] = ModelBase::toJson(alarmEnabled_);
    }
    if(thresholdPercentIsSet_) {
        val[utility::conversions::to_string_t("threshold_percent")] = ModelBase::toJson(thresholdPercent_);
    }
    if(incrementPercentIsSet_) {
        val[utility::conversions::to_string_t("increment_percent")] = ModelBase::toJson(incrementPercent_);
    }

    return val;
}
bool UpdateBackupUsageAlarmConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alarm_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("threshold_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("threshold_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThresholdPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("increment_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("increment_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncrementPercent(refVal);
        }
    }
    return ok;
}


std::string UpdateBackupUsageAlarmConfigRequestBody::getAlarmEnabled() const
{
    return alarmEnabled_;
}

void UpdateBackupUsageAlarmConfigRequestBody::setAlarmEnabled(const std::string& value)
{
    alarmEnabled_ = value;
    alarmEnabledIsSet_ = true;
}

bool UpdateBackupUsageAlarmConfigRequestBody::alarmEnabledIsSet() const
{
    return alarmEnabledIsSet_;
}

void UpdateBackupUsageAlarmConfigRequestBody::unsetalarmEnabled()
{
    alarmEnabledIsSet_ = false;
}

int32_t UpdateBackupUsageAlarmConfigRequestBody::getThresholdPercent() const
{
    return thresholdPercent_;
}

void UpdateBackupUsageAlarmConfigRequestBody::setThresholdPercent(int32_t value)
{
    thresholdPercent_ = value;
    thresholdPercentIsSet_ = true;
}

bool UpdateBackupUsageAlarmConfigRequestBody::thresholdPercentIsSet() const
{
    return thresholdPercentIsSet_;
}

void UpdateBackupUsageAlarmConfigRequestBody::unsetthresholdPercent()
{
    thresholdPercentIsSet_ = false;
}

int32_t UpdateBackupUsageAlarmConfigRequestBody::getIncrementPercent() const
{
    return incrementPercent_;
}

void UpdateBackupUsageAlarmConfigRequestBody::setIncrementPercent(int32_t value)
{
    incrementPercent_ = value;
    incrementPercentIsSet_ = true;
}

bool UpdateBackupUsageAlarmConfigRequestBody::incrementPercentIsSet() const
{
    return incrementPercentIsSet_;
}

void UpdateBackupUsageAlarmConfigRequestBody::unsetincrementPercent()
{
    incrementPercentIsSet_ = false;
}

}
}
}
}
}


