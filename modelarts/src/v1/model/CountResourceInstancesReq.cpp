

#include "huaweicloud/modelarts/v1/model/CountResourceInstancesReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CountResourceInstancesReq::CountResourceInstancesReq()
{
    tagsIsSet_ = false;
    matchesIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    withoutAnyTag_ = false;
    withoutAnyTagIsSet_ = false;
}

CountResourceInstancesReq::~CountResourceInstancesReq() = default;

void CountResourceInstancesReq::validate()
{
}

web::json::value CountResourceInstancesReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(withoutAnyTagIsSet_) {
        val[utility::conversions::to_string_t("without_any_tag")] = ModelBase::toJson(withoutAnyTag_);
    }

    return val;
}
bool CountResourceInstancesReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CountResourceInstancesReq_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("matches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            std::vector<CountResourceInstancesReq_matches> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("without_any_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("without_any_tag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithoutAnyTag(refVal);
        }
    }
    return ok;
}


std::vector<CountResourceInstancesReq_tags>& CountResourceInstancesReq::getTags()
{
    return tags_;
}

void CountResourceInstancesReq::setTags(const std::vector<CountResourceInstancesReq_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CountResourceInstancesReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void CountResourceInstancesReq::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<CountResourceInstancesReq_matches>& CountResourceInstancesReq::getMatches()
{
    return matches_;
}

void CountResourceInstancesReq::setMatches(const std::vector<CountResourceInstancesReq_matches>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool CountResourceInstancesReq::matchesIsSet() const
{
    return matchesIsSet_;
}

void CountResourceInstancesReq::unsetmatches()
{
    matchesIsSet_ = false;
}

std::string CountResourceInstancesReq::getWorkspaceId() const
{
    return workspaceId_;
}

void CountResourceInstancesReq::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CountResourceInstancesReq::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CountResourceInstancesReq::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

bool CountResourceInstancesReq::isWithoutAnyTag() const
{
    return withoutAnyTag_;
}

void CountResourceInstancesReq::setWithoutAnyTag(bool value)
{
    withoutAnyTag_ = value;
    withoutAnyTagIsSet_ = true;
}

bool CountResourceInstancesReq::withoutAnyTagIsSet() const
{
    return withoutAnyTagIsSet_;
}

void CountResourceInstancesReq::unsetwithoutAnyTag()
{
    withoutAnyTagIsSet_ = false;
}

}
}
}
}
}


