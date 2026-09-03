

#include "huaweicloud/rds/v3/model/ExceededInstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ExceededInstanceInfo::ExceededInstanceInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    obsUsageGb_ = 0.0;
    obsUsageGbIsSet_ = false;
    obsFreeBackupSpaceGb_ = 0.0;
    obsFreeBackupSpaceGbIsSet_ = false;
    snapshotUsageGb_ = 0.0;
    snapshotUsageGbIsSet_ = false;
    snapshotFreeBackupSpaceGb_ = 0.0;
    snapshotFreeBackupSpaceGbIsSet_ = false;
}

ExceededInstanceInfo::~ExceededInstanceInfo() = default;

void ExceededInstanceInfo::validate()
{
}

web::json::value ExceededInstanceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(obsUsageGbIsSet_) {
        val[utility::conversions::to_string_t("obs_usage_gb")] = ModelBase::toJson(obsUsageGb_);
    }
    if(obsFreeBackupSpaceGbIsSet_) {
        val[utility::conversions::to_string_t("obs_free_backup_space_gb")] = ModelBase::toJson(obsFreeBackupSpaceGb_);
    }
    if(snapshotUsageGbIsSet_) {
        val[utility::conversions::to_string_t("snapshot_usage_gb")] = ModelBase::toJson(snapshotUsageGb_);
    }
    if(snapshotFreeBackupSpaceGbIsSet_) {
        val[utility::conversions::to_string_t("snapshot_free_backup_space_gb")] = ModelBase::toJson(snapshotFreeBackupSpaceGb_);
    }

    return val;
}
bool ExceededInstanceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_usage_gb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_usage_gb"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsUsageGb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_free_backup_space_gb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_free_backup_space_gb"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsFreeBackupSpaceGb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_usage_gb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_usage_gb"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotUsageGb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_free_backup_space_gb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_free_backup_space_gb"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotFreeBackupSpaceGb(refVal);
        }
    }
    return ok;
}


std::string ExceededInstanceInfo::getInstanceId() const
{
    return instanceId_;
}

void ExceededInstanceInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExceededInstanceInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExceededInstanceInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

double ExceededInstanceInfo::getObsUsageGb() const
{
    return obsUsageGb_;
}

void ExceededInstanceInfo::setObsUsageGb(double value)
{
    obsUsageGb_ = value;
    obsUsageGbIsSet_ = true;
}

bool ExceededInstanceInfo::obsUsageGbIsSet() const
{
    return obsUsageGbIsSet_;
}

void ExceededInstanceInfo::unsetobsUsageGb()
{
    obsUsageGbIsSet_ = false;
}

double ExceededInstanceInfo::getObsFreeBackupSpaceGb() const
{
    return obsFreeBackupSpaceGb_;
}

void ExceededInstanceInfo::setObsFreeBackupSpaceGb(double value)
{
    obsFreeBackupSpaceGb_ = value;
    obsFreeBackupSpaceGbIsSet_ = true;
}

bool ExceededInstanceInfo::obsFreeBackupSpaceGbIsSet() const
{
    return obsFreeBackupSpaceGbIsSet_;
}

void ExceededInstanceInfo::unsetobsFreeBackupSpaceGb()
{
    obsFreeBackupSpaceGbIsSet_ = false;
}

double ExceededInstanceInfo::getSnapshotUsageGb() const
{
    return snapshotUsageGb_;
}

void ExceededInstanceInfo::setSnapshotUsageGb(double value)
{
    snapshotUsageGb_ = value;
    snapshotUsageGbIsSet_ = true;
}

bool ExceededInstanceInfo::snapshotUsageGbIsSet() const
{
    return snapshotUsageGbIsSet_;
}

void ExceededInstanceInfo::unsetsnapshotUsageGb()
{
    snapshotUsageGbIsSet_ = false;
}

double ExceededInstanceInfo::getSnapshotFreeBackupSpaceGb() const
{
    return snapshotFreeBackupSpaceGb_;
}

void ExceededInstanceInfo::setSnapshotFreeBackupSpaceGb(double value)
{
    snapshotFreeBackupSpaceGb_ = value;
    snapshotFreeBackupSpaceGbIsSet_ = true;
}

bool ExceededInstanceInfo::snapshotFreeBackupSpaceGbIsSet() const
{
    return snapshotFreeBackupSpaceGbIsSet_;
}

void ExceededInstanceInfo::unsetsnapshotFreeBackupSpaceGb()
{
    snapshotFreeBackupSpaceGbIsSet_ = false;
}

}
}
}
}
}


