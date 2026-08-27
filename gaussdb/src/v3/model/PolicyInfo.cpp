

#include "huaweicloud/gaussdb/v3/model/PolicyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




PolicyInfo::PolicyInfo()
{
    period_ = "";
    periodIsSet_ = false;
    retentionDays_ = 0;
    retentionDaysIsSet_ = false;
    policyType_ = "";
    policyTypeIsSet_ = false;
}

PolicyInfo::~PolicyInfo() = default;

void PolicyInfo::validate()
{
}

web::json::value PolicyInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(retentionDaysIsSet_) {
        val[utility::conversions::to_string_t("retention_days")] = ModelBase::toJson(retentionDays_);
    }
    if(policyTypeIsSet_) {
        val[utility::conversions::to_string_t("policy_type")] = ModelBase::toJson(policyType_);
    }

    return val;
}
bool PolicyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyType(refVal);
        }
    }
    return ok;
}


std::string PolicyInfo::getPeriod() const
{
    return period_;
}

void PolicyInfo::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool PolicyInfo::periodIsSet() const
{
    return periodIsSet_;
}

void PolicyInfo::unsetperiod()
{
    periodIsSet_ = false;
}

int32_t PolicyInfo::getRetentionDays() const
{
    return retentionDays_;
}

void PolicyInfo::setRetentionDays(int32_t value)
{
    retentionDays_ = value;
    retentionDaysIsSet_ = true;
}

bool PolicyInfo::retentionDaysIsSet() const
{
    return retentionDaysIsSet_;
}

void PolicyInfo::unsetretentionDays()
{
    retentionDaysIsSet_ = false;
}

std::string PolicyInfo::getPolicyType() const
{
    return policyType_;
}

void PolicyInfo::setPolicyType(const std::string& value)
{
    policyType_ = value;
    policyTypeIsSet_ = true;
}

bool PolicyInfo::policyTypeIsSet() const
{
    return policyTypeIsSet_;
}

void PolicyInfo::unsetpolicyType()
{
    policyTypeIsSet_ = false;
}

}
}
}
}
}


