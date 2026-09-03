

#include "huaweicloud/modelarts/v1/model/CountResourceInstancesReq_matches.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CountResourceInstancesReq_matches::CountResourceInstancesReq_matches()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CountResourceInstancesReq_matches::~CountResourceInstancesReq_matches() = default;

void CountResourceInstancesReq_matches::validate()
{
}

web::json::value CountResourceInstancesReq_matches::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool CountResourceInstancesReq_matches::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string CountResourceInstancesReq_matches::getKey() const
{
    return key_;
}

void CountResourceInstancesReq_matches::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CountResourceInstancesReq_matches::keyIsSet() const
{
    return keyIsSet_;
}

void CountResourceInstancesReq_matches::unsetkey()
{
    keyIsSet_ = false;
}

std::string CountResourceInstancesReq_matches::getValue() const
{
    return value_;
}

void CountResourceInstancesReq_matches::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CountResourceInstancesReq_matches::valueIsSet() const
{
    return valueIsSet_;
}

void CountResourceInstancesReq_matches::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


