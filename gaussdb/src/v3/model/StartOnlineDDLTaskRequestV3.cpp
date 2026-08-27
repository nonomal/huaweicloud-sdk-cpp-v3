

#include "huaweicloud/gaussdb/v3/model/StartOnlineDDLTaskRequestV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StartOnlineDDLTaskRequestV3::StartOnlineDDLTaskRequestV3()
{
    autoClear_ = false;
    autoClearIsSet_ = false;
    taskContentIsSet_ = false;
}

StartOnlineDDLTaskRequestV3::~StartOnlineDDLTaskRequestV3() = default;

void StartOnlineDDLTaskRequestV3::validate()
{
}

web::json::value StartOnlineDDLTaskRequestV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoClearIsSet_) {
        val[utility::conversions::to_string_t("auto_clear")] = ModelBase::toJson(autoClear_);
    }
    if(taskContentIsSet_) {
        val[utility::conversions::to_string_t("task_content")] = ModelBase::toJson(taskContent_);
    }

    return val;
}
bool StartOnlineDDLTaskRequestV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_clear"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_clear"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoClear(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_content"));
        if(!fieldValue.is_null())
        {
            std::vector<StartOnlineTaskContentItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskContent(refVal);
        }
    }
    return ok;
}


bool StartOnlineDDLTaskRequestV3::isAutoClear() const
{
    return autoClear_;
}

void StartOnlineDDLTaskRequestV3::setAutoClear(bool value)
{
    autoClear_ = value;
    autoClearIsSet_ = true;
}

bool StartOnlineDDLTaskRequestV3::autoClearIsSet() const
{
    return autoClearIsSet_;
}

void StartOnlineDDLTaskRequestV3::unsetautoClear()
{
    autoClearIsSet_ = false;
}

std::vector<StartOnlineTaskContentItem>& StartOnlineDDLTaskRequestV3::getTaskContent()
{
    return taskContent_;
}

void StartOnlineDDLTaskRequestV3::setTaskContent(const std::vector<StartOnlineTaskContentItem>& value)
{
    taskContent_ = value;
    taskContentIsSet_ = true;
}

bool StartOnlineDDLTaskRequestV3::taskContentIsSet() const
{
    return taskContentIsSet_;
}

void StartOnlineDDLTaskRequestV3::unsettaskContent()
{
    taskContentIsSet_ = false;
}

}
}
}
}
}


