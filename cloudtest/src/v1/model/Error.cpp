

#include "huaweicloud/cloudtest/v1/model/Error.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




Error::Error()
{
    code_ = "";
    codeIsSet_ = false;
    detailsIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

Error::~Error() = default;

void Error::validate()
{
}

web::json::value Error::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(detailsIsSet_) {
        val[utility::conversions::to_string_t("details")] = ModelBase::toJson(details_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool Error::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("details"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    return ok;
}


std::string Error::getCode() const
{
    return code_;
}

void Error::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool Error::codeIsSet() const
{
    return codeIsSet_;
}

void Error::unsetcode()
{
    codeIsSet_ = false;
}

std::vector<Object>& Error::getDetails()
{
    return details_;
}

void Error::setDetails(const std::vector<Object>& value)
{
    details_ = value;
    detailsIsSet_ = true;
}

bool Error::detailsIsSet() const
{
    return detailsIsSet_;
}

void Error::unsetdetails()
{
    detailsIsSet_ = false;
}

std::string Error::getReason() const
{
    return reason_;
}

void Error::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool Error::reasonIsSet() const
{
    return reasonIsSet_;
}

void Error::unsetreason()
{
    reasonIsSet_ = false;
}

std::string Error::getUrl() const
{
    return url_;
}

void Error::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool Error::urlIsSet() const
{
    return urlIsSet_;
}

void Error::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


