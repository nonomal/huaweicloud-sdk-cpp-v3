

#include "huaweicloud/rds/v3/model/ListComputeResourceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListComputeResourceResponse::ListComputeResourceResponse()
{
    resourcePackageInfosIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListComputeResourceResponse::~ListComputeResourceResponse() = default;

void ListComputeResourceResponse::validate()
{
}

web::json::value ListComputeResourceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcePackageInfosIsSet_) {
        val[utility::conversions::to_string_t("resource_package_infos")] = ModelBase::toJson(resourcePackageInfos_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListComputeResourceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_package_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_package_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourcePackageInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourcePackageInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<ResourcePackageInfo>& ListComputeResourceResponse::getResourcePackageInfos()
{
    return resourcePackageInfos_;
}

void ListComputeResourceResponse::setResourcePackageInfos(const std::vector<ResourcePackageInfo>& value)
{
    resourcePackageInfos_ = value;
    resourcePackageInfosIsSet_ = true;
}

bool ListComputeResourceResponse::resourcePackageInfosIsSet() const
{
    return resourcePackageInfosIsSet_;
}

void ListComputeResourceResponse::unsetresourcePackageInfos()
{
    resourcePackageInfosIsSet_ = false;
}

int32_t ListComputeResourceResponse::getTotal() const
{
    return total_;
}

void ListComputeResourceResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListComputeResourceResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListComputeResourceResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


