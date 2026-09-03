

#include "huaweicloud/gaussdb/v3/model/ExecuteWindow.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ExecuteWindow::ExecuteWindow()
{
    plannedExecutionDay_ = "";
    plannedExecutionDayIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ExecuteWindow::~ExecuteWindow() = default;

void ExecuteWindow::validate()
{
}

web::json::value ExecuteWindow::toJson() const
{
    web::json::value val = web::json::value::object();

    if(plannedExecutionDayIsSet_) {
        val[utility::conversions::to_string_t("planned_execution_day")] = ModelBase::toJson(plannedExecutionDay_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ExecuteWindow::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("planned_execution_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("planned_execution_day"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlannedExecutionDay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ExecuteWindow::getPlannedExecutionDay() const
{
    return plannedExecutionDay_;
}

void ExecuteWindow::setPlannedExecutionDay(const std::string& value)
{
    plannedExecutionDay_ = value;
    plannedExecutionDayIsSet_ = true;
}

bool ExecuteWindow::plannedExecutionDayIsSet() const
{
    return plannedExecutionDayIsSet_;
}

void ExecuteWindow::unsetplannedExecutionDay()
{
    plannedExecutionDayIsSet_ = false;
}

std::string ExecuteWindow::getStartTime() const
{
    return startTime_;
}

void ExecuteWindow::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ExecuteWindow::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ExecuteWindow::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ExecuteWindow::getEndTime() const
{
    return endTime_;
}

void ExecuteWindow::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ExecuteWindow::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ExecuteWindow::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


