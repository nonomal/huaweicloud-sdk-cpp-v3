

#include "huaweicloud/cloudtest/v1/model/AdvancedConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AdvancedConfig::AdvancedConfig()
{
    blockEnable_ = "";
    blockEnableIsSet_ = false;
    caseTimeout_ = 0L;
    caseTimeoutIsSet_ = false;
    enableCookie_ = "";
    enableCookieIsSet_ = false;
    headerDefault_ = "";
    headerDefaultIsSet_ = false;
    httpTimeout_ = 0L;
    httpTimeoutIsSet_ = false;
    octopusImage_ = "";
    octopusImageIsSet_ = false;
    parallelNumber_ = 0;
    parallelNumberIsSet_ = false;
    proxyAuthName_ = "";
    proxyAuthNameIsSet_ = false;
    proxyAuthPassword_ = "";
    proxyAuthPasswordIsSet_ = false;
    proxyHostName_ = "";
    proxyHostNameIsSet_ = false;
    proxyPort_ = "";
    proxyPortIsSet_ = false;
    serialRun_ = "";
    serialRunIsSet_ = false;
    taskStopTime_ = utility::datetime();
    taskStopTimeIsSet_ = false;
    taskTimeout_ = 0L;
    taskTimeoutIsSet_ = false;
}

AdvancedConfig::~AdvancedConfig() = default;

void AdvancedConfig::validate()
{
}

