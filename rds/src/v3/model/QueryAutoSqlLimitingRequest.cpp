

#include "huaweicloud/rds/v3/model/QueryAutoSqlLimitingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




QueryAutoSqlLimitingRequest::QueryAutoSqlLimitingRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

QueryAutoSqlLimitingRequest::~QueryAutoSqlLimitingRequest() = default;

void QueryAutoSqlLimitingRequest::validate()
{
}

web::json::value QueryAutoSqlLimitingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool QueryAutoSqlLimitingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string QueryAutoSqlLimitingRequest::getInstanceId() const
{
    return instanceId_;
}

void QueryAutoSqlLimitingRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool QueryAutoSqlLimitingRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void QueryAutoSqlLimitingRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string QueryAutoSqlLimitingRequest::getXLanguage() const
{
    return xLanguage_;
}

void QueryAutoSqlLimitingRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool QueryAutoSqlLimitingRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void QueryAutoSqlLimitingRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


