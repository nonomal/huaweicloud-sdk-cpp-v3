

#include "huaweicloud/cloudtest/v1/model/AlertConfigVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




AlertConfigVo::AlertConfigVo()
{
    alertExpressionIsSet_ = false;
    alertPeriodBegin_ = "";
    alertPeriodBeginIsSet_ = false;
    alertPeriodEnd_ = "";
    alertPeriodEndIsSet_ = false;
    blockAlertIsSet_ = false;
    defaultAlertTemplateIsSet_ = false;
    enable_ = "";
    enableIsSet_ = false;
    errorAlertIsSet_ = false;
    failedAlertIsSet_ = false;
    recoverNoticeEnable_ = "";
    recoverNoticeEnableIsSet_ = false;
    restrainAlertEnable_ = "";
    restrainAlertEnableIsSet_ = false;
    resumeAlertNum_ = 0;
    resumeAlertNumIsSet_ = false;
    resumeAlertTime_ = "";
    resumeAlertTimeIsSet_ = false;
    timeoutAlertIsSet_ = false;
    timeoutAlertV4IsSet_ = false;
}

AlertConfigVo::~AlertConfigVo() = default;

void AlertConfigVo::validate()
{
}

web::json::value AlertConfigVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertExpressionIsSet_) {
        val[utility::conversions::to_string_t("alert_expression")] = ModelBase::toJson(alertExpression_);
    }
    if(alertPeriodBeginIsSet_) {
        val[utility::conversions::to_string_t("alertPeriodBegin")] = ModelBase::toJson(alertPeriodBegin_);
    }
    if(alertPeriodEndIsSet_) {
        val[utility::conversions::to_string_t("alertPeriodEnd")] = ModelBase::toJson(alertPeriodEnd_);
    }
    if(blockAlertIsSet_) {
        val[utility::conversions::to_string_t("blockAlert")] = ModelBase::toJson(blockAlert_);
    }
    if(defaultAlertTemplateIsSet_) {
        val[utility::conversions::to_string_t("defaultAlertTemplate")] = ModelBase::toJson(defaultAlertTemplate_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(errorAlertIsSet_) {
        val[utility::conversions::to_string_t("errorAlert")] = ModelBase::toJson(errorAlert_);
    }
    if(failedAlertIsSet_) {
        val[utility::conversions::to_string_t("failedAlert")] = ModelBase::toJson(failedAlert_);
    }
    if(recoverNoticeEnableIsSet_) {
        val[utility::conversions::to_string_t("recoverNoticeEnable")] = ModelBase::toJson(recoverNoticeEnable_);
    }
    if(restrainAlertEnableIsSet_) {
        val[utility::conversions::to_string_t("restrainAlertEnable")] = ModelBase::toJson(restrainAlertEnable_);
    }
    if(resumeAlertNumIsSet_) {
        val[utility::conversions::to_string_t("resume_alert_num")] = ModelBase::toJson(resumeAlertNum_);
    }
    if(resumeAlertTimeIsSet_) {
        val[utility::conversions::to_string_t("resumeAlertTime")] = ModelBase::toJson(resumeAlertTime_);
    }
    if(timeoutAlertIsSet_) {
        val[utility::conversions::to_string_t("timeoutAlert")] = ModelBase::toJson(timeoutAlert_);
    }
    if(timeoutAlertV4IsSet_) {
        val[utility::conversions::to_string_t("timeoutAlertV4")] = ModelBase::toJson(timeoutAlertV4_);
    }

    return val;
}
bool AlertConfigVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alert_expression"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_expression"));
        if(!fieldValue.is_null())
        {
            std::vector<AlertExpression> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertExpression(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alertPeriodBegin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alertPeriodBegin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertPeriodBegin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alertPeriodEnd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alertPeriodEnd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertPeriodEnd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blockAlert"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blockAlert"));
        if(!fieldValue.is_null())
        {
            BlockAlert refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockAlert(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultAlertTemplate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultAlertTemplate"));
        if(!fieldValue.is_null())
        {
            AlertTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultAlertTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errorAlert"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errorAlert"));
        if(!fieldValue.is_null())
        {
            ErrorAlert refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorAlert(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failedAlert"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failedAlert"));
        if(!fieldValue.is_null())
        {
            FailedAlert refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedAlert(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recoverNoticeEnable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recoverNoticeEnable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoverNoticeEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restrainAlertEnable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restrainAlertEnable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestrainAlertEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resume_alert_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resume_alert_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResumeAlertNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resumeAlertTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resumeAlertTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResumeAlertTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeoutAlert"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeoutAlert"));
        if(!fieldValue.is_null())
        {
            TimeoutAlert refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeoutAlert(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeoutAlertV4"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeoutAlertV4"));
        if(!fieldValue.is_null())
        {
            TimeoutAlert refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeoutAlertV4(refVal);
        }
    }
    return ok;
}


