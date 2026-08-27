

#include "huaweicloud/gaussdb/v3/model/ClearOnlineDDLTaskTempTableRequestV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ClearOnlineDDLTaskTempTableRequestV3::ClearOnlineDDLTaskTempTableRequestV3()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskContentIsSet_ = false;
}

ClearOnlineDDLTaskTempTableRequestV3::~ClearOnlineDDLTaskTempTableRequestV3() = default;

void ClearOnlineDDLTaskTempTableRequestV3::validate()
{
}

web::json::value ClearOnlineDDLTaskTempTableRequestV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskContentIsSet_) {
        val[utility::conversions::to_string_t("task_content")] = ModelBase::toJson(taskContent_);
    }

    return val;
}
bool ClearOnlineDDLTaskTempTableRequestV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_content"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskContentItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskContent(refVal);
        }
    }
    return ok;
}


std::string ClearOnlineDDLTaskTempTableRequestV3::getTaskId() const
{
    return taskId_;
}

void ClearOnlineDDLTaskTempTableRequestV3::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ClearOnlineDDLTaskTempTableRequestV3::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ClearOnlineDDLTaskTempTableRequestV3::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::vector<TaskContentItem>& ClearOnlineDDLTaskTempTableRequestV3::getTaskContent()
{
    return taskContent_;
}

void ClearOnlineDDLTaskTempTableRequestV3::setTaskContent(const std::vector<TaskContentItem>& value)
{
    taskContent_ = value;
    taskContentIsSet_ = true;
}

bool ClearOnlineDDLTaskTempTableRequestV3::taskContentIsSet() const
{
    return taskContentIsSet_;
}

void ClearOnlineDDLTaskTempTableRequestV3::unsettaskContent()
{
    taskContentIsSet_ = false;
}

}
}
}
}
}


