

#include "huaweicloud/cloudtest/v1/model/UpdateTestsuiteInfoUsingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestsuiteInfoUsingResponse::UpdateTestsuiteInfoUsingResponse()
{
    errorIsSet_ = false;
    etTraceId_ = "";
    etTraceIdIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

UpdateTestsuiteInfoUsingResponse::~UpdateTestsuiteInfoUsingResponse() = default;

void UpdateTestsuiteInfoUsingResponse::validate()
{
}

web::json::value UpdateTestsuiteInfoUsingResponse::toJson() const
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

    return val;
}
bool UpdateTestsuiteInfoUsingResponse::fromJson(const web::json::value& val)
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
            Object refVal;
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
    return ok;
}


Error UpdateTestsuiteInfoUsingResponse::getError() const
{
    return error_;
}

void UpdateTestsuiteInfoUsingResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateTestsuiteInfoUsingResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateTestsuiteInfoUsingResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateTestsuiteInfoUsingResponse::getEtTraceId() const
{
    return etTraceId_;
}

void UpdateTestsuiteInfoUsingResponse::setEtTraceId(const std::string& value)
{
    etTraceId_ = value;
    etTraceIdIsSet_ = true;
}

bool UpdateTestsuiteInfoUsingResponse::etTraceIdIsSet() const
{
    return etTraceIdIsSet_;
}

void UpdateTestsuiteInfoUsingResponse::unsetetTraceId()
{
    etTraceIdIsSet_ = false;
}

Object UpdateTestsuiteInfoUsingResponse::getResult() const
{
    return result_;
}

void UpdateTestsuiteInfoUsingResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateTestsuiteInfoUsingResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateTestsuiteInfoUsingResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateTestsuiteInfoUsingResponse::getStatus() const
{
    return status_;
}

void UpdateTestsuiteInfoUsingResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateTestsuiteInfoUsingResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateTestsuiteInfoUsingResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


