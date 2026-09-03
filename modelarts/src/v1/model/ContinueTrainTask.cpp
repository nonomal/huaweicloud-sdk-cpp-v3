

#include "huaweicloud/modelarts/v1/model/ContinueTrainTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ContinueTrainTask::ContinueTrainTask()
{
    checkpointId_ = "";
    checkpointIdIsSet_ = false;
    continueTaskId_ = "";
    continueTaskIdIsSet_ = false;
    continueTaskName_ = "";
    continueTaskNameIsSet_ = false;
    continueTrainType_ = "";
    continueTrainTypeIsSet_ = false;
    skippedSteps_ = 0;
    skippedStepsIsSet_ = false;
    restoreTraining_ = 0;
    restoreTrainingIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    checkpointConfig_ = "";
    checkpointConfigIsSet_ = false;
}

ContinueTrainTask::~ContinueTrainTask() = default;

void ContinueTrainTask::validate()
{
}

web::json::value ContinueTrainTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkpointIdIsSet_) {
        val[utility::conversions::to_string_t("checkpoint_id")] = ModelBase::toJson(checkpointId_);
    }
    if(continueTaskIdIsSet_) {
        val[utility::conversions::to_string_t("continue_task_id")] = ModelBase::toJson(continueTaskId_);
    }
    if(continueTaskNameIsSet_) {
        val[utility::conversions::to_string_t("continue_task_name")] = ModelBase::toJson(continueTaskName_);
    }
    if(continueTrainTypeIsSet_) {
        val[utility::conversions::to_string_t("continue_train_type")] = ModelBase::toJson(continueTrainType_);
    }
    if(skippedStepsIsSet_) {
        val[utility::conversions::to_string_t("skipped_steps")] = ModelBase::toJson(skippedSteps_);
    }
    if(restoreTrainingIsSet_) {
        val[utility::conversions::to_string_t("restore_training")] = ModelBase::toJson(restoreTraining_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(checkpointConfigIsSet_) {
        val[utility::conversions::to_string_t("checkpoint_config")] = ModelBase::toJson(checkpointConfig_);
    }

    return val;
}
bool ContinueTrainTask::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("continue_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("continue_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContinueTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("continue_task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("continue_task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContinueTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("continue_train_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("continue_train_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContinueTrainType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("restore_training"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_training"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTraining(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("checkpoint_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint_config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpointConfig(refVal);
        }
    }
    return ok;
}


std::string ContinueTrainTask::getCheckpointId() const
{
    return checkpointId_;
}

void ContinueTrainTask::setCheckpointId(const std::string& value)
{
    checkpointId_ = value;
    checkpointIdIsSet_ = true;
}

bool ContinueTrainTask::checkpointIdIsSet() const
{
    return checkpointIdIsSet_;
}

void ContinueTrainTask::unsetcheckpointId()
{
    checkpointIdIsSet_ = false;
}

std::string ContinueTrainTask::getContinueTaskId() const
{
    return continueTaskId_;
}

void ContinueTrainTask::setContinueTaskId(const std::string& value)
{
    continueTaskId_ = value;
    continueTaskIdIsSet_ = true;
}

bool ContinueTrainTask::continueTaskIdIsSet() const
{
    return continueTaskIdIsSet_;
}

void ContinueTrainTask::unsetcontinueTaskId()
{
    continueTaskIdIsSet_ = false;
}

std::string ContinueTrainTask::getContinueTaskName() const
{
    return continueTaskName_;
}

void ContinueTrainTask::setContinueTaskName(const std::string& value)
{
    continueTaskName_ = value;
    continueTaskNameIsSet_ = true;
}

bool ContinueTrainTask::continueTaskNameIsSet() const
{
    return continueTaskNameIsSet_;
}

void ContinueTrainTask::unsetcontinueTaskName()
{
    continueTaskNameIsSet_ = false;
}

std::string ContinueTrainTask::getContinueTrainType() const
{
    return continueTrainType_;
}

void ContinueTrainTask::setContinueTrainType(const std::string& value)
{
    continueTrainType_ = value;
    continueTrainTypeIsSet_ = true;
}

bool ContinueTrainTask::continueTrainTypeIsSet() const
{
    return continueTrainTypeIsSet_;
}

void ContinueTrainTask::unsetcontinueTrainType()
{
    continueTrainTypeIsSet_ = false;
}

int32_t ContinueTrainTask::getSkippedSteps() const
{
    return skippedSteps_;
}

void ContinueTrainTask::setSkippedSteps(int32_t value)
{
    skippedSteps_ = value;
    skippedStepsIsSet_ = true;
}

bool ContinueTrainTask::skippedStepsIsSet() const
{
    return skippedStepsIsSet_;
}

void ContinueTrainTask::unsetskippedSteps()
{
    skippedStepsIsSet_ = false;
}

int32_t ContinueTrainTask::getRestoreTraining() const
{
    return restoreTraining_;
}

void ContinueTrainTask::setRestoreTraining(int32_t value)
{
    restoreTraining_ = value;
    restoreTrainingIsSet_ = true;
}

bool ContinueTrainTask::restoreTrainingIsSet() const
{
    return restoreTrainingIsSet_;
}

void ContinueTrainTask::unsetrestoreTraining()
{
    restoreTrainingIsSet_ = false;
}

std::string ContinueTrainTask::getCreateTime() const
{
    return createTime_;
}

void ContinueTrainTask::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ContinueTrainTask::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ContinueTrainTask::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ContinueTrainTask::getCheckpointConfig() const
{
    return checkpointConfig_;
}

void ContinueTrainTask::setCheckpointConfig(const std::string& value)
{
    checkpointConfig_ = value;
    checkpointConfigIsSet_ = true;
}

bool ContinueTrainTask::checkpointConfigIsSet() const
{
    return checkpointConfigIsSet_;
}

void ContinueTrainTask::unsetcheckpointConfig()
{
    checkpointConfigIsSet_ = false;
}

}
}
}
}
}