std::vector<AlertExpression>& AlertConfigVo::getAlertExpression()
{
    return alertExpression_;
}

void AlertConfigVo::setAlertExpression(const std::vector<AlertExpression>& value)
{
    alertExpression_ = value;
    alertExpressionIsSet_ = true;
}

bool AlertConfigVo::alertExpressionIsSet() const
{
    return alertExpressionIsSet_;
}

void AlertConfigVo::unsetalertExpression()
{
    alertExpressionIsSet_ = false;
}

std::string AlertConfigVo::getAlertPeriodBegin() const
{
    return alertPeriodBegin_;
}

void AlertConfigVo::setAlertPeriodBegin(const std::string& value)
{
    alertPeriodBegin_ = value;
    alertPeriodBeginIsSet_ = true;
}

bool AlertConfigVo::alertPeriodBeginIsSet() const
{
    return alertPeriodBeginIsSet_;
}

void AlertConfigVo::unsetalertPeriodBegin()
{
    alertPeriodBeginIsSet_ = false;
}

std::string AlertConfigVo::getAlertPeriodEnd() const
{
    return alertPeriodEnd_;
}

void AlertConfigVo::setAlertPeriodEnd(const std::string& value)
{
    alertPeriodEnd_ = value;
    alertPeriodEndIsSet_ = true;
}

bool AlertConfigVo::alertPeriodEndIsSet() const
{
    return alertPeriodEndIsSet_;
}

void AlertConfigVo::unsetalertPeriodEnd()
{
    alertPeriodEndIsSet_ = false;
}

BlockAlert AlertConfigVo::getBlockAlert() const
{
    return blockAlert_;
}

void AlertConfigVo::setBlockAlert(const BlockAlert& value)
{
    blockAlert_ = value;
    blockAlertIsSet_ = true;
}

bool AlertConfigVo::blockAlertIsSet() const
{
    return blockAlertIsSet_;
}

void AlertConfigVo::unsetblockAlert()
{
    blockAlertIsSet_ = false;
}

AlertTemplate AlertConfigVo::getDefaultAlertTemplate() const
{
    return defaultAlertTemplate_;
}

void AlertConfigVo::setDefaultAlertTemplate(const AlertTemplate& value)
{
    defaultAlertTemplate_ = value;
    defaultAlertTemplateIsSet_ = true;
}

bool AlertConfigVo::defaultAlertTemplateIsSet() const
{
    return defaultAlertTemplateIsSet_;
}

void AlertConfigVo::unsetdefaultAlertTemplate()
{
    defaultAlertTemplateIsSet_ = false;
}

std::string AlertConfigVo::getEnable() const
{
    return enable_;
}

