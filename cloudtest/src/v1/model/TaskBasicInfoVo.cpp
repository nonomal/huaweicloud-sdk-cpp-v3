

#include "huaweicloud/cloudtest/v1/model/TaskBasicInfoVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskBasicInfoVo::TaskBasicInfoVo()
{
    errorReason_ = "";
    errorReasonIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    taskState_ = 0;
    taskStateIsSet_ = false;
    testSuiteType_ = 0;
    testSuiteTypeIsSet_ = false;
}

TaskBasicInfoVo::~TaskBasicInfoVo() = default;

void TaskBasicInfoVo::validate()
{
}

web::json::value TaskBasicInfoVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorReasonIsSet_) {
        val[utility::conversions::to_string_t("error_reason")] = ModelBase::toJson(errorReason_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(taskStateIsSet_) {
        val[utility::conversions::to_string_t("task_state")] = ModelBase::toJson(taskState_);
    }
    if(testSuiteTypeIsSet_) {
        val[utility::conversions::to_string_t("test_suite_type")] = ModelBase::toJson(testSuiteType_);
    }

    return val;
}
bool TaskBasicInfoVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorReason(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_suite_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_suite_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestSuiteType(refVal);
        }
    }
    return ok;
}


std::string TaskBasicInfoVo::getErrorReason() const
{
    return errorReason_;
}

void TaskBasicInfoVo::setErrorReason(const std::string& value)
{
    errorReason_ = value;
    errorReasonIsSet_ = true;
}

bool TaskBasicInfoVo::errorReasonIsSet() const
{
    return errorReasonIsSet_;
}

void TaskBasicInfoVo::unseterrorReason()
{
    errorReasonIsSet_ = false;
}

std::string TaskBasicInfoVo::getId() const
{
    return id_;
}

void TaskBasicInfoVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TaskBasicInfoVo::idIsSet() const
{
    return idIsSet_;
}

void TaskBasicInfoVo::unsetid()
{
    idIsSet_ = false;
}

std::string TaskBasicInfoVo::getName() const
{
    return name_;
}

void TaskBasicInfoVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TaskBasicInfoVo::nameIsSet() const
{
    return nameIsSet_;
}

void TaskBasicInfoVo::unsetname()
{
    nameIsSet_ = false;
}

int32_t TaskBasicInfoVo::getTaskState() const
{
    return taskState_;
}

void TaskBasicInfoVo::setTaskState(int32_t value)
{
    taskState_ = value;
    taskStateIsSet_ = true;
}

bool TaskBasicInfoVo::taskStateIsSet() const
{
    return taskStateIsSet_;
}

void TaskBasicInfoVo::unsettaskState()
{
    taskStateIsSet_ = false;
}

int32_t TaskBasicInfoVo::getTestSuiteType() const
{
    return testSuiteType_;
}

void TaskBasicInfoVo::setTestSuiteType(int32_t value)
{
    testSuiteType_ = value;
    testSuiteTypeIsSet_ = true;
}

bool TaskBasicInfoVo::testSuiteTypeIsSet() const
{
    return testSuiteTypeIsSet_;
}

void TaskBasicInfoVo::unsettestSuiteType()
{
    testSuiteTypeIsSet_ = false;
}

}
}
}
}
}


