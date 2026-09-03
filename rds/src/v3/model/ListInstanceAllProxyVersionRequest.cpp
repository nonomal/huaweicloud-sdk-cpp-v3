

#include "huaweicloud/rds/v3/model/ListInstanceAllProxyVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstanceAllProxyVersionRequest::ListInstanceAllProxyVersionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListInstanceAllProxyVersionRequest::~ListInstanceAllProxyVersionRequest() = default;

void ListInstanceAllProxyVersionRequest::validate()
{
}

web::json::value ListInstanceAllProxyVersionRequest::toJson() const
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
bool ListInstanceAllProxyVersionRequest::fromJson(const web::json::value& val)
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


std::string ListInstanceAllProxyVersionRequest::getInstanceId() const
{
    return instanceId_;
}

void ListInstanceAllProxyVersionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInstanceAllProxyVersionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInstanceAllProxyVersionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListInstanceAllProxyVersionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListInstanceAllProxyVersionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListInstanceAllProxyVersionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListInstanceAllProxyVersionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


