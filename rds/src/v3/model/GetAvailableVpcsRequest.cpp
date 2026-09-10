

#include "huaweicloud/rds/v3/model/GetAvailableVpcsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetAvailableVpcsRequest::GetAvailableVpcsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    vpcName_ = "";
    vpcNameIsSet_ = false;
}

GetAvailableVpcsRequest::~GetAvailableVpcsRequest() = default;

void GetAvailableVpcsRequest::validate()
{
}

web::json::value GetAvailableVpcsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(vpcNameIsSet_) {
        val[utility::conversions::to_string_t("vpc_name")] = ModelBase::toJson(vpcName_);
    }

    return val;
}
bool GetAvailableVpcsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcName(refVal);
        }
    }
    return ok;
}


std::string GetAvailableVpcsRequest::getInstanceId() const
{
    return instanceId_;
}

void GetAvailableVpcsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool GetAvailableVpcsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void GetAvailableVpcsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string GetAvailableVpcsRequest::getVpcId() const
{
    return vpcId_;
}

void GetAvailableVpcsRequest::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool GetAvailableVpcsRequest::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void GetAvailableVpcsRequest::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string GetAvailableVpcsRequest::getVpcName() const
{
    return vpcName_;
}

void GetAvailableVpcsRequest::setVpcName(const std::string& value)
{
    vpcName_ = value;
    vpcNameIsSet_ = true;
}

bool GetAvailableVpcsRequest::vpcNameIsSet() const
{
    return vpcNameIsSet_;
}

void GetAvailableVpcsRequest::unsetvpcName()
{
    vpcNameIsSet_ = false;
}

}
}
}
}
}


