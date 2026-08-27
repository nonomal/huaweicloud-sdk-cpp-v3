

#include "huaweicloud/modelarts/v1/model/FlavorResponseWithSupport.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




FlavorResponseWithSupport::FlavorResponseWithSupport()
{
    poolId_ = "";
    poolIdIsSet_ = false;
    flavorId_ = "";
    flavorIdIsSet_ = false;
    flavorName_ = "";
    flavorNameIsSet_ = false;
    supportEngines_ = "";
    supportEnginesIsSet_ = false;
    supportGroups_ = "";
    supportGroupsIsSet_ = false;
    maxNum_ = 0;
    maxNumIsSet_ = false;
    flavorType_ = "";
    flavorTypeIsSet_ = false;
    billingIsSet_ = false;
    flavorInfoIsSet_ = false;
    attributesIsSet_ = false;
}

FlavorResponseWithSupport::~FlavorResponseWithSupport() = default;

void FlavorResponseWithSupport::validate()
{
}

web::json::value FlavorResponseWithSupport::toJson() const
{
    web::json::value val = web::json::value::object();

    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(flavorNameIsSet_) {
        val[utility::conversions::to_string_t("flavor_name")] = ModelBase::toJson(flavorName_);
    }
    if(supportEnginesIsSet_) {
        val[utility::conversions::to_string_t("support_engines")] = ModelBase::toJson(supportEngines_);
    }
    if(supportGroupsIsSet_) {
        val[utility::conversions::to_string_t("support_groups")] = ModelBase::toJson(supportGroups_);
    }
    if(maxNumIsSet_) {
        val[utility::conversions::to_string_t("max_num")] = ModelBase::toJson(maxNum_);
    }
    if(flavorTypeIsSet_) {
        val[utility::conversions::to_string_t("flavor_type")] = ModelBase::toJson(flavorType_);
    }
    if(billingIsSet_) {
        val[utility::conversions::to_string_t("billing")] = ModelBase::toJson(billing_);
    }
    if(flavorInfoIsSet_) {
        val[utility::conversions::to_string_t("flavor_info")] = ModelBase::toJson(flavorInfo_);
    }
    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }

    return val;
}
bool FlavorResponseWithSupport::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_engines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_engines"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportEngines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_groups"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing"));
        if(!fieldValue.is_null())
        {
            BillingInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBilling(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_info"));
        if(!fieldValue.is_null())
        {
            FlavorInfoResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attributes"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    return ok;
}


std::string FlavorResponseWithSupport::getPoolId() const
{
    return poolId_;
}

void FlavorResponseWithSupport::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool FlavorResponseWithSupport::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void FlavorResponseWithSupport::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string FlavorResponseWithSupport::getFlavorId() const
{
    return flavorId_;
}

void FlavorResponseWithSupport::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool FlavorResponseWithSupport::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void FlavorResponseWithSupport::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::string FlavorResponseWithSupport::getFlavorName() const
{
    return flavorName_;
}

void FlavorResponseWithSupport::setFlavorName(const std::string& value)
{
    flavorName_ = value;
    flavorNameIsSet_ = true;
}

bool FlavorResponseWithSupport::flavorNameIsSet() const
{
    return flavorNameIsSet_;
}

void FlavorResponseWithSupport::unsetflavorName()
{
    flavorNameIsSet_ = false;
}

std::string FlavorResponseWithSupport::getSupportEngines() const
{
    return supportEngines_;
}

void FlavorResponseWithSupport::setSupportEngines(const std::string& value)
{
    supportEngines_ = value;
    supportEnginesIsSet_ = true;
}

bool FlavorResponseWithSupport::supportEnginesIsSet() const
{
    return supportEnginesIsSet_;
}

void FlavorResponseWithSupport::unsetsupportEngines()
{
    supportEnginesIsSet_ = false;
}

std::string FlavorResponseWithSupport::getSupportGroups() const
{
    return supportGroups_;
}

void FlavorResponseWithSupport::setSupportGroups(const std::string& value)
{
    supportGroups_ = value;
    supportGroupsIsSet_ = true;
}

bool FlavorResponseWithSupport::supportGroupsIsSet() const
{
    return supportGroupsIsSet_;
}

void FlavorResponseWithSupport::unsetsupportGroups()
{
    supportGroupsIsSet_ = false;
}

int32_t FlavorResponseWithSupport::getMaxNum() const
{
    return maxNum_;
}

void FlavorResponseWithSupport::setMaxNum(int32_t value)
{
    maxNum_ = value;
    maxNumIsSet_ = true;
}

bool FlavorResponseWithSupport::maxNumIsSet() const
{
    return maxNumIsSet_;
}

void FlavorResponseWithSupport::unsetmaxNum()
{
    maxNumIsSet_ = false;
}

std::string FlavorResponseWithSupport::getFlavorType() const
{
    return flavorType_;
}

void FlavorResponseWithSupport::setFlavorType(const std::string& value)
{
    flavorType_ = value;
    flavorTypeIsSet_ = true;
}

bool FlavorResponseWithSupport::flavorTypeIsSet() const
{
    return flavorTypeIsSet_;
}

void FlavorResponseWithSupport::unsetflavorType()
{
    flavorTypeIsSet_ = false;
}

BillingInfo FlavorResponseWithSupport::getBilling() const
{
    return billing_;
}

void FlavorResponseWithSupport::setBilling(const BillingInfo& value)
{
    billing_ = value;
    billingIsSet_ = true;
}

bool FlavorResponseWithSupport::billingIsSet() const
{
    return billingIsSet_;
}

void FlavorResponseWithSupport::unsetbilling()
{
    billingIsSet_ = false;
}

FlavorInfoResponse FlavorResponseWithSupport::getFlavorInfo() const
{
    return flavorInfo_;
}

void FlavorResponseWithSupport::setFlavorInfo(const FlavorInfoResponse& value)
{
    flavorInfo_ = value;
    flavorInfoIsSet_ = true;
}

bool FlavorResponseWithSupport::flavorInfoIsSet() const
{
    return flavorInfoIsSet_;
}

void FlavorResponseWithSupport::unsetflavorInfo()
{
    flavorInfoIsSet_ = false;
}

std::map<std::string, std::string>& FlavorResponseWithSupport::getAttributes()
{
    return attributes_;
}

void FlavorResponseWithSupport::setAttributes(const std::map<std::string, std::string>& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool FlavorResponseWithSupport::attributesIsSet() const
{
    return attributesIsSet_;
}

void FlavorResponseWithSupport::unsetattributes()
{
    attributesIsSet_ = false;
}

}
}
}
}
}


