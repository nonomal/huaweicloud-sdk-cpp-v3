

#include "huaweicloud/cloudtest/v1/model/IpGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IpGroup::IpGroup()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

IpGroup::~IpGroup() = default;

void IpGroup::validate()
{
}

web::json::value IpGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool IpGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string IpGroup::getGroupName() const
{
    return groupName_;
}

void IpGroup::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool IpGroup::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void IpGroup::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string IpGroup::getId() const
{
    return id_;
}

void IpGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool IpGroup::idIsSet() const
{
    return idIsSet_;
}

void IpGroup::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


