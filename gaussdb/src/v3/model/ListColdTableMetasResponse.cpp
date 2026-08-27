

#include "huaweicloud/gaussdb/v3/model/ListColdTableMetasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListColdTableMetasResponse::ListColdTableMetasResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    metaInfoIsSet_ = false;
    totalDataSize_ = 0.0f;
    totalDataSizeIsSet_ = false;
}

ListColdTableMetasResponse::~ListColdTableMetasResponse() = default;

void ListColdTableMetasResponse::validate()
{
}

web::json::value ListColdTableMetasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(metaInfoIsSet_) {
        val[utility::conversions::to_string_t("meta_info")] = ModelBase::toJson(metaInfo_);
    }
    if(totalDataSizeIsSet_) {
        val[utility::conversions::to_string_t("total_data_size")] = ModelBase::toJson(totalDataSize_);
    }

    return val;
}
bool ListColdTableMetasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("meta_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("meta_info"));
        if(!fieldValue.is_null())
        {
            std::vector<ColdTableMetaInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetaInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_data_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_data_size"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalDataSize(refVal);
        }
    }
    return ok;
}


int32_t ListColdTableMetasResponse::getTotal() const
{
    return total_;
}

void ListColdTableMetasResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListColdTableMetasResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListColdTableMetasResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ColdTableMetaInfo>& ListColdTableMetasResponse::getMetaInfo()
{
    return metaInfo_;
}

void ListColdTableMetasResponse::setMetaInfo(const std::vector<ColdTableMetaInfo>& value)
{
    metaInfo_ = value;
    metaInfoIsSet_ = true;
}

bool ListColdTableMetasResponse::metaInfoIsSet() const
{
    return metaInfoIsSet_;
}

void ListColdTableMetasResponse::unsetmetaInfo()
{
    metaInfoIsSet_ = false;
}

float ListColdTableMetasResponse::getTotalDataSize() const
{
    return totalDataSize_;
}

void ListColdTableMetasResponse::setTotalDataSize(float value)
{
    totalDataSize_ = value;
    totalDataSizeIsSet_ = true;
}

bool ListColdTableMetasResponse::totalDataSizeIsSet() const
{
    return totalDataSizeIsSet_;
}

void ListColdTableMetasResponse::unsettotalDataSize()
{
    totalDataSizeIsSet_ = false;
}

}
}
}
}
}


