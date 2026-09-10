

#include "huaweicloud/rds/v3/model/CollectInstanceStatisticRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CollectInstanceStatisticRequest::CollectInstanceStatisticRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    engine_ = "";
    engineIsSet_ = false;
}

CollectInstanceStatisticRequest::~CollectInstanceStatisticRequest() = default;

void CollectInstanceStatisticRequest::validate()
{
}

web::json::value CollectInstanceStatisticRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }

    return val;
}
bool CollectInstanceStatisticRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngine(refVal);
        }
    }
    return ok;
}


std::string CollectInstanceStatisticRequest::getXLanguage() const
{
    return xLanguage_;
}

void CollectInstanceStatisticRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CollectInstanceStatisticRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CollectInstanceStatisticRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CollectInstanceStatisticRequest::getEngine() const
{
    return engine_;
}

void CollectInstanceStatisticRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool CollectInstanceStatisticRequest::engineIsSet() const
{
    return engineIsSet_;
}

void CollectInstanceStatisticRequest::unsetengine()
{
    engineIsSet_ = false;
}

}
}
}
}
}


