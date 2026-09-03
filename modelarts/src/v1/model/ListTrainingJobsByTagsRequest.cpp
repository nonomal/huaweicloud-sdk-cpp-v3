

#include "huaweicloud/modelarts/v1/model/ListTrainingJobsByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTrainingJobsByTagsRequest::ListTrainingJobsByTagsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    bodyIsSet_ = false;
}

ListTrainingJobsByTagsRequest::~ListTrainingJobsByTagsRequest() = default;

void ListTrainingJobsByTagsRequest::validate()
{
}

web::json::value ListTrainingJobsByTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListTrainingJobsByTagsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ResourceInstancesFilterReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t ListTrainingJobsByTagsRequest::getLimit() const
{
    return limit_;
}

void ListTrainingJobsByTagsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTrainingJobsByTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTrainingJobsByTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListTrainingJobsByTagsRequest::getOffset() const
{
    return offset_;
}

void ListTrainingJobsByTagsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTrainingJobsByTagsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTrainingJobsByTagsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

ResourceInstancesFilterReq ListTrainingJobsByTagsRequest::getBody() const
{
    return body_;
}

void ListTrainingJobsByTagsRequest::setBody(const ResourceInstancesFilterReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTrainingJobsByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTrainingJobsByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


