

#include "huaweicloud/gaussdb/v3/model/DownloadOnlineDDLTaskLogRequestV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DownloadOnlineDDLTaskLogRequestV3::DownloadOnlineDDLTaskLogRequestV3()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DownloadOnlineDDLTaskLogRequestV3::~DownloadOnlineDDLTaskLogRequestV3() = default;

void DownloadOnlineDDLTaskLogRequestV3::validate()
{
}

web::json::value DownloadOnlineDDLTaskLogRequestV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool DownloadOnlineDDLTaskLogRequestV3::fromJson(const web::json::value& val)
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


std::string DownloadOnlineDDLTaskLogRequestV3::getTaskId() const
{
    return taskId_;
}

void DownloadOnlineDDLTaskLogRequestV3::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DownloadOnlineDDLTaskLogRequestV3::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DownloadOnlineDDLTaskLogRequestV3::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


