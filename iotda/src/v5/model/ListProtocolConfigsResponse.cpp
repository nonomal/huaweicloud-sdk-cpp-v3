

#include "huaweicloud/iotda/v5/model/ListProtocolConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListProtocolConfigsResponse::ListProtocolConfigsResponse()
{
    protocolConfigsIsSet_ = false;
    pageIsSet_ = false;
}

ListProtocolConfigsResponse::~ListProtocolConfigsResponse() = default;

void ListProtocolConfigsResponse::validate()
{
}

web::json::value ListProtocolConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protocolConfigsIsSet_) {
        val[utility::conversions::to_string_t("protocol_configs")] = ModelBase::toJson(protocolConfigs_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListProtocolConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protocol_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<ProtocolConfigBase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocolConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<ProtocolConfigBase>& ListProtocolConfigsResponse::getProtocolConfigs()
{
    return protocolConfigs_;
}

void ListProtocolConfigsResponse::setProtocolConfigs(const std::vector<ProtocolConfigBase>& value)
{
    protocolConfigs_ = value;
    protocolConfigsIsSet_ = true;
}

bool ListProtocolConfigsResponse::protocolConfigsIsSet() const
{
    return protocolConfigsIsSet_;
}

void ListProtocolConfigsResponse::unsetprotocolConfigs()
{
    protocolConfigsIsSet_ = false;
}

Page ListProtocolConfigsResponse::getPage() const
{
    return page_;
}

void ListProtocolConfigsResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListProtocolConfigsResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListProtocolConfigsResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


