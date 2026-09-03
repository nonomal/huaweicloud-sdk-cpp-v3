

#include "huaweicloud/cloudtest/v1/model/CloudTestCaseOperationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CloudTestCaseOperationInfo::CloudTestCaseOperationInfo()
{
    setUpCasesInfoIsSet_ = false;
    tearDownCasesInfoIsSet_ = false;
    testCasesInfoIsSet_ = false;
}

CloudTestCaseOperationInfo::~CloudTestCaseOperationInfo() = default;

void CloudTestCaseOperationInfo::validate()
{
}

web::json::value CloudTestCaseOperationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setUpCasesInfoIsSet_) {
        val[utility::conversions::to_string_t("setUpCasesInfo")] = ModelBase::toJson(setUpCasesInfo_);
    }
    if(tearDownCasesInfoIsSet_) {
        val[utility::conversions::to_string_t("tearDownCasesInfo")] = ModelBase::toJson(tearDownCasesInfo_);
    }
    if(testCasesInfoIsSet_) {
        val[utility::conversions::to_string_t("testCasesInfo")] = ModelBase::toJson(testCasesInfo_);
    }

    return val;
}
bool CloudTestCaseOperationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("setUpCasesInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setUpCasesInfo"));
        if(!fieldValue.is_null())
        {
            std::vector<CloudTestCaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetUpCasesInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tearDownCasesInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tearDownCasesInfo"));
        if(!fieldValue.is_null())
        {
            std::vector<CloudTestCaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTearDownCasesInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testCasesInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCasesInfo"));
        if(!fieldValue.is_null())
        {
            std::vector<CloudTestCaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCasesInfo(refVal);
        }
    }
    return ok;
}


std::vector<CloudTestCaseInfo>& CloudTestCaseOperationInfo::getSetUpCasesInfo()
{
    return setUpCasesInfo_;
}

void CloudTestCaseOperationInfo::setSetUpCasesInfo(const std::vector<CloudTestCaseInfo>& value)
{
    setUpCasesInfo_ = value;
    setUpCasesInfoIsSet_ = true;
}

bool CloudTestCaseOperationInfo::setUpCasesInfoIsSet() const
{
    return setUpCasesInfoIsSet_;
}

void CloudTestCaseOperationInfo::unsetsetUpCasesInfo()
{
    setUpCasesInfoIsSet_ = false;
}

std::vector<CloudTestCaseInfo>& CloudTestCaseOperationInfo::getTearDownCasesInfo()
{
    return tearDownCasesInfo_;
}

void CloudTestCaseOperationInfo::setTearDownCasesInfo(const std::vector<CloudTestCaseInfo>& value)
{
    tearDownCasesInfo_ = value;
    tearDownCasesInfoIsSet_ = true;
}

bool CloudTestCaseOperationInfo::tearDownCasesInfoIsSet() const
{
    return tearDownCasesInfoIsSet_;
}

void CloudTestCaseOperationInfo::unsettearDownCasesInfo()
{
    tearDownCasesInfoIsSet_ = false;
}

std::vector<CloudTestCaseInfo>& CloudTestCaseOperationInfo::getTestCasesInfo()
{
    return testCasesInfo_;
}

void CloudTestCaseOperationInfo::setTestCasesInfo(const std::vector<CloudTestCaseInfo>& value)
{
    testCasesInfo_ = value;
    testCasesInfoIsSet_ = true;
}

bool CloudTestCaseOperationInfo::testCasesInfoIsSet() const
{
    return testCasesInfoIsSet_;
}

void CloudTestCaseOperationInfo::unsettestCasesInfo()
{
    testCasesInfoIsSet_ = false;
}

}
}
}
}
}


