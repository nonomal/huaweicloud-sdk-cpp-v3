

#include "huaweicloud/rds/v3/model/GetAvailableVpcsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetAvailableVpcsResponse::GetAvailableVpcsResponse()
{
    vpcsIsSet_ = false;
    xTraceId_ = "";
    xTraceIdIsSet_ = false;
}

GetAvailableVpcsResponse::~GetAvailableVpcsResponse() = default;

void GetAvailableVpcsResponse::validate()
{
}

web::json::value GetAvailableVpcsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcsIsSet_) {
        val[utility::conversions::to_string_t("vpcs")] = ModelBase::toJson(vpcs_);
    }
    if(xTraceIdIsSet_) {
        val[utility::conversions::to_string_t("X-TRACE-ID")] = ModelBase::toJson(xTraceId_);
    }

    return val;
}
bool GetAvailableVpcsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpcs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpcs"));
        if(!fieldValue.is_null())
        {
            std::vector<Vpc> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-TRACE-ID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-TRACE-ID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTraceId(refVal);
        }
    }
    return ok;
}


std::vector<Vpc>& GetAvailableVpcsResponse::getVpcs()
{
    return vpcs_;
}

void GetAvailableVpcsResponse::setVpcs(const std::vector<Vpc>& value)
{
    vpcs_ = value;
    vpcsIsSet_ = true;
}

bool GetAvailableVpcsResponse::vpcsIsSet() const
{
    return vpcsIsSet_;
}

void GetAvailableVpcsResponse::unsetvpcs()
{
    vpcsIsSet_ = false;
}

std::string GetAvailableVpcsResponse::getXTraceId() const
{
    return xTraceId_;
}

void GetAvailableVpcsResponse::setXTraceId(const std::string& value)
{
    xTraceId_ = value;
    xTraceIdIsSet_ = true;
}

bool GetAvailableVpcsResponse::xTraceIdIsSet() const
{
    return xTraceIdIsSet_;
}

void GetAvailableVpcsResponse::unsetxTraceId()
{
    xTraceIdIsSet_ = false;
}

}
}
}
}
}


