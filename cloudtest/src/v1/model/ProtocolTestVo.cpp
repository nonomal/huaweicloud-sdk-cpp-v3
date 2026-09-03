

#include "huaweicloud/cloudtest/v1/model/ProtocolTestVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ProtocolTestVo::ProtocolTestVo()
{
    httpIsSet_ = false;
    pingIsSet_ = false;
    pointHostIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
}

ProtocolTestVo::~ProtocolTestVo() = default;

void ProtocolTestVo::validate()
{
}

web::json::value ProtocolTestVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(httpIsSet_) {
        val[utility::conversions::to_string_t("http")] = ModelBase::toJson(http_);
    }
    if(pingIsSet_) {
        val[utility::conversions::to_string_t("ping")] = ModelBase::toJson(ping_);
    }
    if(pointHostIsSet_) {
        val[utility::conversions::to_string_t("point_host")] = ModelBase::toJson(pointHost_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }

    return val;
}
bool ProtocolTestVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("http"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http"));
        if(!fieldValue.is_null())
        {
            HttpVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ping"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ping"));
        if(!fieldValue.is_null())
        {
            std::vector<PingVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPing(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("point_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("point_host"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPointHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    return ok;
}


HttpVo ProtocolTestVo::getHttp() const
{
    return http_;
}

void ProtocolTestVo::setHttp(const HttpVo& value)
{
    http_ = value;
    httpIsSet_ = true;
}

bool ProtocolTestVo::httpIsSet() const
{
    return httpIsSet_;
}

void ProtocolTestVo::unsethttp()
{
    httpIsSet_ = false;
}

std::vector<PingVo>& ProtocolTestVo::getPing()
{
    return ping_;
}

void ProtocolTestVo::setPing(const std::vector<PingVo>& value)
{
    ping_ = value;
    pingIsSet_ = true;
}

bool ProtocolTestVo::pingIsSet() const
{
    return pingIsSet_;
}

void ProtocolTestVo::unsetping()
{
    pingIsSet_ = false;
}

std::vector<std::string>& ProtocolTestVo::getPointHost()
{
    return pointHost_;
}

void ProtocolTestVo::setPointHost(const std::vector<std::string>& value)
{
    pointHost_ = value;
    pointHostIsSet_ = true;
}

bool ProtocolTestVo::pointHostIsSet() const
{
    return pointHostIsSet_;
}

void ProtocolTestVo::unsetpointHost()
{
    pointHostIsSet_ = false;
}

std::string ProtocolTestVo::getProtocol() const
{
    return protocol_;
}

void ProtocolTestVo::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool ProtocolTestVo::protocolIsSet() const
{
    return protocolIsSet_;
}

void ProtocolTestVo::unsetprotocol()
{
    protocolIsSet_ = false;
}

}
}
}
}
}


