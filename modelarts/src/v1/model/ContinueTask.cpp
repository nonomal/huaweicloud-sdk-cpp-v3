

#include "huaweicloud/modelarts/v1/model/ContinueTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ContinueTask::ContinueTask()
{
    checkpointId_ = "";
    checkpointIdIsSet_ = false;
    sourceModelId_ = "";
    sourceModelIdIsSet_ = false;
    sourceModelName_ = "";
    sourceModelNameIsSet_ = false;
    epoch_ = 0;
    epochIsSet_ = false;
    steps_ = 0;
    stepsIsSet_ = false;
    isBest_ = false;
    isBestIsSet_ = false;
    skippedSteps_ = 0;
    skippedStepsIsSet_ = false;
}

ContinueTask::~ContinueTask() = default;

void ContinueTask::validate()
{
}

web::json::value ContinueTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkpointIdIsSet_) {
        val[utility::conversions::to_string_t("checkpoint_id")] = ModelBase::toJson(checkpointId_);
    }
    if(sourceModelIdIsSet_) {
        val[utility::conversions::to_string_t("source_model_id")] = ModelBase::toJson(sourceModelId_);
    }
    if(sourceModelNameIsSet_) {
        val[utility::conversions::to_string_t("source_model_name")] = ModelBase::toJson(sourceModelName_);
    }
    if(epochIsSet_) {
        val[utility::conversions::to_string_t("epoch")] = ModelBase::toJson(epoch_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }
    if(isBestIsSet_) {
        val[utility::conversions::to_string_t("is_best")] = ModelBase::toJson(isBest_);
    }
    if(skippedStepsIsSet_) {
        val[utility::conversions::to_string_t("skipped_steps")] = ModelBase::toJson(skippedSteps_);
    }

    return val;
}
bool ContinueTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("checkpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_model_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_model_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceModelId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_model_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_model_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceModelName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_best"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_best"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBest(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skipped_steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skipped_steps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkippedSteps(refVal);
        }
    }
    return ok;
}


std::string ContinueTask::getCheckpointId() const
{
    return checkpointId_;
}

void ContinueTask::setCheckpointId(const std::string& value)
{
    checkpointId_ = value;
    checkpointIdIsSet_ = true;
}

bool ContinueTask::checkpointIdIsSet() const
{
    return checkpointIdIsSet_;
}

void ContinueTask::unsetcheckpointId()
{
    checkpointIdIsSet_ = false;
}

std::string ContinueTask::getSourceModelId() const
{
    return sourceModelId_;
}

void ContinueTask::setSourceModelId(const std::string& value)
{
    sourceModelId_ = value;
    sourceModelIdIsSet_ = true;
}

bool ContinueTask::sourceModelIdIsSet() const
{
    return sourceModelIdIsSet_;
}

void ContinueTask::unsetsourceModelId()
{
    sourceModelIdIsSet_ = false;
}

std::string ContinueTask::getSourceModelName() const
{
    return sourceModelName_;
}

void ContinueTask::setSourceModelName(const std::string& value)
{
    sourceModelName_ = value;
    sourceModelNameIsSet_ = true;
}

bool ContinueTask::sourceModelNameIsSet() const
{
    return sourceModelNameIsSet_;
}

void ContinueTask::unsetsourceModelName()
{
    sourceModelNameIsSet_ = false;
}

int32_t ContinueTask::getEpoch() const
{
    return epoch_;
}

void ContinueTask::setEpoch(int32_t value)
{
    epoch_ = value;
    epochIsSet_ = true;
}

bool ContinueTask::epochIsSet() const
{
    return epochIsSet_;
}

void ContinueTask::unsetepoch()
{
    epochIsSet_ = false;
}

int32_t ContinueTask::getSteps() const
{
    return steps_;
}

void ContinueTask::setSteps(int32_t value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool ContinueTask::stepsIsSet() const
{
    return stepsIsSet_;
}

void ContinueTask::unsetsteps()
{
    stepsIsSet_ = false;
}

bool ContinueTask::isIsBest() const
{
    return isBest_;
}

void ContinueTask::setIsBest(bool value)
{
    isBest_ = value;
    isBestIsSet_ = true;
}

bool ContinueTask::isBestIsSet() const
{
    return isBestIsSet_;
}

void ContinueTask::unsetisBest()
{
    isBestIsSet_ = false;
}

int32_t ContinueTask::getSkippedSteps() const
{
    return skippedSteps_;
}

void ContinueTask::setSkippedSteps(int32_t value)
{
    skippedSteps_ = value;
    skippedStepsIsSet_ = true;
}

bool ContinueTask::skippedStepsIsSet() const
{
    return skippedStepsIsSet_;
}

void ContinueTask::unsetskippedSteps()
{
    skippedStepsIsSet_ = false;
}

}
}
}
}
}


