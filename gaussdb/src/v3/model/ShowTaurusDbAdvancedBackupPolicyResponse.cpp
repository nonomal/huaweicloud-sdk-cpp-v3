

#include "huaweicloud/gaussdb/v3/model/ShowTaurusDbAdvancedBackupPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowTaurusDbAdvancedBackupPolicyResponse::ShowTaurusDbAdvancedBackupPolicyResponse()
{
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    retentionNumBackupLevel1_ = 0;
    retentionNumBackupLevel1IsSet_ = false;
    policiesIsSet_ = false;
}

ShowTaurusDbAdvancedBackupPolicyResponse::~ShowTaurusDbAdvancedBackupPolicyResponse() = default;

void ShowTaurusDbAdvancedBackupPolicyResponse::validate()
{
}

web::json::value ShowTaurusDbAdvancedBackupPolicyResponse::toJson() const
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
bool ShowTaurusDbAdvancedBackupPolicyResponse::fromJson(const web::json::value& val)
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
            std::vector<BackupPolicyInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    return ok;
}


std::string ShowTaurusDbAdvancedBackupPolicyResponse::getBeginTime() const
{
    return beginTime_;
}

void ShowTaurusDbAdvancedBackupPolicyResponse::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowTaurusDbAdvancedBackupPolicyResponse::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowTaurusDbAdvancedBackupPolicyResponse::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowTaurusDbAdvancedBackupPolicyResponse::getEndTime() const
{
    return endTime_;
}

void ShowTaurusDbAdvancedBackupPolicyResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowTaurusDbAdvancedBackupPolicyResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowTaurusDbAdvancedBackupPolicyResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ShowTaurusDbAdvancedBackupPolicyResponse::getRetentionNumBackupLevel1() const
{
    return retentionNumBackupLevel1_;
}

void ShowTaurusDbAdvancedBackupPolicyResponse::setRetentionNumBackupLevel1(int32_t value)
{
    retentionNumBackupLevel1_ = value;
    retentionNumBackupLevel1IsSet_ = true;
}

bool ShowTaurusDbAdvancedBackupPolicyResponse::retentionNumBackupLevel1IsSet() const
{
    return retentionNumBackupLevel1IsSet_;
}

void ShowTaurusDbAdvancedBackupPolicyResponse::unsetretentionNumBackupLevel1()
{
    retentionNumBackupLevel1IsSet_ = false;
}

std::vector<BackupPolicyInfo>& ShowTaurusDbAdvancedBackupPolicyResponse::getPolicies()
{
    return policies_;
}

void ShowTaurusDbAdvancedBackupPolicyResponse::setPolicies(const std::vector<BackupPolicyInfo>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool ShowTaurusDbAdvancedBackupPolicyResponse::policiesIsSet() const
{
    return policiesIsSet_;
}

void ShowTaurusDbAdvancedBackupPolicyResponse::unsetpolicies()
{
    policiesIsSet_ = false;
}

}
}
}
}
}


