

#include "huaweicloud/modelarts/v1/model/ShowTrainingJobRoutePlanResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingJobRoutePlanResponse::ShowTrainingJobRoutePlanResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    rankMapping_ = "";
    rankMappingIsSet_ = false;
}

ShowTrainingJobRoutePlanResponse::~ShowTrainingJobRoutePlanResponse() = default;

void ShowTrainingJobRoutePlanResponse::validate()
{
}

web::json::value ShowTrainingJobRoutePlanResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(rankMappingIsSet_) {
        val[utility::conversions::to_string_t("rank_mapping")] = ModelBase::toJson(rankMapping_);
    }

    return val;
}
bool ShowTrainingJobRoutePlanResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rank_mapping"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank_mapping"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRankMapping(refVal);
        }
    }
    return ok;
}


std::string ShowTrainingJobRoutePlanResponse::getJobId() const
{
    return jobId_;
}

void ShowTrainingJobRoutePlanResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowTrainingJobRoutePlanResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowTrainingJobRoutePlanResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowTrainingJobRoutePlanResponse::getStatus() const
{
    return status_;
}

void ShowTrainingJobRoutePlanResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowTrainingJobRoutePlanResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowTrainingJobRoutePlanResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowTrainingJobRoutePlanResponse::getRankMapping() const
{
    return rankMapping_;
}

void ShowTrainingJobRoutePlanResponse::setRankMapping(const std::string& value)
{
    rankMapping_ = value;
    rankMappingIsSet_ = true;
}

bool ShowTrainingJobRoutePlanResponse::rankMappingIsSet() const
{
    return rankMappingIsSet_;
}

void ShowTrainingJobRoutePlanResponse::unsetrankMapping()
{
    rankMappingIsSet_ = false;
}

}
}
}
}
}


