

#include "huaweicloud/modelarts/v1/model/CountResourceInstancesReq_tags.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CountResourceInstancesReq_tags::CountResourceInstancesReq_tags()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

CountResourceInstancesReq_tags::~CountResourceInstancesReq_tags() = default;

void CountResourceInstancesReq_tags::validate()
{
}

web::json::value CountResourceInstancesReq_tags::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool CountResourceInstancesReq_tags::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string CountResourceInstancesReq_tags::getKey() const
{
    return key_;
}

void CountResourceInstancesReq_tags::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool CountResourceInstancesReq_tags::keyIsSet() const
{
    return keyIsSet_;
}

void CountResourceInstancesReq_tags::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& CountResourceInstancesReq_tags::getValues()
{
    return values_;
}

void CountResourceInstancesReq_tags::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool CountResourceInstancesReq_tags::valuesIsSet() const
{
    return valuesIsSet_;
}

void CountResourceInstancesReq_tags::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


