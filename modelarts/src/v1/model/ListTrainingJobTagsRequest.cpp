

#include "huaweicloud/modelarts/v1/model/ListTrainingJobTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTrainingJobTagsRequest::ListTrainingJobTagsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListTrainingJobTagsRequest::~ListTrainingJobTagsRequest() = default;

void ListTrainingJobTagsRequest::validate()
{
}

web::json::value ListTrainingJobTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListTrainingJobTagsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t ListTrainingJobTagsRequest::getLimit() const
{
    return limit_;
}

void ListTrainingJobTagsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTrainingJobTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTrainingJobTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListTrainingJobTagsRequest::getOffset() const
{
    return offset_;
}

void ListTrainingJobTagsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTrainingJobTagsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTrainingJobTagsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


