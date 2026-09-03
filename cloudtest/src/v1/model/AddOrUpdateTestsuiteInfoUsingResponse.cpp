

#include "huaweicloud/cloudtest/v1/model/AddOrUpdateTestsuiteInfoUsingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AddOrUpdateTestsuiteInfoUsingResponse::AddOrUpdateTestsuiteInfoUsingResponse()
{
    errorIsSet_ = false;
    etTraceId_ = "";
    etTraceIdIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AddOrUpdateTestsuiteInfoUsingResponse::~AddOrUpdateTestsuiteInfoUsingResponse() = default;

void AddOrUpdateTestsuiteInfoUsingResponse::validate()
{
}

web::json::value AddOrUpdateTestsuiteInfoUsingResponse::toJson() const
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
bool AddOrUpdateTestsuiteInfoUsingResponse::fromJson(const web::json::value& val)
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


Error AddOrUpdateTestsuiteInfoUsingResponse::getError() const
{
    return error_;
}

void AddOrUpdateTestsuiteInfoUsingResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddOrUpdateTestsuiteInfoUsingResponse::errorIsSet() const
{
    return errorIsSet_;
}

void AddOrUpdateTestsuiteInfoUsingResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string AddOrUpdateTestsuiteInfoUsingResponse::getEtTraceId() const
{
    return etTraceId_;
}

void AddOrUpdateTestsuiteInfoUsingResponse::setEtTraceId(const std::string& value)
{
    etTraceId_ = value;
    etTraceIdIsSet_ = true;
}

bool AddOrUpdateTestsuiteInfoUsingResponse::etTraceIdIsSet() const
{
    return etTraceIdIsSet_;
}

void AddOrUpdateTestsuiteInfoUsingResponse::unsetetTraceId()
{
    etTraceIdIsSet_ = false;
}

Object AddOrUpdateTestsuiteInfoUsingResponse::getResult() const
{
    return result_;
}

void AddOrUpdateTestsuiteInfoUsingResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddOrUpdateTestsuiteInfoUsingResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddOrUpdateTestsuiteInfoUsingResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string AddOrUpdateTestsuiteInfoUsingResponse::getStatus() const
{
    return status_;
}

void AddOrUpdateTestsuiteInfoUsingResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddOrUpdateTestsuiteInfoUsingResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddOrUpdateTestsuiteInfoUsingResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


