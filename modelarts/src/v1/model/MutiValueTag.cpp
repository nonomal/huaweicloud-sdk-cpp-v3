

#include "huaweicloud/modelarts/v1/model/MutiValueTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




MutiValueTag::MutiValueTag()
{
    key_ = "";
    keyIsSet_ = false;
    valuesIsSet_ = false;
}

MutiValueTag::~MutiValueTag() = default;

void MutiValueTag::validate()
{
}

web::json::value MutiValueTag::toJson() const
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
bool MutiValueTag::fromJson(const web::json::value& val)
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


std::string MutiValueTag::getKey() const
{
    return key_;
}

void MutiValueTag::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool MutiValueTag::keyIsSet() const
{
    return keyIsSet_;
}

void MutiValueTag::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& MutiValueTag::getValues()
{
    return values_;
}

void MutiValueTag::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool MutiValueTag::valuesIsSet() const
{
    return valuesIsSet_;
}

void MutiValueTag::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


