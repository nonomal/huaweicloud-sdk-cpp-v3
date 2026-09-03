
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowFtDetailResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowFtDetailResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/DatasetConfig.h>
#include <huaweicloud/modelarts/v1/model/JobMetadataResponse.h>
#include <huaweicloud/modelarts/v1/model/SpecResponse.h>
#include <huaweicloud/modelarts/v1/model/Status.h>
#include <vector>
#include <huaweicloud/modelarts/v1/model/ContinueTask.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowFtDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFtDetailResponse();
    virtual ~ShowFtDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFtDetailResponse members

    /// <summary>
    /// 项目id。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 训练任务id。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 训练任务名称。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// 训练任务描述信息。
    /// </summary>

    std::string getTaskDesc() const;
    bool taskDescIsSet() const;
    void unsettaskDesc();
    void setTaskDesc(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    JobMetadataResponse getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const JobMetadataResponse& value);

    /// <summary>
    /// 
    /// </summary>

    SpecResponse getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const SpecResponse& value);

    /// <summary>
    /// 模型id。
    /// </summary>

    std::string getModelAssetId() const;
    bool modelAssetIdIsSet() const;
    void unsetmodelAssetId();
    void setModelAssetId(const std::string& value);

    /// <summary>
    /// **参数解释：** 模型类型，取值为TextGeneration|ImageUnderstanding，依次为：文本生成、图像理解。 **约束限制：** 不涉及 **取值范围：** TextGeneration|ImageUnderstanding **默认取值：** 不涉及
    /// </summary>

    std::string getModelType() const;
    bool modelTypeIsSet() const;
    void unsetmodelType();
    void setModelType(const std::string& value);

    /// <summary>
    /// 模型来源
    /// </summary>

    std::string getModelSource() const;
    bool modelSourceIsSet() const;
    void unsetmodelSource();
    void setModelSource(const std::string& value);

    /// <summary>
    /// **参数解释：** 训练类型，支持SFT（全量微调）、PRETRAIN（预训练）、LORA（lora微调）、DPO（dpo强化学习）、RFT（rft强化学习）。 **约束限制：** 不涉及 **取值范围：** SFT（全量微调）、PRETRAIN（预训练）、LORA（lora微调）、DPO（dpo强化学习）、RFT（rft强化学习） 默认取值： SFT
    /// </summary>

    std::string getTrainType() const;
    bool trainTypeIsSet() const;
    void unsettrainType();
    void setTrainType(const std::string& value);

    /// <summary>
    /// 断点续训相关配置。
    /// </summary>

    std::string getCheckpointConfig() const;
    bool checkpointConfigIsSet() const;
    void unsetcheckpointConfig();
    void setCheckpointConfig(const std::string& value);

    /// <summary>
    /// 训练任参数信息。
    /// </summary>

    std::string getTaskParameters() const;
    bool taskParametersIsSet() const;
    void unsettaskParameters();
    void setTaskParameters(const std::string& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 训练任务更新时间，当修改、或者训练任务状态发生变化时进行更新。
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 训练任务进度。
    /// </summary>

    double getTrainProcess() const;
    bool trainProcessIsSet() const;
    void unsettrainProcess();
    void setTrainProcess(double value);

    /// <summary>
    /// 该训练任务数据集相关的配置。
    /// </summary>

    std::vector<DatasetConfig>& getDatasetsConfig();
    bool datasetsConfigIsSet() const;
    void unsetdatasetsConfig();
    void setDatasetsConfig(const std::vector<DatasetConfig>& value);

    /// <summary>
    /// 
    /// </summary>

    Status getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const Status& value);

    /// <summary>
    /// 自动发布配置信息
    /// </summary>

    std::string getAutoPublishConfig() const;
    bool autoPublishConfigIsSet() const;
    void unsetautoPublishConfig();
    void setAutoPublishConfig(const std::string& value);

    /// <summary>
    /// 模型资产名
    /// </summary>

    std::string getAssetCode() const;
    bool assetCodeIsSet() const;
    void unsetassetCode();
    void setAssetCode(const std::string& value);

    /// <summary>
    /// 资产名称
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);

    /// <summary>
    /// 模型资产描述信息
    /// </summary>

    std::string getAssetDesc() const;
    bool assetDescIsSet() const;
    void unsetassetDesc();
    void setAssetDesc(const std::string& value);

    /// <summary>
    /// 模型系列
    /// </summary>

    std::string getAssetSeries() const;
    bool assetSeriesIsSet() const;
    void unsetassetSeries();
    void setAssetSeries(const std::string& value);

    /// <summary>
    /// 资产版本
    /// </summary>

    std::string getAssetVersion() const;
    bool assetVersionIsSet() const;
    void unsetassetVersion();
    void setAssetVersion(const std::string& value);

    /// <summary>
    /// 资产类型
    /// </summary>

    std::string getAssetType() const;
    bool assetTypeIsSet() const;
    void unsetassetType();
    void setAssetType(const std::string& value);

    /// <summary>
    /// 资产来源
    /// </summary>

    std::string getAssetSource() const;
    bool assetSourceIsSet() const;
    void unsetassetSource();
    void setAssetSource(const std::string& value);

    /// <summary>
    /// 资产组id
    /// </summary>

    std::string getAssetGroupId() const;
    bool assetGroupIdIsSet() const;
    void unsetassetGroupId();
    void setAssetGroupId(const std::string& value);

    /// <summary>
    /// 资产子类型
    /// </summary>

    std::string getSubAssetType() const;
    bool subAssetTypeIsSet() const;
    void unsetsubAssetType();
    void setSubAssetType(const std::string& value);

    /// <summary>
    /// 资产类别
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 资产API版本
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 根资产ID
    /// </summary>

    std::string getRootAssetId() const;
    bool rootAssetIdIsSet() const;
    void unsetrootAssetId();
    void setRootAssetId(const std::string& value);

    /// <summary>
    /// 训练任务耗时
    /// </summary>

    int64_t getTrainCostTime() const;
    bool trainCostTimeIsSet() const;
    void unsettrainCostTime();
    void setTrainCostTime(int64_t value);

    /// <summary>
    /// 任务所属工作空间名称
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// 用户id
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 用户名称
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 资源池类型
    /// </summary>

    std::string getPoolType() const;
    bool poolTypeIsSet() const;
    void unsetpoolType();
    void setPoolType(const std::string& value);

    /// <summary>
    /// 资源池ID
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// 使用的资源池实例数
    /// </summary>

    std::string getPoolNodeCount() const;
    bool poolNodeCountIsSet() const;
    void unsetpoolNodeCount();
    void setPoolNodeCount(const std::string& value);

    /// <summary>
    /// 使用的资源池卡数
    /// </summary>

    std::string getFlavorId() const;
    bool flavorIdIsSet() const;
    void unsetflavorId();
    void setFlavorId(const std::string& value);

    /// <summary>
    /// 优先级
    /// </summary>

    int32_t getPriority() const;
    bool priorityIsSet() const;
    void unsetpriority();
    void setPriority(int32_t value);

    /// <summary>
    /// 训练预估时长
    /// </summary>

    std::string getTrainingInfo() const;
    bool trainingInfoIsSet() const;
    void unsettrainingInfo();
    void setTrainingInfo(const std::string& value);

    /// <summary>
    /// **参数解释**：训练产物输出路径，如\&quot;obs://yyy/test/\&quot;。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getTrainOutputPath() const;
    bool trainOutputPathIsSet() const;
    void unsettrainOutputPath();
    void setTrainOutputPath(const std::string& value);

    /// <summary>
    /// 训练模型类型
    /// </summary>

    std::vector<std::string>& getAssetCapabilities();
    bool assetCapabilitiesIsSet() const;
    void unsetassetCapabilities();
    void setAssetCapabilities(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    ContinueTask getContinueTask() const;
    bool continueTaskIsSet() const;
    void unsetcontinueTask();
    void setContinueTask(const ContinueTask& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string taskDesc_;
    bool taskDescIsSet_;
    JobMetadataResponse metadata_;
    bool metadataIsSet_;
    SpecResponse spec_;
    bool specIsSet_;
    std::string modelAssetId_;
    bool modelAssetIdIsSet_;
    std::string modelType_;
    bool modelTypeIsSet_;
    std::string modelSource_;
    bool modelSourceIsSet_;
    std::string trainType_;
    bool trainTypeIsSet_;
    std::string checkpointConfig_;
    bool checkpointConfigIsSet_;
    std::string taskParameters_;
    bool taskParametersIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    double trainProcess_;
    bool trainProcessIsSet_;
    std::vector<DatasetConfig> datasetsConfig_;
    bool datasetsConfigIsSet_;
    Status status_;
    bool statusIsSet_;
    std::string autoPublishConfig_;
    bool autoPublishConfigIsSet_;
    std::string assetCode_;
    bool assetCodeIsSet_;
    std::string assetName_;
    bool assetNameIsSet_;
    std::string assetDesc_;
    bool assetDescIsSet_;
    std::string assetSeries_;
    bool assetSeriesIsSet_;
    std::string assetVersion_;
    bool assetVersionIsSet_;
    std::string assetType_;
    bool assetTypeIsSet_;
    std::string assetSource_;
    bool assetSourceIsSet_;
    std::string assetGroupId_;
    bool assetGroupIdIsSet_;
    std::string subAssetType_;
    bool subAssetTypeIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::string rootAssetId_;
    bool rootAssetIdIsSet_;
    int64_t trainCostTime_;
    bool trainCostTimeIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string poolType_;
    bool poolTypeIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    std::string poolNodeCount_;
    bool poolNodeCountIsSet_;
    std::string flavorId_;
    bool flavorIdIsSet_;
    int32_t priority_;
    bool priorityIsSet_;
    std::string trainingInfo_;
    bool trainingInfoIsSet_;
    std::string trainOutputPath_;
    bool trainOutputPathIsSet_;
    std::vector<std::string> assetCapabilities_;
    bool assetCapabilitiesIsSet_;
    ContinueTask continueTask_;
    bool continueTaskIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowFtDetailResponse_H_
