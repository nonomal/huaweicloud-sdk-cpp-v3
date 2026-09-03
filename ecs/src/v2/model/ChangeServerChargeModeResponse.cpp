

#include "huaweicloud/ecs/v2/model/ChangeServerChargeModeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerChargeModeResponse::ChangeServerChargeModeResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ChangeServerChargeModeResponse::~ChangeServerChargeModeResponse() = default;

void ChangeServerChargeModeResponse::validate()
{
}

web::json::value ChangeServerChargeModeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ChangeServerChargeModeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string ChangeServerChargeModeResponse::getOrderId() const
{
    return orderId_;
}

void ChangeServerChargeModeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ChangeServerChargeModeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ChangeServerChargeModeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ChangeServerChargeModeResponse::getJobId() const
{
    return jobId_;
}

void ChangeServerChargeModeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ChangeServerChargeModeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ChangeServerChargeModeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


