

#include "huaweicloud/rds/v3/model/ShowBackupRetainPolicyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowBackupRetainPolicyRequestBody::ShowBackupRetainPolicyRequestBody()
{
    instanceidsIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    instanceStatus_ = "";
    instanceStatusIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ShowBackupRetainPolicyRequestBody::~ShowBackupRetainPolicyRequestBody() = default;

void ShowBackupRetainPolicyRequestBody::validate()
{
}

web::json::value ShowBackupRetainPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceidsIsSet_) {
        val[utility::conversions::to_string_t("instanceids")] = ModelBase::toJson(instanceids_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(instanceStatusIsSet_) {
        val[utility::conversions::to_string_t("instance_status")] = ModelBase::toJson(instanceStatus_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ShowBackupRetainPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instanceids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instanceids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceids(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceStatus(refVal);
        }
    }
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
    return ok;
}


std::vector<std::string>& ShowBackupRetainPolicyRequestBody::getInstanceids()
{
    return instanceids_;
}

void ShowBackupRetainPolicyRequestBody::setInstanceids(const std::vector<std::string>& value)
{
    instanceids_ = value;
    instanceidsIsSet_ = true;
}

bool ShowBackupRetainPolicyRequestBody::instanceidsIsSet() const
{
    return instanceidsIsSet_;
}

void ShowBackupRetainPolicyRequestBody::unsetinstanceids()
{
    instanceidsIsSet_ = false;
}

int32_t ShowBackupRetainPolicyRequestBody::getOffset() const
{
    return offset_;
}

void ShowBackupRetainPolicyRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowBackupRetainPolicyRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowBackupRetainPolicyRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowBackupRetainPolicyRequestBody::getLimit() const
{
    return limit_;
}

void ShowBackupRetainPolicyRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowBackupRetainPolicyRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ShowBackupRetainPolicyRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowBackupRetainPolicyRequestBody::getInstanceStatus() const
{
    return instanceStatus_;
}

void ShowBackupRetainPolicyRequestBody::setInstanceStatus(const std::string& value)
{
    instanceStatus_ = value;
    instanceStatusIsSet_ = true;
}

bool ShowBackupRetainPolicyRequestBody::instanceStatusIsSet() const
{
    return instanceStatusIsSet_;
}

void ShowBackupRetainPolicyRequestBody::unsetinstanceStatus()
{
    instanceStatusIsSet_ = false;
}

std::string ShowBackupRetainPolicyRequestBody::getBeginTime() const
{
    return beginTime_;
}

void ShowBackupRetainPolicyRequestBody::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ShowBackupRetainPolicyRequestBody::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ShowBackupRetainPolicyRequestBody::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ShowBackupRetainPolicyRequestBody::getEndTime() const
{
    return endTime_;
}

void ShowBackupRetainPolicyRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowBackupRetainPolicyRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowBackupRetainPolicyRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


