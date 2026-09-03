

#include "huaweicloud/cloudtest/v1/model/TestCaseTemplateVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCaseTemplateVo::TestCaseTemplateVo()
{
    alertTemplateId_ = "";
    alertTemplateIdIsSet_ = false;
    testcaseId_ = "";
    testcaseIdIsSet_ = false;
}

TestCaseTemplateVo::~TestCaseTemplateVo() = default;

void TestCaseTemplateVo::validate()
{
}

web::json::value TestCaseTemplateVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("alertTemplateId")] = ModelBase::toJson(alertTemplateId_);
    }
    if(testcaseIdIsSet_) {
        val[utility::conversions::to_string_t("testcase_id")] = ModelBase::toJson(testcaseId_);
    }

    return val;
}
bool TestCaseTemplateVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alertTemplateId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alertTemplateId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseId(refVal);
        }
    }
    return ok;
}


std::string TestCaseTemplateVo::getAlertTemplateId() const
{
    return alertTemplateId_;
}

void TestCaseTemplateVo::setAlertTemplateId(const std::string& value)
{
    alertTemplateId_ = value;
    alertTemplateIdIsSet_ = true;
}

bool TestCaseTemplateVo::alertTemplateIdIsSet() const
{
    return alertTemplateIdIsSet_;
}

void TestCaseTemplateVo::unsetalertTemplateId()
{
    alertTemplateIdIsSet_ = false;
}

std::string TestCaseTemplateVo::getTestcaseId() const
{
    return testcaseId_;
}

void TestCaseTemplateVo::setTestcaseId(const std::string& value)
{
    testcaseId_ = value;
    testcaseIdIsSet_ = true;
}

bool TestCaseTemplateVo::testcaseIdIsSet() const
{
    return testcaseIdIsSet_;
}

void TestCaseTemplateVo::unsettestcaseId()
{
    testcaseIdIsSet_ = false;
}

}
}
}
}
}


