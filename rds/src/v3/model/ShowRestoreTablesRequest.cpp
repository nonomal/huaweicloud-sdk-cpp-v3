

#include "huaweicloud/rds/v3/model/ShowRestoreTablesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowRestoreTablesRequest::ShowRestoreTablesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ShowRestoreTablesRequest::~ShowRestoreTablesRequest() = default;

void ShowRestoreTablesRequest::validate()
{
}

web::json::value ShowRestoreTablesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowRestoreTablesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ShowRestoreTablesRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowRestoreTablesRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowRestoreTablesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRestoreTablesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRestoreTablesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowRestoreTablesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowRestoreTablesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowRestoreTablesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowRestoreTablesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ShowRestoreTablesRequestBody ShowRestoreTablesRequest::getBody() const
{
    return body_;
}

void ShowRestoreTablesRequest::setBody(const ShowRestoreTablesRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowRestoreTablesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowRestoreTablesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


