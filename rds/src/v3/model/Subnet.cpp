

#include "huaweicloud/rds/v3/model/Subnet.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Subnet::Subnet()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    ipv6Enable_ = false;
    ipv6EnableIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    cidrV6_ = "";
    cidrV6IsSet_ = false;
    gatewayIp_ = "";
    gatewayIpIsSet_ = false;
    gatewayIpV6_ = "";
    gatewayIpV6IsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
}

Subnet::~Subnet() = default;

void Subnet::validate()
{
}

web::json::value Subnet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ipv6EnableIsSet_) {
        val[utility::conversions::to_string_t("ipv6_enable")] = ModelBase::toJson(ipv6Enable_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(cidrV6IsSet_) {
        val[utility::conversions::to_string_t("cidr_v6")] = ModelBase::toJson(cidrV6_);
    }
    if(gatewayIpIsSet_) {
        val[utility::conversions::to_string_t("gateway_ip")] = ModelBase::toJson(gatewayIp_);
    }
    if(gatewayIpV6IsSet_) {
        val[utility::conversions::to_string_t("gateway_ip_v6")] = ModelBase::toJson(gatewayIpV6_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }

    return val;
}
bool Subnet::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Enable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cidr_v6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr_v6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidrV6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gateway_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gateway_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGatewayIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gateway_ip_v6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gateway_ip_v6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGatewayIpV6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    return ok;
}


std::string Subnet::getId() const
{
    return id_;
}

void Subnet::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Subnet::idIsSet() const
{
    return idIsSet_;
}

void Subnet::unsetid()
{
    idIsSet_ = false;
}

std::string Subnet::getName() const
{
    return name_;
}

void Subnet::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Subnet::nameIsSet() const
{
    return nameIsSet_;
}

void Subnet::unsetname()
{
    nameIsSet_ = false;
}

bool Subnet::isIpv6Enable() const
{
    return ipv6Enable_;
}

void Subnet::setIpv6Enable(bool value)
{
    ipv6Enable_ = value;
    ipv6EnableIsSet_ = true;
}

bool Subnet::ipv6EnableIsSet() const
{
    return ipv6EnableIsSet_;
}

void Subnet::unsetipv6Enable()
{
    ipv6EnableIsSet_ = false;
}

std::string Subnet::getCidr() const
{
    return cidr_;
}

void Subnet::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool Subnet::cidrIsSet() const
{
    return cidrIsSet_;
}

void Subnet::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string Subnet::getCidrV6() const
{
    return cidrV6_;
}

void Subnet::setCidrV6(const std::string& value)
{
    cidrV6_ = value;
    cidrV6IsSet_ = true;
}

bool Subnet::cidrV6IsSet() const
{
    return cidrV6IsSet_;
}

void Subnet::unsetcidrV6()
{
    cidrV6IsSet_ = false;
}

std::string Subnet::getGatewayIp() const
{
    return gatewayIp_;
}

void Subnet::setGatewayIp(const std::string& value)
{
    gatewayIp_ = value;
    gatewayIpIsSet_ = true;
}

bool Subnet::gatewayIpIsSet() const
{
    return gatewayIpIsSet_;
}

void Subnet::unsetgatewayIp()
{
    gatewayIpIsSet_ = false;
}

std::string Subnet::getGatewayIpV6() const
{
    return gatewayIpV6_;
}

void Subnet::setGatewayIpV6(const std::string& value)
{
    gatewayIpV6_ = value;
    gatewayIpV6IsSet_ = true;
}

bool Subnet::gatewayIpV6IsSet() const
{
    return gatewayIpV6IsSet_;
}

void Subnet::unsetgatewayIpV6()
{
    gatewayIpV6IsSet_ = false;
}

std::string Subnet::getAvailabilityZone() const
{
    return availabilityZone_;
}

void Subnet::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool Subnet::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void Subnet::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


