

#include "huaweicloud/rds/v3/model/ShowBackupUsageAlarmConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowBackupUsageAlarmConfigResponse::ShowBackupUsageAlarmConfigResponse()
{
    alarmEnabled_ = "";
    alarmEnabledIsSet_ = false;
    thresholdPercent_ = 0;
    thresholdPercentIsSet_ = false;
    incrementPercent_ = 0;
    incrementPercentIsSet_ = false;
}

ShowBackupUsageAlarmConfigResponse::~ShowBackupUsageAlarmConfigResponse() = default;

void ShowBackupUsageAlarmConfigResponse::validate()
{
}

web::json::value ShowBackupUsageAlarmConfigResponse::toJson() const
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
bool ShowBackupUsageAlarmConfigResponse::fromJson(const web::json::value& val)
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


std::string ShowBackupUsageAlarmConfigResponse::getAlarmEnabled() const
{
    return alarmEnabled_;
}

void ShowBackupUsageAlarmConfigResponse::setAlarmEnabled(const std::string& value)
{
    alarmEnabled_ = value;
    alarmEnabledIsSet_ = true;
}

bool ShowBackupUsageAlarmConfigResponse::alarmEnabledIsSet() const
{
    return alarmEnabledIsSet_;
}

void ShowBackupUsageAlarmConfigResponse::unsetalarmEnabled()
{
    alarmEnabledIsSet_ = false;
}

int32_t ShowBackupUsageAlarmConfigResponse::getThresholdPercent() const
{
    return thresholdPercent_;
}

void ShowBackupUsageAlarmConfigResponse::setThresholdPercent(int32_t value)
{
    thresholdPercent_ = value;
    thresholdPercentIsSet_ = true;
}

bool ShowBackupUsageAlarmConfigResponse::thresholdPercentIsSet() const
{
    return thresholdPercentIsSet_;
}

void ShowBackupUsageAlarmConfigResponse::unsetthresholdPercent()
{
    thresholdPercentIsSet_ = false;
}

int32_t ShowBackupUsageAlarmConfigResponse::getIncrementPercent() const
{
    return incrementPercent_;
}

void ShowBackupUsageAlarmConfigResponse::setIncrementPercent(int32_t value)
{
    incrementPercent_ = value;
    incrementPercentIsSet_ = true;
}

bool ShowBackupUsageAlarmConfigResponse::incrementPercentIsSet() const
{
    return incrementPercentIsSet_;
}

void ShowBackupUsageAlarmConfigResponse::unsetincrementPercent()
{
    incrementPercentIsSet_ = false;
}

}
}
}
}
}


