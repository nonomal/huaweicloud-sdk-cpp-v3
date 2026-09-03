

#include "huaweicloud/modelarts/v1/model/ShowFtMetricsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowFtMetricsRequest::ShowFtMetricsRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
}

ShowFtMetricsRequest::~ShowFtMetricsRequest() = default;

void ShowFtMetricsRequest::validate()
{
}

web::json::value ShowFtMetricsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }

    return val;
}
bool ShowFtMetricsRequest::fromJson(const web::json::value& val)
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


std::string ShowFtMetricsRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowFtMetricsRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowFtMetricsRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowFtMetricsRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

}
}
}
}
}


