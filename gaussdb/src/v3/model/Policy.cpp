

#include "huaweicloud/gaussdb/v3/model/Policy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




Policy::Policy()
{
    period_ = "";
    periodIsSet_ = false;
    retentionDays_ = 0;
    retentionDaysIsSet_ = false;
    policyType_ = "";
    policyTypeIsSet_ = false;
}

Policy::~Policy() = default;

void Policy::validate()
{
}

web::json::value Policy::toJson() const
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
bool Policy::fromJson(const web::json::value& val)
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


std::string Policy::getPeriod() const
{
    return period_;
}

void Policy::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool Policy::periodIsSet() const
{
    return periodIsSet_;
}

void Policy::unsetperiod()
{
    periodIsSet_ = false;
}

int32_t Policy::getRetentionDays() const
{
    return retentionDays_;
}

void Policy::setRetentionDays(int32_t value)
{
    retentionDays_ = value;
    retentionDaysIsSet_ = true;
}

bool Policy::retentionDaysIsSet() const
{
    return retentionDaysIsSet_;
}

void Policy::unsetretentionDays()
{
    retentionDaysIsSet_ = false;
}

std::string Policy::getPolicyType() const
{
    return policyType_;
}

void Policy::setPolicyType(const std::string& value)
{
    policyType_ = value;
    policyTypeIsSet_ = true;
}

bool Policy::policyTypeIsSet() const
{
    return policyTypeIsSet_;
}

void Policy::unsetpolicyType()
{
    policyTypeIsSet_ = false;
}

}
}
}
}
}


