

#include "huaweicloud/gaussdb/v3/model/MysqlVolumeAutoExpandPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlVolumeAutoExpandPolicy::MysqlVolumeAutoExpandPolicy()
{
    limitSize_ = 0;
    limitSizeIsSet_ = false;
    triggerAvailablePercent_ = 0;
    triggerAvailablePercentIsSet_ = false;
    stepPercent_ = 0;
    stepPercentIsSet_ = false;
}

MysqlVolumeAutoExpandPolicy::~MysqlVolumeAutoExpandPolicy() = default;

void MysqlVolumeAutoExpandPolicy::validate()
{
}

web::json::value MysqlVolumeAutoExpandPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitSizeIsSet_) {
        val[utility::conversions::to_string_t("limit_size")] = ModelBase::toJson(limitSize_);
    }
    if(triggerAvailablePercentIsSet_) {
        val[utility::conversions::to_string_t("trigger_available_percent")] = ModelBase::toJson(triggerAvailablePercent_);
    }
    if(stepPercentIsSet_) {
        val[utility::conversions::to_string_t("step_percent")] = ModelBase::toJson(stepPercent_);
    }

    return val;
}
bool MysqlVolumeAutoExpandPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimitSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_available_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_available_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerAvailablePercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("step_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_percent"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepPercent(refVal);
        }
    }
    return ok;
}


int32_t MysqlVolumeAutoExpandPolicy::getLimitSize() const
{
    return limitSize_;
}

void MysqlVolumeAutoExpandPolicy::setLimitSize(int32_t value)
{
    limitSize_ = value;
    limitSizeIsSet_ = true;
}

bool MysqlVolumeAutoExpandPolicy::limitSizeIsSet() const
{
    return limitSizeIsSet_;
}

void MysqlVolumeAutoExpandPolicy::unsetlimitSize()
{
    limitSizeIsSet_ = false;
}

int32_t MysqlVolumeAutoExpandPolicy::getTriggerAvailablePercent() const
{
    return triggerAvailablePercent_;
}

void MysqlVolumeAutoExpandPolicy::setTriggerAvailablePercent(int32_t value)
{
    triggerAvailablePercent_ = value;
    triggerAvailablePercentIsSet_ = true;
}

bool MysqlVolumeAutoExpandPolicy::triggerAvailablePercentIsSet() const
{
    return triggerAvailablePercentIsSet_;
}

void MysqlVolumeAutoExpandPolicy::unsettriggerAvailablePercent()
{
    triggerAvailablePercentIsSet_ = false;
}

int32_t MysqlVolumeAutoExpandPolicy::getStepPercent() const
{
    return stepPercent_;
}

void MysqlVolumeAutoExpandPolicy::setStepPercent(int32_t value)
{
    stepPercent_ = value;
    stepPercentIsSet_ = true;
}

bool MysqlVolumeAutoExpandPolicy::stepPercentIsSet() const
{
    return stepPercentIsSet_;
}

void MysqlVolumeAutoExpandPolicy::unsetstepPercent()
{
    stepPercentIsSet_ = false;
}

}
}
}
}
}


