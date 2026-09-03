

#include "huaweicloud/modelarts/v1/model/ShowFtDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowFtDetailResponse::ShowFtDetailResponse()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    taskDesc_ = "";
    taskDescIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    modelAssetId_ = "";
    modelAssetIdIsSet_ = false;
    modelType_ = "";
    modelTypeIsSet_ = false;
    modelSource_ = "";
    modelSourceIsSet_ = false;
    trainType_ = "";
    trainTypeIsSet_ = false;
    checkpointConfig_ = "";
    checkpointConfigIsSet_ = false;
    taskParameters_ = "";
    taskParametersIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    trainProcess_ = 0.0;
    trainProcessIsSet_ = false;
    datasetsConfigIsSet_ = false;
    statusIsSet_ = false;
    autoPublishConfig_ = "";
    autoPublishConfigIsSet_ = false;
    assetCode_ = "";
    assetCodeIsSet_ = false;
    assetName_ = "";
    assetNameIsSet_ = false;
    assetDesc_ = "";
    assetDescIsSet_ = false;
    assetSeries_ = "";
    assetSeriesIsSet_ = false;
    assetVersion_ = "";
    assetVersionIsSet_ = false;
    assetType_ = "";
    assetTypeIsSet_ = false;
    assetSource_ = "";
    assetSourceIsSet_ = false;
    assetGroupId_ = "";
    assetGroupIdIsSet_ = false;
    subAssetType_ = "";
    subAssetTypeIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    rootAssetId_ = "";
    rootAssetIdIsSet_ = false;
    trainCostTime_ = 0L;
    trainCostTimeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    poolType_ = "";
    poolTypeIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    poolNodeCount_ = "";
    poolNodeCountIsSet_ = false;
    flavorId_ = "";
    flavorIdIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    trainingInfo_ = "";
    trainingInfoIsSet_ = false;
    trainOutputPath_ = "";
    trainOutputPathIsSet_ = false;
    assetCapabilitiesIsSet_ = false;
    continueTaskIsSet_ = false;
}

ShowFtDetailResponse::~ShowFtDetailResponse() = default;

void ShowFtDetailResponse::validate()
{
}

