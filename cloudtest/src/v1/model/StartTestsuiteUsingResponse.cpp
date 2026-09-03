

#include "huaweicloud/cloudtest/v1/model/StartTestsuiteUsingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




StartTestsuiteUsingResponse::StartTestsuiteUsingResponse()
{
    errorIsSet_ = false;
    etTraceId_ = "";
    etTraceIdIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    warnIsSet_ = false;
}

StartTestsuiteUsingResponse::~StartTestsuiteUsingResponse() = default;

void StartTestsuiteUsingResponse::validate()
{
}

web::json::value StartTestsuiteUsingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(etTraceIdIsSet_) {
        val[utility::conversions::to_string_t("et_trace_id")] = ModelBase::toJson(etTraceId_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(warnIsSet_) {
        val[utility::conversions::to_string_t("warn")] = ModelBase::toJson(warn_);
    }

    return val;
}
bool StartTestsuiteUsingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Error refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("et_trace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("et_trace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEtTraceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            TaskBasicInfoVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("warn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("warn"));
        if(!fieldValue.is_null())
        {
            Warn refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWarn(refVal);
        }
    }
    return ok;
}


Error StartTestsuiteUsingResponse::getError() const
{
    return error_;
}

void StartTestsuiteUsingResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool StartTestsuiteUsingResponse::errorIsSet() const
{
    return errorIsSet_;
}

void StartTestsuiteUsingResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string StartTestsuiteUsingResponse::getEtTraceId() const
{
    return etTraceId_;
}

void StartTestsuiteUsingResponse::setEtTraceId(const std::string& value)
{
    etTraceId_ = value;
    etTraceIdIsSet_ = true;
}

bool StartTestsuiteUsingResponse::etTraceIdIsSet() const
{
    return etTraceIdIsSet_;
}

void StartTestsuiteUsingResponse::unsetetTraceId()
{
    etTraceIdIsSet_ = false;
}

TaskBasicInfoVo StartTestsuiteUsingResponse::getResult() const
{
    return result_;
}

void StartTestsuiteUsingResponse::setResult(const TaskBasicInfoVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool StartTestsuiteUsingResponse::resultIsSet() const
{
    return resultIsSet_;
}

void StartTestsuiteUsingResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string StartTestsuiteUsingResponse::getStatus() const
{
    return status_;
}

void StartTestsuiteUsingResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StartTestsuiteUsingResponse::statusIsSet() const
{
    return statusIsSet_;
}

void StartTestsuiteUsingResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Warn StartTestsuiteUsingResponse::getWarn() const
{
    return warn_;
}

void StartTestsuiteUsingResponse::setWarn(const Warn& value)
{
    warn_ = value;
    warnIsSet_ = true;
}

bool StartTestsuiteUsingResponse::warnIsSet() const
{
    return warnIsSet_;
}

void StartTestsuiteUsingResponse::unsetwarn()
{
    warnIsSet_ = false;
}

}
}
}
}
}


