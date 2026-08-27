

#include "huaweicloud/gaussdb/v3/model/BatchUpdateBackupPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




BatchUpdateBackupPolicyRequestBody::BatchUpdateBackupPolicyRequestBody()
{
    instanceIdsIsSet_ = false;
    backupPolicyIsSet_ = false;
}

BatchUpdateBackupPolicyRequestBody::~BatchUpdateBackupPolicyRequestBody() = default;

void BatchUpdateBackupPolicyRequestBody::validate()
{
}

web::json::value BatchUpdateBackupPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdsIsSet_) {
        val[utility::conversions::to_string_t("instance_ids")] = ModelBase::toJson(instanceIds_);
    }
    if(backupPolicyIsSet_) {
        val[utility::conversions::to_string_t("backup_policy")] = ModelBase::toJson(backupPolicy_);
    }

    return val;
}
bool BatchUpdateBackupPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_policy"));
        if(!fieldValue.is_null())
        {
            MysqlBackupPolicyInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupPolicy(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchUpdateBackupPolicyRequestBody::getInstanceIds()
{
    return instanceIds_;
}

void BatchUpdateBackupPolicyRequestBody::setInstanceIds(const std::vector<std::string>& value)
{
    instanceIds_ = value;
    instanceIdsIsSet_ = true;
}

bool BatchUpdateBackupPolicyRequestBody::instanceIdsIsSet() const
{
    return instanceIdsIsSet_;
}

void BatchUpdateBackupPolicyRequestBody::unsetinstanceIds()
{
    instanceIdsIsSet_ = false;
}

MysqlBackupPolicyInfo BatchUpdateBackupPolicyRequestBody::getBackupPolicy() const
{
    return backupPolicy_;
}

void BatchUpdateBackupPolicyRequestBody::setBackupPolicy(const MysqlBackupPolicyInfo& value)
{
    backupPolicy_ = value;
    backupPolicyIsSet_ = true;
}

bool BatchUpdateBackupPolicyRequestBody::backupPolicyIsSet() const
{
    return backupPolicyIsSet_;
}

void BatchUpdateBackupPolicyRequestBody::unsetbackupPolicy()
{
    backupPolicyIsSet_ = false;
}

}
}
}
}
}


