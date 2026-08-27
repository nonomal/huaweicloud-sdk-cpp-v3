

#include "huaweicloud/gaussdb/v3/model/PreCheckForUpgradeDatabasesSingleInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




PreCheckForUpgradeDatabasesSingleInstance::PreCheckForUpgradeDatabasesSingleInstance()
{
    currentVersion_ = "";
    currentVersionIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

PreCheckForUpgradeDatabasesSingleInstance::~PreCheckForUpgradeDatabasesSingleInstance() = default;

void PreCheckForUpgradeDatabasesSingleInstance::validate()
{
}

web::json::value PreCheckForUpgradeDatabasesSingleInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(currentVersionIsSet_) {
        val[utility::conversions::to_string_t("current_version")] = ModelBase::toJson(currentVersion_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool PreCheckForUpgradeDatabasesSingleInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("current_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string PreCheckForUpgradeDatabasesSingleInstance::getCurrentVersion() const
{
    return currentVersion_;
}

void PreCheckForUpgradeDatabasesSingleInstance::setCurrentVersion(const std::string& value)
{
    currentVersion_ = value;
    currentVersionIsSet_ = true;
}

bool PreCheckForUpgradeDatabasesSingleInstance::currentVersionIsSet() const
{
    return currentVersionIsSet_;
}

void PreCheckForUpgradeDatabasesSingleInstance::unsetcurrentVersion()
{
    currentVersionIsSet_ = false;
}

std::string PreCheckForUpgradeDatabasesSingleInstance::getInstanceId() const
{
    return instanceId_;
}

void PreCheckForUpgradeDatabasesSingleInstance::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool PreCheckForUpgradeDatabasesSingleInstance::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void PreCheckForUpgradeDatabasesSingleInstance::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