web::json::value AdvancedConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(blockEnableIsSet_) {
        val[utility::conversions::to_string_t("blockEnable")] = ModelBase::toJson(blockEnable_);
    }
    if(caseTimeoutIsSet_) {
        val[utility::conversions::to_string_t("caseTimeout")] = ModelBase::toJson(caseTimeout_);
    }
    if(enableCookieIsSet_) {
        val[utility::conversions::to_string_t("enableCookie")] = ModelBase::toJson(enableCookie_);
    }
    if(headerDefaultIsSet_) {
        val[utility::conversions::to_string_t("headerDefault")] = ModelBase::toJson(headerDefault_);
    }
    if(httpTimeoutIsSet_) {
        val[utility::conversions::to_string_t("httpTimeout")] = ModelBase::toJson(httpTimeout_);
    }
    if(octopusImageIsSet_) {
        val[utility::conversions::to_string_t("octopusImage")] = ModelBase::toJson(octopusImage_);
    }
    if(parallelNumberIsSet_) {
        val[utility::conversions::to_string_t("parallelNumber")] = ModelBase::toJson(parallelNumber_);
    }
    if(proxyAuthNameIsSet_) {
        val[utility::conversions::to_string_t("proxyAuthName")] = ModelBase::toJson(proxyAuthName_);
    }
    if(proxyAuthPasswordIsSet_) {
        val[utility::conversions::to_string_t("proxyAuthPassword")] = ModelBase::toJson(proxyAuthPassword_);
    }
    if(proxyHostNameIsSet_) {
        val[utility::conversions::to_string_t("proxyHostName")] = ModelBase::toJson(proxyHostName_);
    }
    if(proxyPortIsSet_) {
        val[utility::conversions::to_string_t("proxyPort")] = ModelBase::toJson(proxyPort_);
    }
    if(serialRunIsSet_) {
        val[utility::conversions::to_string_t("serialRun")] = ModelBase::toJson(serialRun_);
    }
    if(taskStopTimeIsSet_) {
        val[utility::conversions::to_string_t("taskStopTime")] = ModelBase::toJson(taskStopTime_);
    }
    if(taskTimeoutIsSet_) {
        val[utility::conversions::to_string_t("taskTimeout")] = ModelBase::toJson(taskTimeout_);
    }

    return val;
}
bool AdvancedConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("blockEnable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blockEnable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("caseTimeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("caseTimeout"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableCookie"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableCookie"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableCookie(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("headerDefault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("headerDefault"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeaderDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("httpTimeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("httpTimeout"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("octopusImage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("octopusImage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOctopusImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parallelNumber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parallelNumber"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParallelNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxyAuthName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxyAuthName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyAuthName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxyAuthPassword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxyAuthPassword"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyAuthPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxyHostName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxyHostName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyHostName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxyPort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxyPort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serialRun"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serialRun"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialRun(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taskStopTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskStopTime"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskStopTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taskTimeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskTimeout"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskTimeout(refVal);
        }
    }
    return ok;
}


std::string AdvancedConfig::getBlockEnable() const
{
    return blockEnable_;
}

void AdvancedConfig::setBlockEnable(const std::string& value)
{
    blockEnable_ = value;
    blockEnableIsSet_ = true;
}

bool AdvancedConfig::blockEnableIsSet() const
{
    return blockEnableIsSet_;
}

void AdvancedConfig::unsetblockEnable()
{
    blockEnableIsSet_ = false;
}

int64_t AdvancedConfig::getCaseTimeout() const
{
    return caseTimeout_;
}

void AdvancedConfig::setCaseTimeout(int64_t value)
{
    caseTimeout_ = value;
    caseTimeoutIsSet_ = true;
}

bool AdvancedConfig::caseTimeoutIsSet() const
{
    return caseTimeoutIsSet_;
}

void AdvancedConfig::unsetcaseTimeout()
{
    caseTimeoutIsSet_ = false;
}

std::string AdvancedConfig::getEnableCookie() const
{
    return enableCookie_;
}

void AdvancedConfig::setEnableCookie(const std::string& value)
{
    enableCookie_ = value;
    enableCookieIsSet_ = true;
}

bool AdvancedConfig::enableCookieIsSet() const
{
    return enableCookieIsSet_;
}

void AdvancedConfig::unsetenableCookie()
{
    enableCookieIsSet_ = false;
}

std::string AdvancedConfig::getHeaderDefault() const
{
    return headerDefault_;
}

void AdvancedConfig::setHeaderDefault(const std::string& value)
{
    headerDefault_ = value;
    headerDefaultIsSet_ = true;
}

bool AdvancedConfig::headerDefaultIsSet() const
{
    return headerDefaultIsSet_;
}

void AdvancedConfig::unsetheaderDefault()
{
    headerDefaultIsSet_ = false;
}

int64_t AdvancedConfig::getHttpTimeout() const
{
    return httpTimeout_;
}

void AdvancedConfig::setHttpTimeout(int64_t value)
{
    httpTimeout_ = value;
    httpTimeoutIsSet_ = true;
}

bool AdvancedConfig::httpTimeoutIsSet() const
{
    return httpTimeoutIsSet_;
}

void AdvancedConfig::unsethttpTimeout()
{
    httpTimeoutIsSet_ = false;
}

std::string AdvancedConfig::getOctopusImage() const
{
    return octopusImage_;
}

void AdvancedConfig::setOctopusImage(const std::string& value)
{
    octopusImage_ = value;
    octopusImageIsSet_ = true;
}

bool AdvancedConfig::octopusImageIsSet() const
{
    return octopusImageIsSet_;
}

void AdvancedConfig::unsetoctopusImage()
{
    octopusImageIsSet_ = false;
}

int32_t AdvancedConfig::getParallelNumber() const
{
    return parallelNumber_;
}

void AdvancedConfig::setParallelNumber(int32_t value)
{
    parallelNumber_ = value;
    parallelNumberIsSet_ = true;
}

bool AdvancedConfig::parallelNumberIsSet() const
{
    return parallelNumberIsSet_;
}

void AdvancedConfig::unsetparallelNumber()
{
    parallelNumberIsSet_ = false;
}

std::string AdvancedConfig::getProxyAuthName() const
{
    return proxyAuthName_;
}

void AdvancedConfig::setProxyAuthName(const std::string& value)
{
    proxyAuthName_ = value;
    proxyAuthNameIsSet_ = true;
}

bool AdvancedConfig::proxyAuthNameIsSet() const
{
    return proxyAuthNameIsSet_;
}

void AdvancedConfig::unsetproxyAuthName()
{
    proxyAuthNameIsSet_ = false;
}

std::string AdvancedConfig::getProxyAuthPassword() const
{
    return proxyAuthPassword_;
}

void AdvancedConfig::setProxyAuthPassword(const std::string& value)
{
    proxyAuthPassword_ = value;
    proxyAuthPasswordIsSet_ = true;
}

bool AdvancedConfig::proxyAuthPasswordIsSet() const
{
    return proxyAuthPasswordIsSet_;
}

void AdvancedConfig::unsetproxyAuthPassword()
{
    proxyAuthPasswordIsSet_ = false;
}

std::string AdvancedConfig::getProxyHostName() const
{
    return proxyHostName_;
}

void AdvancedConfig::setProxyHostName(const std::string& value)
{
    proxyHostName_ = value;
    proxyHostNameIsSet_ = true;
}

bool AdvancedConfig::proxyHostNameIsSet() const
{
    return proxyHostNameIsSet_;
}

void AdvancedConfig::unsetproxyHostName()
{
    proxyHostNameIsSet_ = false;
}

std::string AdvancedConfig::getProxyPort() const
{
    return proxyPort_;
}

void AdvancedConfig::setProxyPort(const std::string& value)
{
    proxyPort_ = value;
    proxyPortIsSet_ = true;
}

bool AdvancedConfig::proxyPortIsSet() const
{
    return proxyPortIsSet_;
}

void AdvancedConfig::unsetproxyPort()
{
    proxyPortIsSet_ = false;
}

std::string AdvancedConfig::getSerialRun() const
{
    return serialRun_;
}

void AdvancedConfig::setSerialRun(const std::string& value)
{
    serialRun_ = value;
    serialRunIsSet_ = true;
}

bool AdvancedConfig::serialRunIsSet() const
{
    return serialRunIsSet_;
}

void AdvancedConfig::unsetserialRun()
{
    serialRunIsSet_ = false;
}

utility::datetime AdvancedConfig::getTaskStopTime() const
{
    return taskStopTime_;
}

void AdvancedConfig::setTaskStopTime(const utility::datetime& value)
{
    taskStopTime_ = value;
    taskStopTimeIsSet_ = true;
}

bool AdvancedConfig::taskStopTimeIsSet() const
{
    return taskStopTimeIsSet_;
}

void AdvancedConfig::unsettaskStopTime()
{
    taskStopTimeIsSet_ = false;
}

int64_t AdvancedConfig::getTaskTimeout() const
{
    return taskTimeout_;
}

void AdvancedConfig::setTaskTimeout(int64_t value)
{
    taskTimeout_ = value;
    taskTimeoutIsSet_ = true;
}

bool AdvancedConfig::taskTimeoutIsSet() const
{
    return taskTimeoutIsSet_;
}

void AdvancedConfig::unsettaskTimeout()
{
    taskTimeoutIsSet_ = false;
}

}
}
}
}
}


