

#include "huaweicloud/modelarts/v1/model/PublishFtArtifactsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PublishFtArtifactsResponse::PublishFtArtifactsResponse()
{
    modelId_ = "";
    modelIdIsSet_ = false;
}

PublishFtArtifactsResponse::~PublishFtArtifactsResponse() = default;

void PublishFtArtifactsResponse::validate()
{
}

web::json::value PublishFtArtifactsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modelIdIsSet_) {
        val[utility::conversions::to_string_t("model_id")] = ModelBase::toJson(modelId_);
    }

    return val;
}
bool PublishFtArtifactsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("model_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelId(refVal);
        }
    }
    return ok;
}


std::string PublishFtArtifactsResponse::getModelId() const
{
    return modelId_;
}

void PublishFtArtifactsResponse::setModelId(const std::string& value)
{
    modelId_ = value;
    modelIdIsSet_ = true;
}

bool PublishFtArtifactsResponse::modelIdIsSet() const
{
    return modelIdIsSet_;
}

void PublishFtArtifactsResponse::unsetmodelId()
{
    modelIdIsSet_ = false;
}

}
}
}
}
}


