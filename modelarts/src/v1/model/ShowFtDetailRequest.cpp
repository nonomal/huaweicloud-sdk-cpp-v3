

#include "huaweicloud/modelarts/v1/model/ShowFtDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowFtDetailRequest::ShowFtDetailRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
}

ShowFtDetailRequest::~ShowFtDetailRequest() = default;

void ShowFtDetailRequest::validate()
{
}

web::json::value ShowFtDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }

    return val;
}
bool ShowFtDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowFtDetailRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void ShowFtDetailRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool ShowFtDetailRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void ShowFtDetailRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

}
}
}
}
}


