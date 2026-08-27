

#include "huaweicloud/modelarts/v1/model/BatchDrainPoolNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDrainPoolNodesResponse::BatchDrainPoolNodesResponse()
{
    bodyIsSet_ = false;
}

BatchDrainPoolNodesResponse::~BatchDrainPoolNodesResponse() = default;

void BatchDrainPoolNodesResponse::validate()
{
}

web::json::value BatchDrainPoolNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDrainPoolNodesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object BatchDrainPoolNodesResponse::getBody() const
{
    return body_;
}

void BatchDrainPoolNodesResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDrainPoolNodesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDrainPoolNodesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


