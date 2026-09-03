

#include "huaweicloud/cloudtest/v1/model/OperateNotice.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




OperateNotice::OperateNotice()
{
    alertChannel_ = "";
    alertChannelIsSet_ = false;
    enable_ = "";
    enableIsSet_ = false;
    groupsIsSet_ = false;
    operateTypesIsSet_ = false;
}

OperateNotice::~OperateNotice() = default;

void OperateNotice::validate()
{
}

web::json::value OperateNotice::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertChannelIsSet_) {
        val[utility::conversions::to_string_t("alert_channel")] = ModelBase::toJson(alertChannel_);
    }
    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(groupsIsSet_) {
        val[utility::conversions::to_string_t("groups")] = ModelBase::toJson(groups_);
    }
    if(operateTypesIsSet_) {
        val[utility::conversions::to_string_t("operateTypes")] = ModelBase::toJson(operateTypes_);
    }

    return val;
}
bool OperateNotice::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alert_channel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_channel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertChannel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("groups"));
        if(!fieldValue.is_null())
        {
            std::vector<AlertGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operateTypes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operateTypes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateTypes(refVal);
        }
    }
    return ok;
}


std::string OperateNotice::getAlertChannel() const
{
    return alertChannel_;
}

void OperateNotice::setAlertChannel(const std::string& value)
{
    alertChannel_ = value;
    alertChannelIsSet_ = true;
}

bool OperateNotice::alertChannelIsSet() const
{
    return alertChannelIsSet_;
}

void OperateNotice::unsetalertChannel()
{
    alertChannelIsSet_ = false;
}

std::string OperateNotice::getEnable() const
{
    return enable_;
}

void OperateNotice::setEnable(const std::string& value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool OperateNotice::enableIsSet() const
{
    return enableIsSet_;
}

void OperateNotice::unsetenable()
{
    enableIsSet_ = false;
}

std::vector<AlertGroup>& OperateNotice::getGroups()
{
    return groups_;
}

void OperateNotice::setGroups(const std::vector<AlertGroup>& value)
{
    groups_ = value;
    groupsIsSet_ = true;
}

bool OperateNotice::groupsIsSet() const
{
    return groupsIsSet_;
}

void OperateNotice::unsetgroups()
{
    groupsIsSet_ = false;
}

std::vector<std::string>& OperateNotice::getOperateTypes()
{
    return operateTypes_;
}

void OperateNotice::setOperateTypes(const std::vector<std::string>& value)
{
    operateTypes_ = value;
    operateTypesIsSet_ = true;
}

bool OperateNotice::operateTypesIsSet() const
{
    return operateTypesIsSet_;
}

void OperateNotice::unsetoperateTypes()
{
    operateTypesIsSet_ = false;
}

}
}
}
}
}


