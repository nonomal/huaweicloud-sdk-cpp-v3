

#include "huaweicloud/gaussdb/v3/model/UpdateTaurusBackupPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateTaurusBackupPolicyRequest::UpdateTaurusBackupPolicyRequest()
{
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    retentionNumBackupLevel1_ = 0;
    retentionNumBackupLevel1IsSet_ = false;
    policiesIsSet_ = false;
}

UpdateTaurusBackupPolicyRequest::~UpdateTaurusBackupPolicyRequest() = default;

void UpdateTaurusBackupPolicyRequest::validate()
{
}

web::json::value UpdateTaurusBackupPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(retentionNumBackupLevel1IsSet_) {
        val[utility::conversions::to_string_t("retention_num_backup_level1")] = ModelBase::toJson(retentionNumBackupLevel1_);
    }
    if(policiesIsSet_) {
        val[utility::conversions::to_string_t("policies")] = ModelBase::toJson(policies_);
    }

    return val;
}
bool UpdateTaurusBackupPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_num_backup_level1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_num_backup_level1"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionNumBackupLevel1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policies"));
        if(!fieldValue.is_null())
        {
            std::vector<Policy> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    return ok;
}


std::string UpdateTaurusBackupPolicyRequest::getBeginTime() const
{
    return beginTime_;
}

void UpdateTaurusBackupPolicyRequest::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool UpdateTaurusBackupPolicyRequest::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void UpdateTaurusBackupPolicyRequest::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string UpdateTaurusBackupPolicyRequest::getEndTime() const
{
    return endTime_;
}

void UpdateTaurusBackupPolicyRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool UpdateTaurusBackupPolicyRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void UpdateTaurusBackupPolicyRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t UpdateTaurusBackupPolicyRequest::getRetentionNumBackupLevel1() const
{
    return retentionNumBackupLevel1_;
}

void UpdateTaurusBackupPolicyRequest::setRetentionNumBackupLevel1(int32_t value)
{
    retentionNumBackupLevel1_ = value;
    retentionNumBackupLevel1IsSet_ = true;
}

bool UpdateTaurusBackupPolicyRequest::retentionNumBackupLevel1IsSet() const
{
    return retentionNumBackupLevel1IsSet_;
}

void UpdateTaurusBackupPolicyRequest::unsetretentionNumBackupLevel1()
{
    retentionNumBackupLevel1IsSet_ = false;
}

std::vector<Policy>& UpdateTaurusBackupPolicyRequest::getPolicies()
{
    return policies_;
}

void UpdateTaurusBackupPolicyRequest::setPolicies(const std::vector<Policy>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool UpdateTaurusBackupPolicyRequest::policiesIsSet() const
{
    return policiesIsSet_;
}

void UpdateTaurusBackupPolicyRequest::unsetpolicies()
{
    policiesIsSet_ = false;
}

}
}
}
}
}


