

#include "huaweicloud/modelarts/v1/model/ResourceInstancesFilterReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceInstancesFilterReq::ResourceInstancesFilterReq()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    tagsIsSet_ = false;
    withoutAnyTag_ = false;
    withoutAnyTagIsSet_ = false;
    matchesIsSet_ = false;
}

ResourceInstancesFilterReq::~ResourceInstancesFilterReq() = default;

void ResourceInstancesFilterReq::validate()
{
}

web::json::value ResourceInstancesFilterReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(withoutAnyTagIsSet_) {
        val[utility::conversions::to_string_t("without_any_tag")] = ModelBase::toJson(withoutAnyTag_);
    }
    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }

    return val;
}
bool ResourceInstancesFilterReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<MutiValueTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("matches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            std::vector<Match> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    return ok;
}


std::string ResourceInstancesFilterReq::getWorkspaceId() const
{
    return workspaceId_;
}

void ResourceInstancesFilterReq::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ResourceInstancesFilterReq::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ResourceInstancesFilterReq::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<MutiValueTag>& ResourceInstancesFilterReq::getTags()
{
    return tags_;
}

void ResourceInstancesFilterReq::setTags(const std::vector<MutiValueTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ResourceInstancesFilterReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void ResourceInstancesFilterReq::unsettags()
{
    tagsIsSet_ = false;
}

bool ResourceInstancesFilterReq::isWithoutAnyTag() const
{
    return withoutAnyTag_;
}

void ResourceInstancesFilterReq::setWithoutAnyTag(bool value)
{
    withoutAnyTag_ = value;
    withoutAnyTagIsSet_ = true;
}

bool ResourceInstancesFilterReq::withoutAnyTagIsSet() const
{
    return withoutAnyTagIsSet_;
}

void ResourceInstancesFilterReq::unsetwithoutAnyTag()
{
    withoutAnyTagIsSet_ = false;
}

std::vector<Match>& ResourceInstancesFilterReq::getMatches()
{
    return matches_;
}

void ResourceInstancesFilterReq::setMatches(const std::vector<Match>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ResourceInstancesFilterReq::matchesIsSet() const
{
    return matchesIsSet_;
}

void ResourceInstancesFilterReq::unsetmatches()
{
    matchesIsSet_ = false;
}

}
}
}
}
}


