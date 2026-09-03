

#include "huaweicloud/cloudtest/v1/model/DeleteTaskParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteTaskParams::DeleteTaskParams()
{
    planId_ = "";
    planIdIsSet_ = false;
    taskIdsIsSet_ = false;
}

DeleteTaskParams::~DeleteTaskParams() = default;

void DeleteTaskParams::validate()
{
}

web::json::value DeleteTaskParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("planId")] = ModelBase::toJson(planId_);
    }
    if(taskIdsIsSet_) {
        val[utility::conversions::to_string_t("taskIds")] = ModelBase::toJson(taskIds_);
    }

    return val;
}
bool DeleteTaskParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("planId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("planId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taskIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskIds"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskIds(refVal);
        }
    }
    return ok;
}


std::string DeleteTaskParams::getPlanId() const
{
    return planId_;
}

void DeleteTaskParams::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool DeleteTaskParams::planIdIsSet() const
{
    return planIdIsSet_;
}

void DeleteTaskParams::unsetplanId()
{
    planIdIsSet_ = false;
}

std::vector<std::string>& DeleteTaskParams::getTaskIds()
{
    return taskIds_;
}

void DeleteTaskParams::setTaskIds(const std::vector<std::string>& value)
{
    taskIds_ = value;
    taskIdsIsSet_ = true;
}

bool DeleteTaskParams::taskIdsIsSet() const
{
    return taskIdsIsSet_;
}

void DeleteTaskParams::unsettaskIds()
{
    taskIdsIsSet_ = false;
}

}
}
}
}
}