void AlertConfigVo::setEnable(const std::string& value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool AlertConfigVo::enableIsSet() const
{
    return enableIsSet_;
}

void AlertConfigVo::unsetenable()
{
    enableIsSet_ = false;
}

ErrorAlert AlertConfigVo::getErrorAlert() const
{
    return errorAlert_;
}

void AlertConfigVo::setErrorAlert(const ErrorAlert& value)
{
    errorAlert_ = value;
    errorAlertIsSet_ = true;
}

bool AlertConfigVo::errorAlertIsSet() const
{
    return errorAlertIsSet_;
}

void AlertConfigVo::unseterrorAlert()
{
    errorAlertIsSet_ = false;
}

FailedAlert AlertConfigVo::getFailedAlert() const
{
    return failedAlert_;
}

void AlertConfigVo::setFailedAlert(const FailedAlert& value)
{
    failedAlert_ = value;
    failedAlertIsSet_ = true;
}

bool AlertConfigVo::failedAlertIsSet() const
{
    return failedAlertIsSet_;
}

void AlertConfigVo::unsetfailedAlert()
{
    failedAlertIsSet_ = false;
}

std::string AlertConfigVo::getRecoverNoticeEnable() const
{
    return recoverNoticeEnable_;
}

void AlertConfigVo::setRecoverNoticeEnable(const std::string& value)
{
    recoverNoticeEnable_ = value;
    recoverNoticeEnableIsSet_ = true;
}

bool AlertConfigVo::recoverNoticeEnableIsSet() const
{
    return recoverNoticeEnableIsSet_;
}

void AlertConfigVo::unsetrecoverNoticeEnable()
{
    recoverNoticeEnableIsSet_ = false;
}

std::string AlertConfigVo::getRestrainAlertEnable() const
{
    return restrainAlertEnable_;
}

void AlertConfigVo::setRestrainAlertEnable(const std::string& value)
{
    restrainAlertEnable_ = value;
    restrainAlertEnableIsSet_ = true;
}

bool AlertConfigVo::restrainAlertEnableIsSet() const
{
    return restrainAlertEnableIsSet_;
}

void AlertConfigVo::unsetrestrainAlertEnable()
{
    restrainAlertEnableIsSet_ = false;
}

int32_t AlertConfigVo::getResumeAlertNum() const
{
    return resumeAlertNum_;
}

void AlertConfigVo::setResumeAlertNum(int32_t value)
{
    resumeAlertNum_ = value;
    resumeAlertNumIsSet_ = true;
}

bool AlertConfigVo::resumeAlertNumIsSet() const
{
    return resumeAlertNumIsSet_;
}

void AlertConfigVo::unsetresumeAlertNum()
{
    resumeAlertNumIsSet_ = false;
}

std::string AlertConfigVo::getResumeAlertTime() const
{
    return resumeAlertTime_;
}

void AlertConfigVo::setResumeAlertTime(const std::string& value)
{
    resumeAlertTime_ = value;
    resumeAlertTimeIsSet_ = true;
}

bool AlertConfigVo::resumeAlertTimeIsSet() const
{
    return resumeAlertTimeIsSet_;
}

void AlertConfigVo::unsetresumeAlertTime()
{
    resumeAlertTimeIsSet_ = false;
}

TimeoutAlert AlertConfigVo::getTimeoutAlert() const
{
    return timeoutAlert_;
}

void AlertConfigVo::setTimeoutAlert(const TimeoutAlert& value)
{
    timeoutAlert_ = value;
    timeoutAlertIsSet_ = true;
}

bool AlertConfigVo::timeoutAlertIsSet() const
{
    return timeoutAlertIsSet_;
}

void AlertConfigVo::unsettimeoutAlert()
{
    timeoutAlertIsSet_ = false;
}

TimeoutAlert AlertConfigVo::getTimeoutAlertV4() const
{
    return timeoutAlertV4_;
}

void AlertConfigVo::setTimeoutAlertV4(const TimeoutAlert& value)
{
    timeoutAlertV4_ = value;
    timeoutAlertV4IsSet_ = true;
}

bool AlertConfigVo::timeoutAlertV4IsSet() const
{
    return timeoutAlertV4IsSet_;
}

void AlertConfigVo::unsettimeoutAlertV4()
{
    timeoutAlertV4IsSet_ = false;
}

}
}
}
}
}


