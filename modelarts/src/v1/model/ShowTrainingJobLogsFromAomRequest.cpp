

#include "huaweicloud/modelarts/v1/model/ShowTrainingJobLogsFromAomRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingJobLogsFromAomRequest::ShowTrainingJobLogsFromAomRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    baseLine_ = "";
    baseLineIsSet_ = false;
    lines_ = 0;
    linesIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
}

ShowTrainingJobLogsFromAomRequest::~ShowTrainingJobLogsFromAomRequest() = default;

void ShowTrainingJobLogsFromAomRequest::validate()
{
}

web::json::value ShowTrainingJobLogsFromAomRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(baseLineIsSet_) {
        val[utility::conversions::to_string_t("base_line")] = ModelBase::toJson(baseLine_);
    }
    if(linesIsSet_) {
        val[utility::conversions::to_string_t("lines")] = ModelBase::toJson(lines_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }

    return val;
}
bool ShowTrainingJobLogsFromAomRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("training_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_line"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    return ok;
}


std::string ShowTrainingJobLogsFromAomRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowTrainingJobLogsFromAomRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowTrainingJobLogsFromAomRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowTrainingJobLogsFromAomRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

std::string ShowTrainingJobLogsFromAomRequest::getTaskId() const
{
    return taskId_;
}

void ShowTrainingJobLogsFromAomRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTrainingJobLogsFromAomRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTrainingJobLogsFromAomRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowTrainingJobLogsFromAomRequest::getBaseLine() const
{
    return baseLine_;
}

void ShowTrainingJobLogsFromAomRequest::setBaseLine(const std::string& value)
{
    baseLine_ = value;
    baseLineIsSet_ = true;
}

bool ShowTrainingJobLogsFromAomRequest::baseLineIsSet() const
{
    return baseLineIsSet_;
}

void ShowTrainingJobLogsFromAomRequest::unsetbaseLine()
{
    baseLineIsSet_ = false;
}

int32_t ShowTrainingJobLogsFromAomRequest::getLines() const
{
    return lines_;
}

void ShowTrainingJobLogsFromAomRequest::setLines(int32_t value)
{
    lines_ = value;
    linesIsSet_ = true;
}

bool ShowTrainingJobLogsFromAomRequest::linesIsSet() const
{
    return linesIsSet_;
}

void ShowTrainingJobLogsFromAomRequest::unsetlines()
{
    linesIsSet_ = false;
}

std::string ShowTrainingJobLogsFromAomRequest::getOrder() const
{
    return order_;
}

void ShowTrainingJobLogsFromAomRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ShowTrainingJobLogsFromAomRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ShowTrainingJobLogsFromAomRequest::unsetorder()
{
    orderIsSet_ = false;
}

}
}
}
}
}


