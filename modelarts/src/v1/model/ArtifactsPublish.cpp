

#include "huaweicloud/modelarts/v1/model/ArtifactsPublish.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ArtifactsPublish::ArtifactsPublish()
{
    isCkpt_ = false;
    isCkptIsSet_ = false;
    artifactId_ = "";
    artifactIdIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    publishAssetType_ = "";
    publishAssetTypeIsSet_ = false;
    assetSourceType_ = "";
    assetSourceTypeIsSet_ = false;
    assetCode_ = "";
    assetCodeIsSet_ = false;
    assetVersion_ = "";
    assetVersionIsSet_ = false;
    versionDescription_ = "";
    versionDescriptionIsSet_ = false;
}

ArtifactsPublish::~ArtifactsPublish() = default;

void ArtifactsPublish::validate()
{
}

web::json::value ArtifactsPublish::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isCkptIsSet_) {
        val[utility::conversions::to_string_t("is_ckpt")] = ModelBase::toJson(isCkpt_);
    }
    if(artifactIdIsSet_) {
        val[utility::conversions::to_string_t("artifact_id")] = ModelBase::toJson(artifactId_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(publishAssetTypeIsSet_) {
        val[utility::conversions::to_string_t("publish_asset_type")] = ModelBase::toJson(publishAssetType_);
    }
    if(assetSourceTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_source_type")] = ModelBase::toJson(assetSourceType_);
    }
    if(assetCodeIsSet_) {
        val[utility::conversions::to_string_t("asset_code")] = ModelBase::toJson(assetCode_);
    }
    if(assetVersionIsSet_) {
        val[utility::conversions::to_string_t("asset_version")] = ModelBase::toJson(assetVersion_);
    }
    if(versionDescriptionIsSet_) {
        val[utility::conversions::to_string_t("version_description")] = ModelBase::toJson(versionDescription_);
    }

    return val;
}
bool ArtifactsPublish::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_ckpt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_ckpt"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCkpt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("artifact_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publish_asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishAssetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionDescription(refVal);
        }
    }
    return ok;
}


bool ArtifactsPublish::isIsCkpt() const
{
    return isCkpt_;
}

void ArtifactsPublish::setIsCkpt(bool value)
{
    isCkpt_ = value;
    isCkptIsSet_ = true;
}

bool ArtifactsPublish::isCkptIsSet() const
{
    return isCkptIsSet_;
}

void ArtifactsPublish::unsetisCkpt()
{
    isCkptIsSet_ = false;
}

std::string ArtifactsPublish::getArtifactId() const
{
    return artifactId_;
}

void ArtifactsPublish::setArtifactId(const std::string& value)
{
    artifactId_ = value;
    artifactIdIsSet_ = true;
}

bool ArtifactsPublish::artifactIdIsSet() const
{
    return artifactIdIsSet_;
}

void ArtifactsPublish::unsetartifactId()
{
    artifactIdIsSet_ = false;
}

std::string ArtifactsPublish::getAssetName() const
{
    return assetName_;
}

void ArtifactsPublish::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool ArtifactsPublish::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void ArtifactsPublish::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string ArtifactsPublish::getVisibility() const
{
    return visibility_;
}

void ArtifactsPublish::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool ArtifactsPublish::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void ArtifactsPublish::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string ArtifactsPublish::getDescription() const
{
    return description_;
}

void ArtifactsPublish::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ArtifactsPublish::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ArtifactsPublish::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ArtifactsPublish::getPublishAssetType() const
{
    return publishAssetType_;
}

void ArtifactsPublish::setPublishAssetType(const std::string& value)
{
    publishAssetType_ = value;
    publishAssetTypeIsSet_ = true;
}

bool ArtifactsPublish::publishAssetTypeIsSet() const
{
    return publishAssetTypeIsSet_;
}

void ArtifactsPublish::unsetpublishAssetType()
{
    publishAssetTypeIsSet_ = false;
}

std::string ArtifactsPublish::getAssetSourceType() const
{
    return assetSourceType_;
}

void ArtifactsPublish::setAssetSourceType(const std::string& value)
{
    assetSourceType_ = value;
    assetSourceTypeIsSet_ = true;
}

bool ArtifactsPublish::assetSourceTypeIsSet() const
{
    return assetSourceTypeIsSet_;
}

void ArtifactsPublish::unsetassetSourceType()
{
    assetSourceTypeIsSet_ = false;
}

std::string ArtifactsPublish::getAssetCode() const
{
    return assetCode_;
}

void ArtifactsPublish::setAssetCode(const std::string& value)
{
    assetCode_ = value;
    assetCodeIsSet_ = true;
}

bool ArtifactsPublish::assetCodeIsSet() const
{
    return assetCodeIsSet_;
}

void ArtifactsPublish::unsetassetCode()
{
    assetCodeIsSet_ = false;
}

std::string ArtifactsPublish::getAssetVersion() const
{
    return assetVersion_;
}

void ArtifactsPublish::setAssetVersion(const std::string& value)
{
    assetVersion_ = value;
    assetVersionIsSet_ = true;
}

bool ArtifactsPublish::assetVersionIsSet() const
{
    return assetVersionIsSet_;
}

void ArtifactsPublish::unsetassetVersion()
{
    assetVersionIsSet_ = false;
}

std::string ArtifactsPublish::getVersionDescription() const
{
    return versionDescription_;
}

void ArtifactsPublish::setVersionDescription(const std::string& value)
{
    versionDescription_ = value;
    versionDescriptionIsSet_ = true;
}

bool ArtifactsPublish::versionDescriptionIsSet() const
{
    return versionDescriptionIsSet_;
}

void ArtifactsPublish::unsetversionDescription()
{
    versionDescriptionIsSet_ = false;
}

}
}
}
}
}


