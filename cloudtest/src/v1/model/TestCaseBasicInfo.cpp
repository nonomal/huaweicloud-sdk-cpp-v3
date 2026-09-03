

#include "huaweicloud/cloudtest/v1/model/TestCaseBasicInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestCaseBasicInfo::TestCaseBasicInfo()
{
    alertTemplateIsSet_ = false;
    caseType_ = 0;
    caseTypeIsSet_ = false;
    executorType_ = "";
    executorTypeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    isForbidden_ = false;
    isForbiddenIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    projectUpdateTime_ = 0L;
    projectUpdateTimeIsSet_ = false;
    scriptProjectName_ = "";
    scriptProjectNameIsSet_ = false;
    state_ = 0;
    stateIsSet_ = false;
    svnScriptPath_ = "";
    svnScriptPathIsSet_ = false;
    tmssVersionUri_ = "";
    tmssVersionUriIsSet_ = false;
}

TestCaseBasicInfo::~TestCaseBasicInfo() = default;

void TestCaseBasicInfo::validate()
{
}

web::json::value TestCaseBasicInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertTemplateIsSet_) {
        val[utility::conversions::to_string_t("alert_template")] = ModelBase::toJson(alertTemplate_);
    }
    if(caseTypeIsSet_) {
        val[utility::conversions::to_string_t("caseType")] = ModelBase::toJson(caseType_);
    }
    if(executorTypeIsSet_) {
        val[utility::conversions::to_string_t("executor_type")] = ModelBase::toJson(executorType_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(isForbiddenIsSet_) {
        val[utility::conversions::to_string_t("is_forbidden")] = ModelBase::toJson(isForbidden_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(projectUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("project_update_time")] = ModelBase::toJson(projectUpdateTime_);
    }
    if(scriptProjectNameIsSet_) {
        val[utility::conversions::to_string_t("scriptProjectName")] = ModelBase::toJson(scriptProjectName_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(svnScriptPathIsSet_) {
        val[utility::conversions::to_string_t("svn_script_path")] = ModelBase::toJson(svnScriptPath_);
    }
    if(tmssVersionUriIsSet_) {
        val[utility::conversions::to_string_t("tmssVersionUri")] = ModelBase::toJson(tmssVersionUri_);
    }

    return val;
}
bool TestCaseBasicInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("caseType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("caseType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_forbidden"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_forbidden"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsForbidden(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scriptProjectName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scriptProjectName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("svn_script_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("svn_script_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSvnScriptPath(refVal);
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


AlertTemplate TestCaseBasicInfo::getAlertTemplate() const
{
    return alertTemplate_;
}

void TestCaseBasicInfo::setAlertTemplate(const AlertTemplate& value)
{
    alertTemplate_ = value;
    alertTemplateIsSet_ = true;
}

bool TestCaseBasicInfo::alertTemplateIsSet() const
{
    return alertTemplateIsSet_;
}

void TestCaseBasicInfo::unsetalertTemplate()
{
    alertTemplateIsSet_ = false;
}

int32_t TestCaseBasicInfo::getCaseType() const
{
    return caseType_;
}

void TestCaseBasicInfo::setCaseType(int32_t value)
{
    caseType_ = value;
    caseTypeIsSet_ = true;
}

bool TestCaseBasicInfo::caseTypeIsSet() const
{
    return caseTypeIsSet_;
}

void TestCaseBasicInfo::unsetcaseType()
{
    caseTypeIsSet_ = false;
}

std::string TestCaseBasicInfo::getExecutorType() const
{
    return executorType_;
}

void TestCaseBasicInfo::setExecutorType(const std::string& value)
{
    executorType_ = value;
    executorTypeIsSet_ = true;
}

bool TestCaseBasicInfo::executorTypeIsSet() const
{
    return executorTypeIsSet_;
}

void TestCaseBasicInfo::unsetexecutorType()
{
    executorTypeIsSet_ = false;
}

std::string TestCaseBasicInfo::getId() const
{
    return id_;
}

void TestCaseBasicInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TestCaseBasicInfo::idIsSet() const
{
    return idIsSet_;
}

void TestCaseBasicInfo::unsetid()
{
    idIsSet_ = false;
}

bool TestCaseBasicInfo::isIsForbidden() const
{
    return isForbidden_;
}

void TestCaseBasicInfo::setIsForbidden(bool value)
{
    isForbidden_ = value;
    isForbiddenIsSet_ = true;
}

bool TestCaseBasicInfo::isForbiddenIsSet() const
{
    return isForbiddenIsSet_;
}

void TestCaseBasicInfo::unsetisForbidden()
{
    isForbiddenIsSet_ = false;
}

std::string TestCaseBasicInfo::getName() const
{
    return name_;
}

void TestCaseBasicInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestCaseBasicInfo::nameIsSet() const
{
    return nameIsSet_;
}

void TestCaseBasicInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string TestCaseBasicInfo::getNumber() const
{
    return number_;
}

void TestCaseBasicInfo::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool TestCaseBasicInfo::numberIsSet() const
{
    return numberIsSet_;
}

void TestCaseBasicInfo::unsetnumber()
{
    numberIsSet_ = false;
}

int64_t TestCaseBasicInfo::getProjectUpdateTime() const
{
    return projectUpdateTime_;
}

void TestCaseBasicInfo::setProjectUpdateTime(int64_t value)
{
    projectUpdateTime_ = value;
    projectUpdateTimeIsSet_ = true;
}

bool TestCaseBasicInfo::projectUpdateTimeIsSet() const
{
    return projectUpdateTimeIsSet_;
}

void TestCaseBasicInfo::unsetprojectUpdateTime()
{
    projectUpdateTimeIsSet_ = false;
}

std::string TestCaseBasicInfo::getScriptProjectName() const
{
    return scriptProjectName_;
}

void TestCaseBasicInfo::setScriptProjectName(const std::string& value)
{
    scriptProjectName_ = value;
    scriptProjectNameIsSet_ = true;
}

bool TestCaseBasicInfo::scriptProjectNameIsSet() const
{
    return scriptProjectNameIsSet_;
}

void TestCaseBasicInfo::unsetscriptProjectName()
{
    scriptProjectNameIsSet_ = false;
}

int32_t TestCaseBasicInfo::getState() const
{
    return state_;
}

void TestCaseBasicInfo::setState(int32_t value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TestCaseBasicInfo::stateIsSet() const
{
    return stateIsSet_;
}

void TestCaseBasicInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string TestCaseBasicInfo::getSvnScriptPath() const
{
    return svnScriptPath_;
}

void TestCaseBasicInfo::setSvnScriptPath(const std::string& value)
{
    svnScriptPath_ = value;
    svnScriptPathIsSet_ = true;
}

bool TestCaseBasicInfo::svnScriptPathIsSet() const
{
    return svnScriptPathIsSet_;
}

void TestCaseBasicInfo::unsetsvnScriptPath()
{
    svnScriptPathIsSet_ = false;
}

std::string TestCaseBasicInfo::getTmssVersionUri() const
{
    return tmssVersionUri_;
}

void TestCaseBasicInfo::setTmssVersionUri(const std::string& value)
{
    tmssVersionUri_ = value;
    tmssVersionUriIsSet_ = true;
}

bool TestCaseBasicInfo::tmssVersionUriIsSet() const
{
    return tmssVersionUriIsSet_;
}

void TestCaseBasicInfo::unsettmssVersionUri()
{
    tmssVersionUriIsSet_ = false;
}

}
}
}
}
}


