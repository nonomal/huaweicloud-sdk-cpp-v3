

#include "huaweicloud/gaussdb/v3/model/UpdateTaurusDbAdvancedBackupPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateTaurusDbAdvancedBackupPolicyResponse::UpdateTaurusDbAdvancedBackupPolicyResponse()
{
    status_ = "";
    statusIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
}

UpdateTaurusDbAdvancedBackupPolicyResponse::~UpdateTaurusDbAdvancedBackupPolicyResponse() = default;

void UpdateTaurusDbAdvancedBackupPolicyResponse::validate()
{
}

web::json::value UpdateTaurusDbAdvancedBackupPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }

    return val;
}
bool UpdateTaurusDbAdvancedBackupPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    return ok;
}


std::string UpdateTaurusDbAdvancedBackupPolicyResponse::getStatus() const
{
    return status_;
}

void UpdateTaurusDbAdvancedBackupPolicyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateTaurusDbAdvancedBackupPolicyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateTaurusDbAdvancedBackupPolicyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateTaurusDbAdvancedBackupPolicyResponse::getInstanceId() const
{
    return instanceId_;
}

void UpdateTaurusDbAdvancedBackupPolicyResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateTaurusDbAdvancedBackupPolicyResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateTaurusDbAdvancedBackupPolicyResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateTaurusDbAdvancedBackupPolicyResponse::getInstanceName() const
{
    return instanceName_;
}

void UpdateTaurusDbAdvancedBackupPolicyResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool UpdateTaurusDbAdvancedBackupPolicyResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void UpdateTaurusDbAdvancedBackupPolicyResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}


