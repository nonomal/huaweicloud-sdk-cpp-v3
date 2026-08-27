

#include "huaweicloud/modelarts/v1/model/UserVpcRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UserVpcRequest::UserVpcRequest()
{
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupIdsIsSet_ = false;
    connectCidrsIsSet_ = false;
    natId_ = "";
    natIdIsSet_ = false;
    eipId_ = "";
    eipIdIsSet_ = false;
}

UserVpcRequest::~UserVpcRequest() = default;

void UserVpcRequest::validate()
{
}

web::json::value UserVpcRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(securityGroupIdsIsSet_) {
        val[utility::conversions::to_string_t("security_group_ids")] = ModelBase::toJson(securityGroupIds_);
    }
    if(connectCidrsIsSet_) {
        val[utility::conversions::to_string_t("connect_cidrs")] = ModelBase::toJson(connectCidrs_);
    }
    if(natIdIsSet_) {
        val[utility::conversions::to_string_t("nat_id")] = ModelBase::toJson(natId_);
    }
    if(eipIdIsSet_) {
        val[utility::conversions::to_string_t("eip_id")] = ModelBase::toJson(eipId_);
    }

    return val;
}
bool UserVpcRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connect_cidrs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connect_cidrs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectCidrs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nat_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nat_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNatId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEipId(refVal);
        }
    }
    return ok;
}


std::string UserVpcRequest::getVpcId() const
{
    return vpcId_;
}

void UserVpcRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool UserVpcRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void UserVpcRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string UserVpcRequest::getSubnetId() const
{
    return subnetId_;
}

void UserVpcRequest::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool UserVpcRequest::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void UserVpcRequest::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::vector<std::string>& UserVpcRequest::getSecurityGroupIds()
{
    return securityGroupIds_;
}

void UserVpcRequest::setSecurityGroupIds(const std::vector<std::string>& value)
{
    securityGroupIds_ = value;
    securityGroupIdsIsSet_ = true;
}

bool UserVpcRequest::securityGroupIdsIsSet() const
{
    return securityGroupIdsIsSet_;
}

void UserVpcRequest::unsetsecurityGroupIds()
{
    securityGroupIdsIsSet_ = false;
}

std::vector<std::string>& UserVpcRequest::getConnectCidrs()
{
    return connectCidrs_;
}

void UserVpcRequest::setConnectCidrs(const std::vector<std::string>& value)
{
    connectCidrs_ = value;
    connectCidrsIsSet_ = true;
}

bool UserVpcRequest::connectCidrsIsSet() const
{
    return connectCidrsIsSet_;
}

void UserVpcRequest::unsetconnectCidrs()
{
    connectCidrsIsSet_ = false;
}

std::string UserVpcRequest::getNatId() const
{
    return natId_;
}

void UserVpcRequest::setNatId(const std::string& value)
{
    natId_ = value;
    natIdIsSet_ = true;
}

bool UserVpcRequest::natIdIsSet() const
{
    return natIdIsSet_;
}

void UserVpcRequest::unsetnatId()
{
    natIdIsSet_ = false;
}

std::string UserVpcRequest::getEipId() const
{
    return eipId_;
}

void UserVpcRequest::setEipId(const std::string& value)
{
    eipId_ = value;
    eipIdIsSet_ = true;
}

bool UserVpcRequest::eipIdIsSet() const
{
    return eipIdIsSet_;
}

void UserVpcRequest::unseteipId()
{
    eipIdIsSet_ = false;
}

}
}
}
}
}


