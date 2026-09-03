

#include "huaweicloud/modelarts/v1/model/ModifyTrainingQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ModifyTrainingQuotasRequest::ModifyTrainingQuotasRequest()
{
    bodyIsSet_ = false;
}

ModifyTrainingQuotasRequest::~ModifyTrainingQuotasRequest() = default;

void ModifyTrainingQuotasRequest::validate()
{
}

web::json::value ModifyTrainingQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyTrainingQuotasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyTrainingQuotaRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ModifyTrainingQuotaRequest ModifyTrainingQuotasRequest::getBody() const
{
    return body_;
}

void ModifyTrainingQuotasRequest::setBody(const ModifyTrainingQuotaRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyTrainingQuotasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyTrainingQuotasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


