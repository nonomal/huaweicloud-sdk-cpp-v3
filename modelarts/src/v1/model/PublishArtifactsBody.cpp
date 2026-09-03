

#include "huaweicloud/modelarts/v1/model/PublishArtifactsBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PublishArtifactsBody::PublishArtifactsBody()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    publishArtifactsIsSet_ = false;
}

PublishArtifactsBody::~PublishArtifactsBody() = default;

void PublishArtifactsBody::validate()
{
}

web::json::value PublishArtifactsBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(publishArtifactsIsSet_) {
        val[utility::conversions::to_string_t("publish_artifacts")] = ModelBase::toJson(publishArtifacts_);
    }

    return val;
}
bool PublishArtifactsBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("publish_artifacts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_artifacts"));
        if(!fieldValue.is_null())
        {
            std::vector<ArtifactsPublish> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishArtifacts(refVal);
        }
    }
    return ok;
}


std::string PublishArtifactsBody::getWorkspaceId() const
{
    return workspaceId_;
}

void PublishArtifactsBody::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool PublishArtifactsBody::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void PublishArtifactsBody::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<ArtifactsPublish>& PublishArtifactsBody::getPublishArtifacts()
{
    return publishArtifacts_;
}

void PublishArtifactsBody::setPublishArtifacts(const std::vector<ArtifactsPublish>& value)
{
    publishArtifacts_ = value;
    publishArtifactsIsSet_ = true;
}

bool PublishArtifactsBody::publishArtifactsIsSet() const
{
    return publishArtifactsIsSet_;
}

void PublishArtifactsBody::unsetpublishArtifacts()
{
    publishArtifactsIsSet_ = false;
}

}
}
}
}
}


