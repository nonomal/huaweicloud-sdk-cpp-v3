

#include "huaweicloud/modelarts/v1/model/ListTrainingJobTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListTrainingJobTagsResponse::ListTrainingJobTagsResponse()
{
    tagsIsSet_ = false;
}

ListTrainingJobTagsResponse::~ListTrainingJobTagsResponse() = default;

void ListTrainingJobTagsResponse::validate()
{
}

web::json::value ListTrainingJobTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListTrainingJobTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<ProjectTag>& ListTrainingJobTagsResponse::getTags()
{
    return tags_;
}

void ListTrainingJobTagsResponse::setTags(const std::vector<ProjectTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListTrainingJobTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListTrainingJobTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


