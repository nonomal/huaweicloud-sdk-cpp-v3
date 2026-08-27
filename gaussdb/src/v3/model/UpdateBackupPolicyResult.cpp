

#include "huaweicloud/gaussdb/v3/model/UpdateBackupPolicyResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateBackupPolicyResult::UpdateBackupPolicyResult()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

UpdateBackupPolicyResult::~UpdateBackupPolicyResult() = default;

void UpdateBackupPolicyResult::validate()
{
}

web::json::value UpdateBackupPolicyResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool UpdateBackupPolicyResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string UpdateBackupPolicyResult::getInstanceId() const
{
    return instanceId_;
}

void UpdateBackupPolicyResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateBackupPolicyResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateBackupPolicyResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateBackupPolicyResult::getErrorCode() const
{
    return errorCode_;
}

void UpdateBackupPolicyResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool UpdateBackupPolicyResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void UpdateBackupPolicyResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string UpdateBackupPolicyResult::getErrorMsg() const
{
    return errorMsg_;
}

void UpdateBackupPolicyResult::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool UpdateBackupPolicyResult::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void UpdateBackupPolicyResult::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


