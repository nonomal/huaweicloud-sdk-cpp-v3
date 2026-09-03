

#include "huaweicloud/modelarts/v1/model/BatchDeleteTrainingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDeleteTrainingJobRequest::BatchDeleteTrainingJobRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteTrainingJobRequest::~BatchDeleteTrainingJobRequest() = default;

void BatchDeleteTrainingJobRequest::validate()
{
}

web::json::value BatchDeleteTrainingJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteTrainingJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDeleteJobsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchDeleteJobsReq BatchDeleteTrainingJobRequest::getBody() const
{
    return body_;
}

void BatchDeleteTrainingJobRequest::setBody(const BatchDeleteJobsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteTrainingJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteTrainingJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


