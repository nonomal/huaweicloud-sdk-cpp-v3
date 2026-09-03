

#include "huaweicloud/modelarts/v1/model/ShowTrainingJobRoutePlanRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingJobRoutePlanRequest::ShowTrainingJobRoutePlanRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
}

ShowTrainingJobRoutePlanRequest::~ShowTrainingJobRoutePlanRequest() = default;

void ShowTrainingJobRoutePlanRequest::validate()
{
}

web::json::value ShowTrainingJobRoutePlanRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }

    return val;
}
bool ShowTrainingJobRoutePlanRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowTrainingJobRoutePlanRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowTrainingJobRoutePlanRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowTrainingJobRoutePlanRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowTrainingJobRoutePlanRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

}
}
}
}
}


