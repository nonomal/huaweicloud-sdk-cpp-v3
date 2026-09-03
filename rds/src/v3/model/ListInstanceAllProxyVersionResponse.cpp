

#include "huaweicloud/rds/v3/model/ListInstanceAllProxyVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstanceAllProxyVersionResponse::ListInstanceAllProxyVersionResponse()
{
    proxyEngineVersionInfosIsSet_ = false;
}

ListInstanceAllProxyVersionResponse::~ListInstanceAllProxyVersionResponse() = default;

void ListInstanceAllProxyVersionResponse::validate()
{
}

web::json::value ListInstanceAllProxyVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(proxyEngineVersionInfosIsSet_) {
        val[utility::conversions::to_string_t("proxy_engine_version_infos")] = ModelBase::toJson(proxyEngineVersionInfos_);
    }

    return val;
}
bool ListInstanceAllProxyVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("proxy_engine_version_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_engine_version_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ProxyEngineVersionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyEngineVersionInfos(refVal);
        }
    }
    return ok;
}


std::vector<ProxyEngineVersionInfo>& ListInstanceAllProxyVersionResponse::getProxyEngineVersionInfos()
{
    return proxyEngineVersionInfos_;
}

void ListInstanceAllProxyVersionResponse::setProxyEngineVersionInfos(const std::vector<ProxyEngineVersionInfo>& value)
{
    proxyEngineVersionInfos_ = value;
    proxyEngineVersionInfosIsSet_ = true;
}

bool ListInstanceAllProxyVersionResponse::proxyEngineVersionInfosIsSet() const
{
    return proxyEngineVersionInfosIsSet_;
}

void ListInstanceAllProxyVersionResponse::unsetproxyEngineVersionInfos()
{
    proxyEngineVersionInfosIsSet_ = false;
}

}
}
}
}
}