web::json::value ShowFtDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(taskDescIsSet_) {
        val[utility::conversions::to_string_t("task_desc")] = ModelBase::toJson(taskDesc_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }
    if(modelAssetIdIsSet_) {
        val[utility::conversions::to_string_t("model_asset_id")] = ModelBase::toJson(modelAssetId_);
    }
    if(modelTypeIsSet_) {
        val[utility::conversions::to_string_t("model_type")] = ModelBase::toJson(modelType_);
    }
    if(modelSourceIsSet_) {
        val[utility::conversions::to_string_t("model_source")] = ModelBase::toJson(modelSource_);
    }
    if(trainTypeIsSet_) {
        val[utility::conversions::to_string_t("train_type")] = ModelBase::toJson(trainType_);
    }
    if(checkpointConfigIsSet_) {
        val[utility::conversions::to_string_t("checkpoint_config")] = ModelBase::toJson(checkpointConfig_);
    }
    if(taskParametersIsSet_) {
        val[utility::conversions::to_string_t("task_parameters")] = ModelBase::toJson(taskParameters_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(trainProcessIsSet_) {
        val[utility::conversions::to_string_t("train_process")] = ModelBase::toJson(trainProcess_);
    }
    if(datasetsConfigIsSet_) {
        val[utility::conversions::to_string_t("datasets_config")] = ModelBase::toJson(datasetsConfig_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(autoPublishConfigIsSet_) {
        val[utility::conversions::to_string_t("auto_publish_config")] = ModelBase::toJson(autoPublishConfig_);
    }
    if(assetCodeIsSet_) {
        val[utility::conversions::to_string_t("asset_code")] = ModelBase::toJson(assetCode_);
    }
    if(assetNameIsSet_) {
        val[utility::conversions::to_string_t("asset_name")] = ModelBase::toJson(assetName_);
    }
    if(assetDescIsSet_) {
        val[utility::conversions::to_string_t("asset_desc")] = ModelBase::toJson(assetDesc_);
    }
    if(assetSeriesIsSet_) {
        val[utility::conversions::to_string_t("asset_series")] = ModelBase::toJson(assetSeries_);
    }
    if(assetVersionIsSet_) {
        val[utility::conversions::to_string_t("asset_version")] = ModelBase::toJson(assetVersion_);
    }
    if(assetTypeIsSet_) {
        val[utility::conversions::to_string_t("asset_type")] = ModelBase::toJson(assetType_);
    }
    if(assetSourceIsSet_) {
        val[utility::conversions::to_string_t("asset_source")] = ModelBase::toJson(assetSource_);
    }
    if(assetGroupIdIsSet_) {
        val[utility::conversions::to_string_t("asset_group_id")] = ModelBase::toJson(assetGroupId_);
    }
    if(subAssetTypeIsSet_) {
        val[utility::conversions::to_string_t("sub_asset_type")] = ModelBase::toJson(subAssetType_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("api_version")] = ModelBase::toJson(apiVersion_);
    }
    if(rootAssetIdIsSet_) {
        val[utility::conversions::to_string_t("root_asset_id")] = ModelBase::toJson(rootAssetId_);
    }
    if(trainCostTimeIsSet_) {
        val[utility::conversions::to_string_t("train_cost_time")] = ModelBase::toJson(trainCostTime_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(poolTypeIsSet_) {
        val[utility::conversions::to_string_t("pool_type")] = ModelBase::toJson(poolType_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(poolNodeCountIsSet_) {
        val[utility::conversions::to_string_t("pool_node_count")] = ModelBase::toJson(poolNodeCount_);
    }
    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(trainingInfoIsSet_) {
        val[utility::conversions::to_string_t("training_info")] = ModelBase::toJson(trainingInfo_);
    }
    if(trainOutputPathIsSet_) {
        val[utility::conversions::to_string_t("train_output_path")] = ModelBase::toJson(trainOutputPath_);
    }
    if(assetCapabilitiesIsSet_) {
        val[utility::conversions::to_string_t("asset_capabilities")] = ModelBase::toJson(assetCapabilities_);
    }
    if(continueTaskIsSet_) {
        val[utility::conversions::to_string_t("continue_task")] = ModelBase::toJson(continueTask_);
    }

    return val;
}
bool ShowFtDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            JobMetadataResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            SpecResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("train_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("train_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_parameters"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("train_process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("train_process"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datasets_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datasets_config"));
        if(!fieldValue.is_null())
        {
            std::vector<DatasetConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetsConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            Status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_publish_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_publish_config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoPublishConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("asset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_series"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_series"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetSeries(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_asset_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_asset_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubAssetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("api_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("api_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("root_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("train_cost_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("train_cost_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainCostTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_node_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_node_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("training_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("train_output_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("train_output_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainOutputPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_capabilities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_capabilities"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetCapabilities(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("continue_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("continue_task"));
        if(!fieldValue.is_null())
        {
            ContinueTask refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContinueTask(refVal);
        }
    }
    return ok;
}


std::string ShowFtDetailResponse::getProjectId() const
{
    return projectId_;
}

void ShowFtDetailResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowFtDetailResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowFtDetailResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowFtDetailResponse::getTaskId() const
{
    return taskId_;
}

void ShowFtDetailResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowFtDetailResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowFtDetailResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowFtDetailResponse::getTaskName() const
{
    return taskName_;
}

void ShowFtDetailResponse::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool ShowFtDetailResponse::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void ShowFtDetailResponse::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string ShowFtDetailResponse::getTaskDesc() const
{
    return taskDesc_;
}

void ShowFtDetailResponse::setTaskDesc(const std::string& value)
{
    taskDesc_ = value;
    taskDescIsSet_ = true;
}

bool ShowFtDetailResponse::taskDescIsSet() const
{
    return taskDescIsSet_;
}

void ShowFtDetailResponse::unsettaskDesc()
{
    taskDescIsSet_ = false;
}

JobMetadataResponse ShowFtDetailResponse::getMetadata() const
{
    return metadata_;
}

void ShowFtDetailResponse::setMetadata(const JobMetadataResponse& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowFtDetailResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowFtDetailResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

SpecResponse ShowFtDetailResponse::getSpec() const
{
    return spec_;
}

void ShowFtDetailResponse::setSpec(const SpecResponse& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowFtDetailResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowFtDetailResponse::unsetspec()
{
    specIsSet_ = false;
}

std::string ShowFtDetailResponse::getModelAssetId() const
{
    return modelAssetId_;
}

void ShowFtDetailResponse::setModelAssetId(const std::string& value)
{
    modelAssetId_ = value;
    modelAssetIdIsSet_ = true;
}

bool ShowFtDetailResponse::modelAssetIdIsSet() const
{
    return modelAssetIdIsSet_;
}

void ShowFtDetailResponse::unsetmodelAssetId()
{
    modelAssetIdIsSet_ = false;
}

std::string ShowFtDetailResponse::getModelType() const
{
    return modelType_;
}

void ShowFtDetailResponse::setModelType(const std::string& value)
{
    modelType_ = value;
    modelTypeIsSet_ = true;
}

bool ShowFtDetailResponse::modelTypeIsSet() const
{
    return modelTypeIsSet_;
}

void ShowFtDetailResponse::unsetmodelType()
{
    modelTypeIsSet_ = false;
}

std::string ShowFtDetailResponse::getModelSource() const
{
    return modelSource_;
}

void ShowFtDetailResponse::setModelSource(const std::string& value)
{
    modelSource_ = value;
    modelSourceIsSet_ = true;
}

bool ShowFtDetailResponse::modelSourceIsSet() const
{
    return modelSourceIsSet_;
}

void ShowFtDetailResponse::unsetmodelSource()
{
    modelSourceIsSet_ = false;
}

std::string ShowFtDetailResponse::getTrainType() const
{
    return trainType_;
}

void ShowFtDetailResponse::setTrainType(const std::string& value)
{
    trainType_ = value;
    trainTypeIsSet_ = true;
}

bool ShowFtDetailResponse::trainTypeIsSet() const
{
    return trainTypeIsSet_;
}

void ShowFtDetailResponse::unsettrainType()
{
    trainTypeIsSet_ = false;
}

std::string ShowFtDetailResponse::getCheckpointConfig() const
{
    return checkpointConfig_;
}

void ShowFtDetailResponse::setCheckpointConfig(const std::string& value)
{
    checkpointConfig_ = value;
    checkpointConfigIsSet_ = true;
}

bool ShowFtDetailResponse::checkpointConfigIsSet() const
{
    return checkpointConfigIsSet_;
}

void ShowFtDetailResponse::unsetcheckpointConfig()
{
    checkpointConfigIsSet_ = false;
}

std::string ShowFtDetailResponse::getTaskParameters() const
{
    return taskParameters_;
}

void ShowFtDetailResponse::setTaskParameters(const std::string& value)
{
    taskParameters_ = value;
    taskParametersIsSet_ = true;
}

bool ShowFtDetailResponse::taskParametersIsSet() const
{
    return taskParametersIsSet_;
}

void ShowFtDetailResponse::unsettaskParameters()
{
    taskParametersIsSet_ = false;
}

int64_t ShowFtDetailResponse::getCreateTime() const
{
    return createTime_;
}

void ShowFtDetailResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowFtDetailResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowFtDetailResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t ShowFtDetailResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowFtDetailResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowFtDetailResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowFtDetailResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

double ShowFtDetailResponse::getTrainProcess() const
{
    return trainProcess_;
}

void ShowFtDetailResponse::setTrainProcess(double value)
{
    trainProcess_ = value;
    trainProcessIsSet_ = true;
}

bool ShowFtDetailResponse::trainProcessIsSet() const
{
    return trainProcessIsSet_;
}

void ShowFtDetailResponse::unsettrainProcess()
{
    trainProcessIsSet_ = false;
}

std::vector<DatasetConfig>& ShowFtDetailResponse::getDatasetsConfig()
{
    return datasetsConfig_;
}

void ShowFtDetailResponse::setDatasetsConfig(const std::vector<DatasetConfig>& value)
{
    datasetsConfig_ = value;
    datasetsConfigIsSet_ = true;
}

bool ShowFtDetailResponse::datasetsConfigIsSet() const
{
    return datasetsConfigIsSet_;
}

void ShowFtDetailResponse::unsetdatasetsConfig()
{
    datasetsConfigIsSet_ = false;
}

Status ShowFtDetailResponse::getStatus() const
{
    return status_;
}

void ShowFtDetailResponse::setStatus(const Status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowFtDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowFtDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowFtDetailResponse::getAutoPublishConfig() const
{
    return autoPublishConfig_;
}

void ShowFtDetailResponse::setAutoPublishConfig(const std::string& value)
{
    autoPublishConfig_ = value;
    autoPublishConfigIsSet_ = true;
}

bool ShowFtDetailResponse::autoPublishConfigIsSet() const
{
    return autoPublishConfigIsSet_;
}

void ShowFtDetailResponse::unsetautoPublishConfig()
{
    autoPublishConfigIsSet_ = false;
}

std::string ShowFtDetailResponse::getAssetCode() const
{
    return assetCode_;
}

void ShowFtDetailResponse::setAssetCode(const std::string& value)
{
    assetCode_ = value;
    assetCodeIsSet_ = true;
}

bool ShowFtDetailResponse::assetCodeIsSet() const
{
    return assetCodeIsSet_;
}

void ShowFtDetailResponse::unsetassetCode()
{
    assetCodeIsSet_ = false;
}

std::string ShowFtDetailResponse::getAssetName() const
{
    return assetName_;
}

void ShowFtDetailResponse::setAssetName(const std::string& value)
{
    assetName_ = value;
    assetNameIsSet_ = true;
}

bool ShowFtDetailResponse::assetNameIsSet() const
{
    return assetNameIsSet_;
}

void ShowFtDetailResponse::unsetassetName()
{
    assetNameIsSet_ = false;
}

std::string ShowFtDetailResponse::getAssetDesc() const
{
    return assetDesc_;
}

void ShowFtDetailResponse::setAssetDesc(const std::string& value)
{
    assetDesc_ = value;
    assetDescIsSet_ = true;
}

bool ShowFtDetailResponse::assetDescIsSet() const
{
    return assetDescIsSet_;
}

void ShowFtDetailResponse::unsetassetDesc()
{
    assetDescIsSet_ = false;
}

std::string ShowFtDetailResponse::getAssetSeries() const
{
    return assetSeries_;
}

void ShowFtDetailResponse::setAssetSeries(const std::string& value)
{
    assetSeries_ = value;
    assetSeriesIsSet_ = true;
}

bool ShowFtDetailResponse::assetSeriesIsSet() const
{
    return assetSeriesIsSet_;
}

void ShowFtDetailResponse::unsetassetSeries()
{
    assetSeriesIsSet_ = false;
}

std::string ShowFtDetailResponse::getAssetVersion() const
{
    return assetVersion_;
}

void ShowFtDetailResponse::setAssetVersion(const std::string& value)
{
    assetVersion_ = value;
    assetVersionIsSet_ = true;
}

bool ShowFtDetailResponse::assetVersionIsSet() const
{
    return assetVersionIsSet_;
}

void ShowFtDetailResponse::unsetassetVersion()
{
    assetVersionIsSet_ = false;
}

std::string ShowFtDetailResponse::getAssetType() const
{
    return assetType_;
}

void ShowFtDetailResponse::setAssetType(const std::string& value)
{
    assetType_ = value;
    assetTypeIsSet_ = true;
}

bool ShowFtDetailResponse::assetTypeIsSet() const
{
    return assetTypeIsSet_;
}

void ShowFtDetailResponse::unsetassetType()
{
    assetTypeIsSet_ = false;
}

std::string ShowFtDetailResponse::getAssetSource() const
{
    return assetSource_;
}

void ShowFtDetailResponse::setAssetSource(const std::string& value)
{
    assetSource_ = value;
    assetSourceIsSet_ = true;
}

bool ShowFtDetailResponse::assetSourceIsSet() const
{
    return assetSourceIsSet_;
}

void ShowFtDetailResponse::unsetassetSource()
{
    assetSourceIsSet_ = false;
}

std::string ShowFtDetailResponse::getAssetGroupId() const
{
    return assetGroupId_;
}

void ShowFtDetailResponse::setAssetGroupId(const std::string& value)
{
    assetGroupId_ = value;
    assetGroupIdIsSet_ = true;
}

bool ShowFtDetailResponse::assetGroupIdIsSet() const
{
    return assetGroupIdIsSet_;
}

void ShowFtDetailResponse::unsetassetGroupId()
{
    assetGroupIdIsSet_ = false;
}

std::string ShowFtDetailResponse::getSubAssetType() const
{
    return subAssetType_;
}

void ShowFtDetailResponse::setSubAssetType(const std::string& value)
{
    subAssetType_ = value;
    subAssetTypeIsSet_ = true;
}

bool ShowFtDetailResponse::subAssetTypeIsSet() const
{
    return subAssetTypeIsSet_;
}

void ShowFtDetailResponse::unsetsubAssetType()
{
    subAssetTypeIsSet_ = false;
}

std::string ShowFtDetailResponse::getCategory() const
{
    return category_;
}

void ShowFtDetailResponse::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ShowFtDetailResponse::categoryIsSet() const
{
    return categoryIsSet_;
}

void ShowFtDetailResponse::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ShowFtDetailResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowFtDetailResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowFtDetailResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowFtDetailResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ShowFtDetailResponse::getRootAssetId() const
{
    return rootAssetId_;
}

void ShowFtDetailResponse::setRootAssetId(const std::string& value)
{
    rootAssetId_ = value;
    rootAssetIdIsSet_ = true;
}

bool ShowFtDetailResponse::rootAssetIdIsSet() const
{
    return rootAssetIdIsSet_;
}

void ShowFtDetailResponse::unsetrootAssetId()
{
    rootAssetIdIsSet_ = false;
}

int64_t ShowFtDetailResponse::getTrainCostTime() const
{
    return trainCostTime_;
}

void ShowFtDetailResponse::setTrainCostTime(int64_t value)
{
    trainCostTime_ = value;
    trainCostTimeIsSet_ = true;
}

bool ShowFtDetailResponse::trainCostTimeIsSet() const
{
    return trainCostTimeIsSet_;
}

void ShowFtDetailResponse::unsettrainCostTime()
{
    trainCostTimeIsSet_ = false;
}

std::string ShowFtDetailResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowFtDetailResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowFtDetailResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowFtDetailResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ShowFtDetailResponse::getUserId() const
{
    return userId_;
}

void ShowFtDetailResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ShowFtDetailResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void ShowFtDetailResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ShowFtDetailResponse::getUserName() const
{
    return userName_;
}

void ShowFtDetailResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowFtDetailResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowFtDetailResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ShowFtDetailResponse::getPoolType() const
{
    return poolType_;
}

void ShowFtDetailResponse::setPoolType(const std::string& value)
{
    poolType_ = value;
    poolTypeIsSet_ = true;
}

bool ShowFtDetailResponse::poolTypeIsSet() const
{
    return poolTypeIsSet_;
}

void ShowFtDetailResponse::unsetpoolType()
{
    poolTypeIsSet_ = false;
}

std::string ShowFtDetailResponse::getPoolId() const
{
    return poolId_;
}

void ShowFtDetailResponse::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ShowFtDetailResponse::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ShowFtDetailResponse::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string ShowFtDetailResponse::getPoolNodeCount() const
{
    return poolNodeCount_;
}

void ShowFtDetailResponse::setPoolNodeCount(const std::string& value)
{
    poolNodeCount_ = value;
    poolNodeCountIsSet_ = true;
}

bool ShowFtDetailResponse::poolNodeCountIsSet() const
{
    return poolNodeCountIsSet_;
}

void ShowFtDetailResponse::unsetpoolNodeCount()
{
    poolNodeCountIsSet_ = false;
}

std::string ShowFtDetailResponse::getFlavorId() const
{
    return flavorId_;
}

void ShowFtDetailResponse::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool ShowFtDetailResponse::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void ShowFtDetailResponse::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

int32_t ShowFtDetailResponse::getPriority() const
{
    return priority_;
}

void ShowFtDetailResponse::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool ShowFtDetailResponse::priorityIsSet() const
{
    return priorityIsSet_;
}

void ShowFtDetailResponse::unsetpriority()
{
    priorityIsSet_ = false;
}

std::string ShowFtDetailResponse::getTrainingInfo() const
{
    return trainingInfo_;
}

void ShowFtDetailResponse::setTrainingInfo(const std::string& value)
{
    trainingInfo_ = value;
    trainingInfoIsSet_ = true;
}

bool ShowFtDetailResponse::trainingInfoIsSet() const
{
    return trainingInfoIsSet_;
}

void ShowFtDetailResponse::unsettrainingInfo()
{
    trainingInfoIsSet_ = false;
}

std::string ShowFtDetailResponse::getTrainOutputPath() const
{
    return trainOutputPath_;
}

void ShowFtDetailResponse::setTrainOutputPath(const std::string& value)
{
    trainOutputPath_ = value;
    trainOutputPathIsSet_ = true;
}

bool ShowFtDetailResponse::trainOutputPathIsSet() const
{
    return trainOutputPathIsSet_;
}

void ShowFtDetailResponse::unsettrainOutputPath()
{
    trainOutputPathIsSet_ = false;
}

std::vector<std::string>& ShowFtDetailResponse::getAssetCapabilities()
{
    return assetCapabilities_;
}

void ShowFtDetailResponse::setAssetCapabilities(const std::vector<std::string>& value)
{
    assetCapabilities_ = value;
    assetCapabilitiesIsSet_ = true;
}

bool ShowFtDetailResponse::assetCapabilitiesIsSet() const
{
    return assetCapabilitiesIsSet_;
}

void ShowFtDetailResponse::unsetassetCapabilities()
{
    assetCapabilitiesIsSet_ = false;
}

ContinueTask ShowFtDetailResponse::getContinueTask() const
{
    return continueTask_;
}

void ShowFtDetailResponse::setContinueTask(const ContinueTask& value)
{
    continueTask_ = value;
    continueTaskIsSet_ = true;
}

bool ShowFtDetailResponse::continueTaskIsSet() const
{
    return continueTaskIsSet_;
}

void ShowFtDetailResponse::unsetcontinueTask()
{
    continueTaskIsSet_ = false;
}

}
}
}
}
}


