

#include "huaweicloud/gaussdb/v3/model/EventJobResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




EventJobResult::EventJobResult()
{
    eventId_ = "";
    eventIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    success_ = false;
    successIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

EventJobResult::~EventJobResult() = default;

void EventJobResult::validate()
{
}

web::json::value EventJobResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eventIdIsSet_) {
        val[utility::conversions::to_string_t("event_id")] = ModelBase::toJson(eventId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool EventJobResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("event_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
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


std::string EventJobResult::getEventId() const
{
    return eventId_;
}

void EventJobResult::setEventId(const std::string& value)
{
    eventId_ = value;
    eventIdIsSet_ = true;
}

bool EventJobResult::eventIdIsSet() const
{
    return eventIdIsSet_;
}

void EventJobResult::unseteventId()
{
    eventIdIsSet_ = false;
}

std::string EventJobResult::getInstanceId() const
{
    return instanceId_;
}

void EventJobResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool EventJobResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void EventJobResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string EventJobResult::getJobId() const
{
    return jobId_;
}

void EventJobResult::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool EventJobResult::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void EventJobResult::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool EventJobResult::isSuccess() const
{
    return success_;
}

void EventJobResult::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool EventJobResult::successIsSet() const
{
    return successIsSet_;
}

void EventJobResult::unsetsuccess()
{
    successIsSet_ = false;
}

std::string EventJobResult::getErrorCode() const
{
    return errorCode_;
}

void EventJobResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool EventJobResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void EventJobResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string EventJobResult::getErrorMsg() const
{
    return errorMsg_;
}

void EventJobResult::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool EventJobResult::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void EventJobResult::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


