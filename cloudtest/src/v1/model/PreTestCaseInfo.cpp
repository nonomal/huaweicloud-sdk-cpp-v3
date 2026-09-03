

#include "huaweicloud/cloudtest/v1/model/PreTestCaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




PreTestCaseInfo::PreTestCaseInfo()
{
    alertTemplateIsSet_ = false;
    enable_ = "";
    enableIsSet_ = false;
    testCasesIsSet_ = false;
}

PreTestCaseInfo::~PreTestCaseInfo() = default;

void PreTestCaseInfo::validate()
{
}

web::json::value PreTestCaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertTemplateIsSet_) {
        val[utility::conversions::to_string_t("alert_template")] = ModelBase::toJson(alertTemplate_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(testCasesIsSet_) {
        val[utility::conversions::to_string_t("testCases")] = ModelBase::toJson(testCases_);
    }

    return val;
}
bool PreTestCaseInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("testCases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCases"));
        if(!fieldValue.is_null())
        {
            std::vector<TestCaseBasicInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCases(refVal);
        }
    }
    return ok;
}


AlertTemplate PreTestCaseInfo::getAlertTemplate() const
{
    return alertTemplate_;
}

void PreTestCaseInfo::setAlertTemplate(const AlertTemplate& value)
{
    alertTemplate_ = value;
    alertTemplateIsSet_ = true;
}

bool PreTestCaseInfo::alertTemplateIsSet() const
{
    return alertTemplateIsSet_;
}

void PreTestCaseInfo::unsetalertTemplate()
{
    alertTemplateIsSet_ = false;
}

std::string PreTestCaseInfo::getEnable() const
{
    return enable_;
}

void PreTestCaseInfo::setEnable(const std::string& value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool PreTestCaseInfo::enableIsSet() const
{
    return enableIsSet_;
}

void PreTestCaseInfo::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<TestCaseBasicInfo>& PreTestCaseInfo::getTestCases()
{
    return testCases_;
}

void PreTestCaseInfo::setTestCases(const std::vector<TestCaseBasicInfo>& value)
{
    testCases_ = value;
    testCasesIsSet_ = true;
}

bool PreTestCaseInfo::testCasesIsSet() const
{
    return testCasesIsSet_;
}

void PreTestCaseInfo::unsettestCases()
{
    testCasesIsSet_ = false;
}

}
}
}
}
}


