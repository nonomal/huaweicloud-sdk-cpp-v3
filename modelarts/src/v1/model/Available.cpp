

#include "huaweicloud/modelarts/v1/model/Available.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Available::Available()
{
    valueIsSet_ = false;
    maxValueIsSet_ = false;
    timestamp_ = "";
    timestampIsSet_ = false;
    window_ = "";
    windowIsSet_ = false;
}

Available::~Available() = default;

void Available::validate()
{
}

web::json::value Available::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(maxValueIsSet_) {
        val[utility::conversions::to_string_t("maxValue")] = ModelBase::toJson(maxValue_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(windowIsSet_) {
        val[utility::conversions::to_string_t("window")] = ModelBase::toJson(window_);
    }

    return val;
}
bool Available::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            Value refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxValue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxValue"));
        if(!fieldValue.is_null())
        {
            Value refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("window"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWindow(refVal);
        }
    }
    return ok;
}


Value Available::getValue() const
{
    return value_;
}

void Available::setValue(const Value& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Available::valueIsSet() const
{
    return valueIsSet_;
}

void Available::unsetvalue()
{
    valueIsSet_ = false;
}

Value Available::getMaxValue() const
{
    return maxValue_;
}

void Available::setMaxValue(const Value& value)
{
    maxValue_ = value;
    maxValueIsSet_ = true;
}

bool Available::maxValueIsSet() const
{
    return maxValueIsSet_;
}

void Available::unsetmaxValue()
{
    maxValueIsSet_ = false;
}

std::string Available::getTimestamp() const
{
    return timestamp_;
}

void Available::setTimestamp(const std::string& value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool Available::timestampIsSet() const
{
    return timestampIsSet_;
}

void Available::unsettimestamp()
{
    timestampIsSet_ = false;
}

std::string Available::getWindow() const
{
    return window_;
}

void Available::setWindow(const std::string& value)
{
    window_ = value;
    windowIsSet_ = true;
}

bool Available::windowIsSet() const
{
    return windowIsSet_;
}

void Available::unsetwindow()
{
    windowIsSet_ = false;
}

}
}
}
}
}


