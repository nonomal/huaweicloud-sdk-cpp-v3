

#include "huaweicloud/rds/v3/model/ShowBackupRetainPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowBackupRetainPolicyResponse::ShowBackupRetainPolicyResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    engineName_ = "";
    engineNameIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    instanceDeleteTime_ = 0L;
    instanceDeleteTimeIsSet_ = false;
    auto_ = "";
    autoIsSet_ = false;
    manual_ = "";
    manualIsSet_ = false;
}

ShowBackupRetainPolicyResponse::~ShowBackupRetainPolicyResponse() = default;

void ShowBackupRetainPolicyResponse::validate()
{
}

web::json::value ShowBackupRetainPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(engineNameIsSet_) {
        val[utility::conversions::to_string_t("engine_name")] = ModelBase::toJson(engineName_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(instanceDeleteTimeIsSet_) {
        val[utility::conversions::to_string_t("instance_delete_time")] = ModelBase::toJson(instanceDeleteTime_);
    }
    if(autoIsSet_) {
        val[utility::conversions::to_string_t("auto")] = ModelBase::toJson(auto_);
    }
    if(manualIsSet_) {
        val[utility::conversions::to_string_t("manual")] = ModelBase::toJson(manual_);
    }

    return val;
}
bool ShowBackupRetainPolicyResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_delete_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_delete_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceDeleteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuto(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manual"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manual"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManual(refVal);
        }
    }
    return ok;
}


std::string ShowBackupRetainPolicyResponse::getInstanceId() const
{
    return instanceId_;
}

void ShowBackupRetainPolicyResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowBackupRetainPolicyResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowBackupRetainPolicyResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowBackupRetainPolicyResponse::getName() const
{
    return name_;
}

void ShowBackupRetainPolicyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowBackupRetainPolicyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowBackupRetainPolicyResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowBackupRetainPolicyResponse::getEngineName() const
{
    return engineName_;
}

void ShowBackupRetainPolicyResponse::setEngineName(const std::string& value)
{
    engineName_ = value;
    engineNameIsSet_ = true;
}

bool ShowBackupRetainPolicyResponse::engineNameIsSet() const
{
    return engineNameIsSet_;
}

void ShowBackupRetainPolicyResponse::unsetengineName()
{
    engineNameIsSet_ = false;
}

std::string ShowBackupRetainPolicyResponse::getEngineVersion() const
{
    return engineVersion_;
}

void ShowBackupRetainPolicyResponse::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool ShowBackupRetainPolicyResponse::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void ShowBackupRetainPolicyResponse::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

int64_t ShowBackupRetainPolicyResponse::getInstanceDeleteTime() const
{
    return instanceDeleteTime_;
}

void ShowBackupRetainPolicyResponse::setInstanceDeleteTime(int64_t value)
{
    instanceDeleteTime_ = value;
    instanceDeleteTimeIsSet_ = true;
}

bool ShowBackupRetainPolicyResponse::instanceDeleteTimeIsSet() const
{
    return instanceDeleteTimeIsSet_;
}

void ShowBackupRetainPolicyResponse::unsetinstanceDeleteTime()
{
    instanceDeleteTimeIsSet_ = false;
}

std::string ShowBackupRetainPolicyResponse::getAuto() const
{
    return auto_;
}

void ShowBackupRetainPolicyResponse::setAuto(const std::string& value)
{
    auto_ = value;
    autoIsSet_ = true;
}

bool ShowBackupRetainPolicyResponse::autoIsSet() const
{
    return autoIsSet_;
}

void ShowBackupRetainPolicyResponse::unsetauto()
{
    autoIsSet_ = false;
}

std::string ShowBackupRetainPolicyResponse::getManual() const
{
    return manual_;
}

void ShowBackupRetainPolicyResponse::setManual(const std::string& value)
{
    manual_ = value;
    manualIsSet_ = true;
}

bool ShowBackupRetainPolicyResponse::manualIsSet() const
{
    return manualIsSet_;
}

void ShowBackupRetainPolicyResponse::unsetmanual()
{
    manualIsSet_ = false;
}

}
}
}
}
}


