

#include "huaweicloud/rds/v3/model/ListComputeResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListComputeResourceRequest::ListComputeResourceRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    engine_ = "";
    engineIsSet_ = false;
}

ListComputeResourceRequest::~ListComputeResourceRequest() = default;

void ListComputeResourceRequest::validate()
{
}

web::json::value ListComputeResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(engineIsSet_) {
        val[utility::conversions::to_string_t("engine")] = ModelBase::toJson(engine_);
    }

    return val;
}
bool ListComputeResourceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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


int32_t ListComputeResourceRequest::getLimit() const
{
    return limit_;
}

void ListComputeResourceRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListComputeResourceRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListComputeResourceRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListComputeResourceRequest::getOffset() const
{
    return offset_;
}

void ListComputeResourceRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListComputeResourceRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListComputeResourceRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListComputeResourceRequest::getEngine() const
{
    return engine_;
}

void ListComputeResourceRequest::setEngine(const std::string& value)
{
    engine_ = value;
    engineIsSet_ = true;
}

bool ListComputeResourceRequest::engineIsSet() const
{
    return engineIsSet_;
}

void ListComputeResourceRequest::unsetengine()
{
    engineIsSet_ = false;
}

}
}
}
}
}


