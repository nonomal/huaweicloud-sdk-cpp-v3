

#include "huaweicloud/cloudtest/v1/model/BuildProduct.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BuildProduct::BuildProduct()
{
    name_ = "";
    nameIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

BuildProduct::~BuildProduct() = default;

void BuildProduct::validate()
{
}

web::json::value BuildProduct::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool BuildProduct::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    return ok;
}


std::string BuildProduct::getName() const
{
    return name_;
}

void BuildProduct::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BuildProduct::nameIsSet() const
{
    return nameIsSet_;
}

void BuildProduct::unsetname()
{
    nameIsSet_ = false;
}

std::string BuildProduct::getUrl() const
{
    return url_;
}

void BuildProduct::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool BuildProduct::urlIsSet() const
{
    return urlIsSet_;
}

void BuildProduct::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


