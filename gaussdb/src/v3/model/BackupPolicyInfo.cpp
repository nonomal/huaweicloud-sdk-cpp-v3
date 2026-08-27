

#include "huaweicloud/gaussdb/v3/model/BackupPolicyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BackupPolicyInfo::BackupPolicyInfo()
{
    retentionDays_ = 0;
    retentionDaysIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    policyType_ = "";
    policyTypeIsSet_ = false;
}

BackupPolicyInfo::~BackupPolicyInfo() = default;

void BackupPolicyInfo::validate()
{
}

web::json::value BackupPolicyInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(retentionDaysIsSet_) {
        val[utility::conversions::to_string_t("retention_days")] = ModelBase::toJson(retentionDays_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(policyTypeIsSet_) {
        val[utility::conversions::to_string_t("policy_type")] = ModelBase::toJson(policyType_);
    }

    return val;
}
bool BackupPolicyInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("retention_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
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


int32_t BackupPolicyInfo::getRetentionDays() const
{
    return retentionDays_;
}

void BackupPolicyInfo::setRetentionDays(int32_t value)
{
    retentionDays_ = value;
    retentionDaysIsSet_ = true;
}

bool BackupPolicyInfo::retentionDaysIsSet() const
{
    return retentionDaysIsSet_;
}

void BackupPolicyInfo::unsetretentionDays()
{
    retentionDaysIsSet_ = false;
}

std::string BackupPolicyInfo::getPeriod() const
{
    return period_;
}

void BackupPolicyInfo::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool BackupPolicyInfo::periodIsSet() const
{
    return periodIsSet_;
}

void BackupPolicyInfo::unsetperiod()
{
    periodIsSet_ = false;
}

std::string BackupPolicyInfo::getPolicyType() const
{
    return policyType_;
}

void BackupPolicyInfo::setPolicyType(const std::string& value)
{
    policyType_ = value;
    policyTypeIsSet_ = true;
}

bool BackupPolicyInfo::policyTypeIsSet() const
{
    return policyTypeIsSet_;
}

void BackupPolicyInfo::unsetpolicyType()
{
    policyTypeIsSet_ = false;
}

}
}
}
}
}


