

#include "huaweicloud/modelarts/v1/model/BatchDrainPoolNodesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchDrainPoolNodesRequest::BatchDrainPoolNodesRequest()
{
    poolName_ = "";
    poolNameIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDrainPoolNodesRequest::~BatchDrainPoolNodesRequest() = default;

void BatchDrainPoolNodesRequest::validate()
{
}

web::json::value BatchDrainPoolNodesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolNameIsSet_) {
        val[utility::conversions::to_string_t("pool_name")] = ModelBase::toJson(poolName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDrainPoolNodesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchDrainPoolNodesReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDrainPoolNodesRequest::getPoolName() const
{
    return poolName_;
}

void BatchDrainPoolNodesRequest::setPoolName(const std::string& value)
{
    poolName_ = value;
    poolNameIsSet_ = true;
}

bool BatchDrainPoolNodesRequest::poolNameIsSet() const
{
    return poolNameIsSet_;
}

void BatchDrainPoolNodesRequest::unsetpoolName()
{
    poolNameIsSet_ = false;
}

BatchDrainPoolNodesReq BatchDrainPoolNodesRequest::getBody() const
{
    return body_;
}

void BatchDrainPoolNodesRequest::setBody(const BatchDrainPoolNodesReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDrainPoolNodesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDrainPoolNodesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


