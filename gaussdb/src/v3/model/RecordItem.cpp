

#include "huaweicloud/gaussdb/v3/model/RecordItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RecordItem::RecordItem()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskContentIsSet_ = false;
    createdAt_ = 0L;
    createdAtIsSet_ = false;
    endedAt_ = 0L;
    endedAtIsSet_ = false;
    taskStatus_ = "";
    taskStatusIsSet_ = false;
    alterStage_ = 0;
    alterStageIsSet_ = false;
    percentage_ = 0.0f;
    percentageIsSet_ = false;
    errorReason_ = "";
    errorReasonIsSet_ = false;
    tempTableName_ = "";
    tempTableNameIsSet_ = false;
}

RecordItem::~RecordItem() = default;

void RecordItem::validate()
{
}

web::json::value RecordItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskContentIsSet_) {
        val[utility::conversions::to_string_t("task_content")] = ModelBase::toJson(taskContent_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(endedAtIsSet_) {
        val[utility::conversions::to_string_t("ended_at")] = ModelBase::toJson(endedAt_);
    }
    if(taskStatusIsSet_) {
        val[utility::conversions::to_string_t("task_status")] = ModelBase::toJson(taskStatus_);
    }
    if(alterStageIsSet_) {
        val[utility::conversions::to_string_t("alter_stage")] = ModelBase::toJson(alterStage_);
    }
    if(percentageIsSet_) {
        val[utility::conversions::to_string_t("percentage")] = ModelBase::toJson(percentage_);
    }
    if(errorReasonIsSet_) {
        val[utility::conversions::to_string_t("error_reason")] = ModelBase::toJson(errorReason_);
    }
    if(tempTableNameIsSet_) {
        val[utility::conversions::to_string_t("temp_table_name")] = ModelBase::toJson(tempTableName_);
    }

    return val;
}
bool RecordItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_content"));
        if(!fieldValue.is_null())
        {
            std::vector<OnlineDDLTaskContentItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ended_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ended_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alter_stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alter_stage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlterStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percentage"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("temp_table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("temp_table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTempTableName(refVal);
        }
    }
    return ok;
}


std::string RecordItem::getTaskId() const
{
    return taskId_;
}

void RecordItem::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool RecordItem::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void RecordItem::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::vector<OnlineDDLTaskContentItem>& RecordItem::getTaskContent()
{
    return taskContent_;
}

void RecordItem::setTaskContent(const std::vector<OnlineDDLTaskContentItem>& value)
{
    taskContent_ = value;
    taskContentIsSet_ = true;
}

bool RecordItem::taskContentIsSet() const
{
    return taskContentIsSet_;
}

void RecordItem::unsettaskContent()
{
    taskContentIsSet_ = false;
}

int64_t RecordItem::getCreatedAt() const
{
    return createdAt_;
}

void RecordItem::setCreatedAt(int64_t value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RecordItem::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RecordItem::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

int64_t RecordItem::getEndedAt() const
{
    return endedAt_;
}

void RecordItem::setEndedAt(int64_t value)
{
    endedAt_ = value;
    endedAtIsSet_ = true;
}

bool RecordItem::endedAtIsSet() const
{
    return endedAtIsSet_;
}

void RecordItem::unsetendedAt()
{
    endedAtIsSet_ = false;
}

std::string RecordItem::getTaskStatus() const
{
    return taskStatus_;
}

void RecordItem::setTaskStatus(const std::string& value)
{
    taskStatus_ = value;
    taskStatusIsSet_ = true;
}

bool RecordItem::taskStatusIsSet() const
{
    return taskStatusIsSet_;
}

void RecordItem::unsettaskStatus()
{
    taskStatusIsSet_ = false;
}

int32_t RecordItem::getAlterStage() const
{
    return alterStage_;
}

void RecordItem::setAlterStage(int32_t value)
{
    alterStage_ = value;
    alterStageIsSet_ = true;
}

bool RecordItem::alterStageIsSet() const
{
    return alterStageIsSet_;
}

void RecordItem::unsetalterStage()
{
    alterStageIsSet_ = false;
}

float RecordItem::getPercentage() const
{
    return percentage_;
}

void RecordItem::setPercentage(float value)
{
    percentage_ = value;
    percentageIsSet_ = true;
}

bool RecordItem::percentageIsSet() const
{
    return percentageIsSet_;
}

void RecordItem::unsetpercentage()
{
    percentageIsSet_ = false;
}

std::string RecordItem::getErrorReason() const
{
    return errorReason_;
}

void RecordItem::setErrorReason(const std::string& value)
{
    errorReason_ = value;
    errorReasonIsSet_ = true;
}

bool RecordItem::errorReasonIsSet() const
{
    return errorReasonIsSet_;
}

void RecordItem::unseterrorReason()
{
    errorReasonIsSet_ = false;
}

std::string RecordItem::getTempTableName() const
{
    return tempTableName_;
}

void RecordItem::setTempTableName(const std::string& value)
{
    tempTableName_ = value;
    tempTableNameIsSet_ = true;
}

bool RecordItem::tempTableNameIsSet() const
{
    return tempTableNameIsSet_;
}

void RecordItem::unsettempTableName()
{
    tempTableNameIsSet_ = false;
}

}
}
}
}
}


