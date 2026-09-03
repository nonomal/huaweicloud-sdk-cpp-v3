

#include "huaweicloud/modelarts/v1/model/ShowTrainingFlavorMaxAvailableResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingFlavorMaxAvailableResourceRequest::ShowTrainingFlavorMaxAvailableResourceRequest()
{
    flavorId_ = "";
    flavorIdIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
}

ShowTrainingFlavorMaxAvailableResourceRequest::~ShowTrainingFlavorMaxAvailableResourceRequest() = default;

void ShowTrainingFlavorMaxAvailableResourceRequest::validate()
{
}

web::json::value ShowTrainingFlavorMaxAvailableResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }

    return val;
}
bool ShowTrainingFlavorMaxAvailableResourceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    return ok;
}


std::string ShowTrainingFlavorMaxAvailableResourceRequest::getFlavorId() const
{
    return flavorId_;
}

void ShowTrainingFlavorMaxAvailableResourceRequest::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool ShowTrainingFlavorMaxAvailableResourceRequest::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void ShowTrainingFlavorMaxAvailableResourceRequest::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::string ShowTrainingFlavorMaxAvailableResourceRequest::getPoolId() const
{
    return poolId_;
}

void ShowTrainingFlavorMaxAvailableResourceRequest::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ShowTrainingFlavorMaxAvailableResourceRequest::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ShowTrainingFlavorMaxAvailableResourceRequest::unsetpoolId()
{
    poolIdIsSet_ = false;
}

}
}
}
}
}


