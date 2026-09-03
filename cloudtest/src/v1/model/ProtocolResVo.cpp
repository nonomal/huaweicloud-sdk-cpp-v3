

#include "huaweicloud/cloudtest/v1/model/ProtocolResVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ProtocolResVo::ProtocolResVo()
{
    responseCodeIsSet_ = false;
    responseTime_ = "";
    responseTimeIsSet_ = false;
}

ProtocolResVo::~ProtocolResVo() = default;

void ProtocolResVo::validate()
{
}

web::json::value ProtocolResVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(responseCodeIsSet_) {
        val[utility::conversions::to_string_t("response_code")] = ModelBase::toJson(responseCode_);
    }
    if(responseTimeIsSet_) {
        val[utility::conversions::to_string_t("response_time")] = ModelBase::toJson(responseTime_);
    }

    return val;
}
bool ProtocolResVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("response_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_code"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("response_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseTime(refVal);
        }
    }
    return ok;
}


std::vector<int32_t>& ProtocolResVo::getResponseCode()
{
    return responseCode_;
}

void ProtocolResVo::setResponseCode(std::vector<int32_t> value)
{
    responseCode_ = value;
    responseCodeIsSet_ = true;
}

bool ProtocolResVo::responseCodeIsSet() const
{
    return responseCodeIsSet_;
}

void ProtocolResVo::unsetresponseCode()
{
    responseCodeIsSet_ = false;
}

std::string ProtocolResVo::getResponseTime() const
{
    return responseTime_;
}

void ProtocolResVo::setResponseTime(const std::string& value)
{
    responseTime_ = value;
    responseTimeIsSet_ = true;
}

bool ProtocolResVo::responseTimeIsSet() const
{
    return responseTimeIsSet_;
}

void ProtocolResVo::unsetresponseTime()
{
    responseTimeIsSet_ = false;
}

}
}
}
}
}


