

#include "huaweicloud/modelarts/v1/model/ValidateTrainingJobNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ValidateTrainingJobNameRequest::ValidateTrainingJobNameRequest()
{
    jobName_ = "";
    jobNameIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

ValidateTrainingJobNameRequest::~ValidateTrainingJobNameRequest() = default;

void ValidateTrainingJobNameRequest::validate()
{
}

web::json::value ValidateTrainingJobNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool ValidateTrainingJobNameRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    return ok;
}


std::string ValidateTrainingJobNameRequest::getJobName() const
{
    return jobName_;
}

void ValidateTrainingJobNameRequest::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool ValidateTrainingJobNameRequest::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void ValidateTrainingJobNameRequest::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string ValidateTrainingJobNameRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ValidateTrainingJobNameRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ValidateTrainingJobNameRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ValidateTrainingJobNameRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


