

#include "huaweicloud/gaussdb/v3/model/MysqlBackupPolicyInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlBackupPolicyInfo::MysqlBackupPolicyInfo()
{
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    retentionNumBackupLevel1_ = 0;
    retentionNumBackupLevel1IsSet_ = false;
    policiesIsSet_ = false;
}

MysqlBackupPolicyInfo::~MysqlBackupPolicyInfo() = default;

void MysqlBackupPolicyInfo::validate()
{
}

web::json::value MysqlBackupPolicyInfo::toJson() const
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
bool MysqlBackupPolicyInfo::fromJson(const web::json::value& val)
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
            std::vector<PolicyInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicies(refVal);
        }
    }
    return ok;
}


std::string MysqlBackupPolicyInfo::getBeginTime() const
{
    return beginTime_;
}

void MysqlBackupPolicyInfo::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool MysqlBackupPolicyInfo::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void MysqlBackupPolicyInfo::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string MysqlBackupPolicyInfo::getEndTime() const
{
    return endTime_;
}

void MysqlBackupPolicyInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool MysqlBackupPolicyInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void MysqlBackupPolicyInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t MysqlBackupPolicyInfo::getRetentionNumBackupLevel1() const
{
    return retentionNumBackupLevel1_;
}

void MysqlBackupPolicyInfo::setRetentionNumBackupLevel1(int32_t value)
{
    retentionNumBackupLevel1_ = value;
    retentionNumBackupLevel1IsSet_ = true;
}

bool MysqlBackupPolicyInfo::retentionNumBackupLevel1IsSet() const
{
    return retentionNumBackupLevel1IsSet_;
}

void MysqlBackupPolicyInfo::unsetretentionNumBackupLevel1()
{
    retentionNumBackupLevel1IsSet_ = false;
}

std::vector<PolicyInfo>& MysqlBackupPolicyInfo::getPolicies()
{
    return policies_;
}

void MysqlBackupPolicyInfo::setPolicies(const std::vector<PolicyInfo>& value)
{
    policies_ = value;
    policiesIsSet_ = true;
}

bool MysqlBackupPolicyInfo::policiesIsSet() const
{
    return policiesIsSet_;
}

void MysqlBackupPolicyInfo::unsetpolicies()
{
    policiesIsSet_ = false;
}

}
}
}
}
}


