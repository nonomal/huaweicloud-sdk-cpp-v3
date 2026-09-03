

#include "huaweicloud/cloudtest/v1/model/BlockAlert.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BlockAlert::BlockAlert()
{
    alertTemplateIsSet_ = false;
    enable_ = "";
    enableIsSet_ = false;
    waitingCount_ = 0;
    waitingCountIsSet_ = false;
}

BlockAlert::~BlockAlert() = default;

void BlockAlert::validate()
{
}

web::json::value BlockAlert::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertTemplateIsSet_) {
        val[utility::conversions::to_string_t("alert_template")] = ModelBase::toJson(alertTemplate_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(waitingCountIsSet_) {
        val[utility::conversions::to_string_t("waitingCount")] = ModelBase::toJson(waitingCount_);
    }

    return val;
}
bool BlockAlert::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alert_template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_template"));
        if(!fieldValue.is_null())
        {
            AlertTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertTemplate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("waitingCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waitingCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitingCount(refVal);
        }
    }
    return ok;
}


AlertTemplate BlockAlert::getAlertTemplate() const
{
    return alertTemplate_;
}

void BlockAlert::setAlertTemplate(const AlertTemplate& value)
{
    alertTemplate_ = value;
    alertTemplateIsSet_ = true;
}

bool BlockAlert::alertTemplateIsSet() const
{
    return alertTemplateIsSet_;
}

void BlockAlert::unsetalertTemplate()
{
    alertTemplateIsSet_ = false;
}

std::string BlockAlert::getEnable() const
{
    return enable_;
}

void BlockAlert::setEnable(const std::string& value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool BlockAlert::enableIsSet() const
{
    return enableIsSet_;
}

void BlockAlert::unsetenable()
{
    enableIsSet_ = false;
}

int32_t BlockAlert::getWaitingCount() const
{
    return waitingCount_;
}

void BlockAlert::setWaitingCount(int32_t value)
{
    waitingCount_ = value;
    waitingCountIsSet_ = true;
}

bool BlockAlert::waitingCountIsSet() const
{
    return waitingCountIsSet_;
}

void BlockAlert::unsetwaitingCount()
{
    waitingCountIsSet_ = false;
}

}
}
}
}
}


