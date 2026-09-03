

#include "huaweicloud/cloudtest/v1/model/ErrorAlert.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ErrorAlert::ErrorAlert()
{
    alertTemplateIsSet_ = false;
    enable_ = "";
    enableIsSet_ = false;
    taskErrorPolicyIsSet_ = false;
}

ErrorAlert::~ErrorAlert() = default;

void ErrorAlert::validate()
{
}

web::json::value ErrorAlert::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertTemplateIsSet_) {
        val[utility::conversions::to_string_t("alert_template")] = ModelBase::toJson(alertTemplate_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(taskErrorPolicyIsSet_) {
        val[utility::conversions::to_string_t("taskErrorPolicy")] = ModelBase::toJson(taskErrorPolicy_);
    }

    return val;
}
bool ErrorAlert::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("taskErrorPolicy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskErrorPolicy"));
        if(!fieldValue.is_null())
        {
            TaskErrorPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskErrorPolicy(refVal);
        }
    }
    return ok;
}


AlertTemplate ErrorAlert::getAlertTemplate() const
{
    return alertTemplate_;
}

void ErrorAlert::setAlertTemplate(const AlertTemplate& value)
{
    alertTemplate_ = value;
    alertTemplateIsSet_ = true;
}

bool ErrorAlert::alertTemplateIsSet() const
{
    return alertTemplateIsSet_;
}

void ErrorAlert::unsetalertTemplate()
{
    alertTemplateIsSet_ = false;
}

std::string ErrorAlert::getEnable() const
{
    return enable_;
}

void ErrorAlert::setEnable(const std::string& value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool ErrorAlert::enableIsSet() const
{
    return enableIsSet_;
}

void ErrorAlert::unsetenable()
{
    enableIsSet_ = false;
}

TaskErrorPolicy ErrorAlert::getTaskErrorPolicy() const
{
    return taskErrorPolicy_;
}

void ErrorAlert::setTaskErrorPolicy(const TaskErrorPolicy& value)
{
    taskErrorPolicy_ = value;
    taskErrorPolicyIsSet_ = true;
}

bool ErrorAlert::taskErrorPolicyIsSet() const
{
    return taskErrorPolicyIsSet_;
}

void ErrorAlert::unsettaskErrorPolicy()
{
    taskErrorPolicyIsSet_ = false;
}

}
}
}
}
}


