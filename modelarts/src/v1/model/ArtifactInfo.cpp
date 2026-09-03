

#include "huaweicloud/modelarts/v1/model/ArtifactInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ArtifactInfo::ArtifactInfo()
{
    artifactType_ = "";
    artifactTypeIsSet_ = false;
    isBest_ = false;
    isBestIsSet_ = false;
    artifactId_ = "";
    artifactIdIsSet_ = false;
    continueTrainNums_ = 0;
    continueTrainNumsIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    epoch_ = 0;
    epochIsSet_ = false;
    steps_ = 0;
    stepsIsSet_ = false;
    loss_ = 0.0;
    lossIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    publishErrorMsg_ = "";
    publishErrorMsgIsSet_ = false;
    taskInfosIsSet_ = false;
}

ArtifactInfo::~ArtifactInfo() = default;

void ArtifactInfo::validate()
{
}

web::json::value ArtifactInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(artifactTypeIsSet_) {
        val[utility::conversions::to_string_t("artifact_type")] = ModelBase::toJson(artifactType_);
    }
    if(isBestIsSet_) {
        val[utility::conversions::to_string_t("is_best")] = ModelBase::toJson(isBest_);
    }
    if(artifactIdIsSet_) {
        val[utility::conversions::to_string_t("artifact_id")] = ModelBase::toJson(artifactId_);
    }
    if(continueTrainNumsIsSet_) {
        val[utility::conversions::to_string_t("continue_train_nums")] = ModelBase::toJson(continueTrainNums_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(epochIsSet_) {
        val[utility::conversions::to_string_t("epoch")] = ModelBase::toJson(epoch_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(lossIsSet_) {
        val[utility::conversions::to_string_t("loss")] = ModelBase::toJson(loss_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(publishErrorMsgIsSet_) {
        val[utility::conversions::to_string_t("publish_error_msg")] = ModelBase::toJson(publishErrorMsg_);
    }
    if(taskInfosIsSet_) {
        val[utility::conversions::to_string_t("task_infos")] = ModelBase::toJson(taskInfos_);
    }

    return val;
}
bool ArtifactInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("artifact_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifact_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_best"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_best"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBest(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("continue_train_nums"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("continue_train_nums"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContinueTrainNums(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("epoch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("epoch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpoch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("loss"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("loss"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoss(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publish_error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishErrorMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ContinueTrainTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskInfos(refVal);
        }
    }
    return ok;
}


std::string ArtifactInfo::getArtifactType() const
{
    return artifactType_;
}

void ArtifactInfo::setArtifactType(const std::string& value)
{
    artifactType_ = value;
    artifactTypeIsSet_ = true;
}

bool ArtifactInfo::artifactTypeIsSet() const
{
    return artifactTypeIsSet_;
}

void ArtifactInfo::unsetartifactType()
{
    artifactTypeIsSet_ = false;
}

bool ArtifactInfo::isIsBest() const
{
    return isBest_;
}

void ArtifactInfo::setIsBest(bool value)
{
    isBest_ = value;
    isBestIsSet_ = true;
}

bool ArtifactInfo::isBestIsSet() const
{
    return isBestIsSet_;
}

void ArtifactInfo::unsetisBest()
{
    isBestIsSet_ = false;
}

std::string ArtifactInfo::getArtifactId() const
{
    return artifactId_;
}

void ArtifactInfo::setArtifactId(const std::string& value)
{
    artifactId_ = value;
    artifactIdIsSet_ = true;
}

bool ArtifactInfo::artifactIdIsSet() const
{
    return artifactIdIsSet_;
}

void ArtifactInfo::unsetartifactId()
{
    artifactIdIsSet_ = false;
}

int32_t ArtifactInfo::getContinueTrainNums() const
{
    return continueTrainNums_;
}

void ArtifactInfo::setContinueTrainNums(int32_t value)
{
    continueTrainNums_ = value;
    continueTrainNumsIsSet_ = true;
}

bool ArtifactInfo::continueTrainNumsIsSet() const
{
    return continueTrainNumsIsSet_;
}

void ArtifactInfo::unsetcontinueTrainNums()
{
    continueTrainNumsIsSet_ = false;
}

std::string ArtifactInfo::getAssetId() const
{
    return assetId_;
}

void ArtifactInfo::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ArtifactInfo::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ArtifactInfo::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ArtifactInfo::getAssetName() const
{
    return assetName_;
}

void ArtifactInfo::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool ArtifactInfo::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void ArtifactInfo::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string ArtifactInfo::getStatus() const
{
    return status_;
}

void ArtifactInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ArtifactInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ArtifactInfo::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ArtifactInfo::getEpoch() const
{
    return epoch_;
}

void ArtifactInfo::setEpoch(int32_t value)
{
    epoch_ = value;
    epochIsSet_ = true;
}

bool ArtifactInfo::epochIsSet() const
{
    return epochIsSet_;
}

void ArtifactInfo::unsetepoch()
{
    epochIsSet_ = false;
}

int32_t ArtifactInfo::getSteps() const
{
    return steps_;
}

void ArtifactInfo::setSteps(int32_t value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool ArtifactInfo::stepsIsSet() const
{
    return stepsIsSet_;
}

void ArtifactInfo::unsetsteps()
{
    stepsIsSet_ = false;
}

double ArtifactInfo::getLoss() const
{
    return loss_;
}

void ArtifactInfo::setLoss(double value)
{
    loss_ = value;
    lossIsSet_ = true;
}

bool ArtifactInfo::lossIsSet() const
{
    return lossIsSet_;
}

void ArtifactInfo::unsetloss()
{
    lossIsSet_ = false;
}

std::string ArtifactInfo::getCreateTime() const
{
    return createTime_;
}

void ArtifactInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ArtifactInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ArtifactInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ArtifactInfo::getPublishErrorMsg() const
{
    return publishErrorMsg_;
}

void ArtifactInfo::setPublishErrorMsg(const std::string& value)
{
    publishErrorMsg_ = value;
    publishErrorMsgIsSet_ = true;
}

bool ArtifactInfo::publishErrorMsgIsSet() const
{
    return publishErrorMsgIsSet_;
}

void ArtifactInfo::unsetpublishErrorMsg()
{
    publishErrorMsgIsSet_ = false;
}

std::vector<ContinueTrainTask>& ArtifactInfo::getTaskInfos()
{
    return taskInfos_;
}

void ArtifactInfo::setTaskInfos(const std::vector<ContinueTrainTask>& value)
{
    taskInfos_ = value;
    taskInfosIsSet_ = true;
}

bool ArtifactInfo::taskInfosIsSet() const
{
    return taskInfosIsSet_;
}

void ArtifactInfo::unsettaskInfos()
{
    taskInfosIsSet_ = false;
}

}
}
}
}
}


