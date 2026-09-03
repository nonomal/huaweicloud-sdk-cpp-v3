

#include "huaweicloud/cloudtest/v1/model/PingVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




PingVo::PingVo()
{
    address_ = "";
    addressIsSet_ = false;
    subTaskName_ = "";
    subTaskNameIsSet_ = false;
}

PingVo::~PingVo() = default;

void PingVo::validate()
{
}

web::json::value PingVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(subTaskNameIsSet_) {
        val[utility::conversions::to_string_t("sub_task_name")] = ModelBase::toJson(subTaskName_);
    }

    return val;
}
bool PingVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubTaskName(refVal);
        }
    }
    return ok;
}


std::string PingVo::getAddress() const
{
    return address_;
}

void PingVo::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool PingVo::addressIsSet() const
{
    return addressIsSet_;
}

void PingVo::unsetaddress()
{
    addressIsSet_ = false;
}

std::string PingVo::getSubTaskName() const
{
    return subTaskName_;
}

void PingVo::setSubTaskName(const std::string& value)
{
    subTaskName_ = value;
    subTaskNameIsSet_ = true;
}

bool PingVo::subTaskNameIsSet() const
{
    return subTaskNameIsSet_;
}

void PingVo::unsetsubTaskName()
{
    subTaskNameIsSet_ = false;
}

}
}
}
}
}


