

#include "huaweicloud/cloudtest/v1/model/CloudTestCaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CloudTestCaseInfo::CloudTestCaseInfo()
{
    caseId_ = "";
    caseIdIsSet_ = false;
    caseType_ = 0;
    caseTypeIsSet_ = false;
    isForbidden_ = 0;
    isForbiddenIsSet_ = false;
    ownerIsSet_ = false;
    resultIsSet_ = false;
    scriptUrl_ = "";
    scriptUrlIsSet_ = false;
    statusIsSet_ = false;
    testCaseName_ = "";
    testCaseNameIsSet_ = false;
    testCaseNumber_ = "";
    testCaseNumberIsSet_ = false;
    tmssVersionUri_ = "";
    tmssVersionUriIsSet_ = false;
}

CloudTestCaseInfo::~CloudTestCaseInfo() = default;

void CloudTestCaseInfo::validate()
{
}

web::json::value CloudTestCaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseIdIsSet_) {
        val[utility::conversions::to_string_t("case_id")] = ModelBase::toJson(caseId_);
    }
    if(caseTypeIsSet_) {
        val[utility::conversions::to_string_t("caseType")] = ModelBase::toJson(caseType_);
    }
    if(isForbiddenIsSet_) {
        val[utility::conversions::to_string_t("is_forbidden")] = ModelBase::toJson(isForbidden_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(scriptUrlIsSet_) {
        val[utility::conversions::to_string_t("scriptUrl")] = ModelBase::toJson(scriptUrl_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(testCaseNameIsSet_) {
        val[utility::conversions::to_string_t("testCaseName")] = ModelBase::toJson(testCaseName_);
    }
    if(testCaseNumberIsSet_) {
        val[utility::conversions::to_string_t("testCaseNumber")] = ModelBase::toJson(testCaseNumber_);
    }
    if(tmssVersionUriIsSet_) {
        val[utility::conversions::to_string_t("tmssVersionUri")] = ModelBase::toJson(tmssVersionUri_);
    }

    return val;
}
bool CloudTestCaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("caseType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("caseType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_forbidden"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_forbidden"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsForbidden(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            CommonDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            CommonDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scriptUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scriptUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            CommonDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testCaseName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCaseName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testCaseNumber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCaseNumber"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tmssVersionUri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tmssVersionUri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTmssVersionUri(refVal);
        }
    }
    return ok;
}


std::string CloudTestCaseInfo::getCaseId() const
{
    return caseId_;
}

void CloudTestCaseInfo::setCaseId(const std::string& value)
{
    caseId_ = value;
    caseIdIsSet_ = true;
}

bool CloudTestCaseInfo::caseIdIsSet() const
{
    return caseIdIsSet_;
}

void CloudTestCaseInfo::unsetcaseId()
{
    caseIdIsSet_ = false;
}

int32_t CloudTestCaseInfo::getCaseType() const
{
    return caseType_;
}

void CloudTestCaseInfo::setCaseType(int32_t value)
{
    caseType_ = value;
    caseTypeIsSet_ = true;
}

bool CloudTestCaseInfo::caseTypeIsSet() const
{
    return caseTypeIsSet_;
}

void CloudTestCaseInfo::unsetcaseType()
{
    caseTypeIsSet_ = false;
}

int32_t CloudTestCaseInfo::getIsForbidden() const
{
    return isForbidden_;
}

void CloudTestCaseInfo::setIsForbidden(int32_t value)
{
    isForbidden_ = value;
    isForbiddenIsSet_ = true;
}

bool CloudTestCaseInfo::isForbiddenIsSet() const
{
    return isForbiddenIsSet_;
}

void CloudTestCaseInfo::unsetisForbidden()
{
    isForbiddenIsSet_ = false;
}

CommonDto CloudTestCaseInfo::getOwner() const
{
    return owner_;
}

void CloudTestCaseInfo::setOwner(const CommonDto& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool CloudTestCaseInfo::ownerIsSet() const
{
    return ownerIsSet_;
}

void CloudTestCaseInfo::unsetowner()
{
    ownerIsSet_ = false;
}

CommonDto CloudTestCaseInfo::getResult() const
{
    return result_;
}

void CloudTestCaseInfo::setResult(const CommonDto& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CloudTestCaseInfo::resultIsSet() const
{
    return resultIsSet_;
}

void CloudTestCaseInfo::unsetresult()
{
    resultIsSet_ = false;
}

std::string CloudTestCaseInfo::getScriptUrl() const
{
    return scriptUrl_;
}

void CloudTestCaseInfo::setScriptUrl(const std::string& value)
{
    scriptUrl_ = value;
    scriptUrlIsSet_ = true;
}

bool CloudTestCaseInfo::scriptUrlIsSet() const
{
    return scriptUrlIsSet_;
}

void CloudTestCaseInfo::unsetscriptUrl()
{
    scriptUrlIsSet_ = false;
}

CommonDto CloudTestCaseInfo::getStatus() const
{
    return status_;
}

void CloudTestCaseInfo::setStatus(const CommonDto& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CloudTestCaseInfo::statusIsSet() const
{
    return statusIsSet_;
}

void CloudTestCaseInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CloudTestCaseInfo::getTestCaseName() const
{
    return testCaseName_;
}

void CloudTestCaseInfo::setTestCaseName(const std::string& value)
{
    testCaseName_ = value;
    testCaseNameIsSet_ = true;
}

bool CloudTestCaseInfo::testCaseNameIsSet() const
{
    return testCaseNameIsSet_;
}

void CloudTestCaseInfo::unsettestCaseName()
{
    testCaseNameIsSet_ = false;
}

std::string CloudTestCaseInfo::getTestCaseNumber() const
{
    return testCaseNumber_;
}

void CloudTestCaseInfo::setTestCaseNumber(const std::string& value)
{
    testCaseNumber_ = value;
    testCaseNumberIsSet_ = true;
}

bool CloudTestCaseInfo::testCaseNumberIsSet() const
{
    return testCaseNumberIsSet_;
}

void CloudTestCaseInfo::unsettestCaseNumber()
{
    testCaseNumberIsSet_ = false;
}

std::string CloudTestCaseInfo::getTmssVersionUri() const
{
    return tmssVersionUri_;
}

void CloudTestCaseInfo::setTmssVersionUri(const std::string& value)
{
    tmssVersionUri_ = value;
    tmssVersionUriIsSet_ = true;
}

bool CloudTestCaseInfo::tmssVersionUriIsSet() const
{
    return tmssVersionUriIsSet_;
}

void CloudTestCaseInfo::unsettmssVersionUri()
{
    tmssVersionUriIsSet_ = false;
}

}
}
}
}
}


