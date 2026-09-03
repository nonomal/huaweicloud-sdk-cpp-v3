

#include "huaweicloud/modelarts/v1/model/CountTrainingJobsByTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CountTrainingJobsByTagsRequest::CountTrainingJobsByTagsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    bodyIsSet_ = false;
}

CountTrainingJobsByTagsRequest::~CountTrainingJobsByTagsRequest() = default;

void CountTrainingJobsByTagsRequest::validate()
{
}

web::json::value CountTrainingJobsByTagsRequest::toJson() const
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
bool CountTrainingJobsByTagsRequest::fromJson(const web::json::value& val)
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
            CountResourceInstancesReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t CountTrainingJobsByTagsRequest::getLimit() const
{
    return limit_;
}

void CountTrainingJobsByTagsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool CountTrainingJobsByTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void CountTrainingJobsByTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t CountTrainingJobsByTagsRequest::getOffset() const
{
    return offset_;
}

void CountTrainingJobsByTagsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool CountTrainingJobsByTagsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void CountTrainingJobsByTagsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

CountResourceInstancesReq CountTrainingJobsByTagsRequest::getBody() const
{
    return body_;
}

void CountTrainingJobsByTagsRequest::setBody(const CountResourceInstancesReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountTrainingJobsByTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountTrainingJobsByTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


