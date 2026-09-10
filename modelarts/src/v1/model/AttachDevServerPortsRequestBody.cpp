

#include "huaweicloud/modelarts/v1/model/AttachDevServerPortsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AttachDevServerPortsRequestBody::AttachDevServerPortsRequestBody()
{
    portId_ = "";
    portIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    securityGroupsIsSet_ = false;
    enableEfi_ = false;
    enableEfiIsSet_ = false;
    efiProtocol_ = "";
    efiProtocolIsSet_ = false;
}

AttachDevServerPortsRequestBody::~AttachDevServerPortsRequestBody() = default;

void AttachDevServerPortsRequestBody::validate()
{
}

web::json::value AttachDevServerPortsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(enableEfiIsSet_) {
        val[utility::conversions::to_string_t("enable_efi")] = ModelBase::toJson(enableEfi_);
    }
    if(efiProtocolIsSet_) {
        val[utility::conversions::to_string_t("efi_protocol")] = ModelBase::toJson(efiProtocol_);
    }

    return val;
}
bool AttachDevServerPortsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_efi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_efi"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableEfi(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("efi_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("efi_protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEfiProtocol(refVal);
        }
    }
    return ok;
}


std::string AttachDevServerPortsRequestBody::getPortId() const
{
    return portId_;
}

void AttachDevServerPortsRequestBody::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool AttachDevServerPortsRequestBody::portIdIsSet() const
{
    return portIdIsSet_;
}

void AttachDevServerPortsRequestBody::unsetportId()
{
    portIdIsSet_ = false;
}

std::string AttachDevServerPortsRequestBody::getName() const
{
    return name_;
}

void AttachDevServerPortsRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AttachDevServerPortsRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void AttachDevServerPortsRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string AttachDevServerPortsRequestBody::getNetworkId() const
{
    return networkId_;
}

void AttachDevServerPortsRequestBody::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool AttachDevServerPortsRequestBody::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void AttachDevServerPortsRequestBody::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

std::string AttachDevServerPortsRequestBody::getIpAddress() const
{
    return ipAddress_;
}

void AttachDevServerPortsRequestBody::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool AttachDevServerPortsRequestBody::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void AttachDevServerPortsRequestBody::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::vector<std::string>& AttachDevServerPortsRequestBody::getSecurityGroups()
{
    return securityGroups_;
}

void AttachDevServerPortsRequestBody::setSecurityGroups(const std::vector<std::string>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool AttachDevServerPortsRequestBody::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void AttachDevServerPortsRequestBody::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

bool AttachDevServerPortsRequestBody::isEnableEfi() const
{
    return enableEfi_;
}

void AttachDevServerPortsRequestBody::setEnableEfi(bool value)
{
    enableEfi_ = value;
    enableEfiIsSet_ = true;
}

bool AttachDevServerPortsRequestBody::enableEfiIsSet() const
{
    return enableEfiIsSet_;
}

void AttachDevServerPortsRequestBody::unsetenableEfi()
{
    enableEfiIsSet_ = false;
}

std::string AttachDevServerPortsRequestBody::getEfiProtocol() const
{
    return efiProtocol_;
}

void AttachDevServerPortsRequestBody::setEfiProtocol(const std::string& value)
{
    efiProtocol_ = value;
    efiProtocolIsSet_ = true;
}

bool AttachDevServerPortsRequestBody::efiProtocolIsSet() const
{
    return efiProtocolIsSet_;
}

void AttachDevServerPortsRequestBody::unsetefiProtocol()
{
    efiProtocolIsSet_ = false;
}

}
}
}
}
}


