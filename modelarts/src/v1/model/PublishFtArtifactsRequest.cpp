

#include "huaweicloud/modelarts/v1/model/PublishFtArtifactsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PublishFtArtifactsRequest::PublishFtArtifactsRequest()
{
    trainingJobId_ = "";
    trainingJobIdIsSet_ = false;
    bodyIsSet_ = false;
}

PublishFtArtifactsRequest::~PublishFtArtifactsRequest() = default;

void PublishFtArtifactsRequest::validate()
{
}

web::json::value PublishFtArtifactsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingJobIdIsSet_) {
        val[utility::conversions::to_string_t("training_job_id")] = ModelBase::toJson(trainingJobId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool PublishFtArtifactsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PublishArtifactsBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PublishFtArtifactsRequest::getTrainingJobId() const
{
    return trainingJobId_;
}

void PublishFtArtifactsRequest::setTrainingJobId(const std::string& value)
{
    trainingJobId_ = value;
    trainingJobIdIsSet_ = true;
}

bool PublishFtArtifactsRequest::trainingJobIdIsSet() const
{
    return trainingJobIdIsSet_;
}

void PublishFtArtifactsRequest::unsettrainingJobId()
{
    trainingJobIdIsSet_ = false;
}

PublishArtifactsBody PublishFtArtifactsRequest::getBody() const
{
    return body_;
}

void PublishFtArtifactsRequest::setBody(const PublishArtifactsBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PublishFtArtifactsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PublishFtArtifactsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


