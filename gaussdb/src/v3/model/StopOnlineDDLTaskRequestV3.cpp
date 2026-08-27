

#include "huaweicloud/gaussdb/v3/model/StopOnlineDDLTaskRequestV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StopOnlineDDLTaskRequestV3::StopOnlineDDLTaskRequestV3()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

StopOnlineDDLTaskRequestV3::~StopOnlineDDLTaskRequestV3() = default;

void StopOnlineDDLTaskRequestV3::validate()
{
}

web::json::value StopOnlineDDLTaskRequestV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool StopOnlineDDLTaskRequestV3::fromJson(const web::json::value& val)
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
    return ok;
}


std::string StopOnlineDDLTaskRequestV3::getTaskId() const
{
    return taskId_;
}

void StopOnlineDDLTaskRequestV3::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool StopOnlineDDLTaskRequestV3::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void StopOnlineDDLTaskRequestV3::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


