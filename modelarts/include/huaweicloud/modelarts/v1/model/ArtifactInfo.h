
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ArtifactInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ArtifactInfo_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ContinueTrainTask.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ArtifactInfo
    : public ModelBase
{
public:
    ArtifactInfo();
    virtual ~ArtifactInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ArtifactInfo members

    /// <summary>
    /// 产物类型，可选值：final(最终产物)、middle(中间产物)。
    /// </summary>

    std::string getArtifactType() const;
    bool artifactTypeIsSet() const;
    void unsetartifactType();
    void setArtifactType(const std::string& value);

    /// <summary>
    /// 是否最优。
    /// </summary>

    bool isIsBest() const;
    bool isBestIsSet() const;
    void unsetisBest();
    void setIsBest(bool value);

    /// <summary>
    /// 产物id。最终产物为模型ID，中间产物为断点ID。
    /// </summary>

    std::string getArtifactId() const;
    bool artifactIdIsSet() const;
    void unsetartifactId();
    void setArtifactId(const std::string& value);

    /// <summary>
    /// 续训任务数量。
    /// </summary>

    int32_t getContinueTrainNums() const;
    bool continueTrainNumsIsSet() const;
    void unsetcontinueTrainNums();
    void setContinueTrainNums(int32_t value);

    /// <summary>
    /// 产物发布成功后的资产id。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 产物发布成功后的资产名称。
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);

    /// <summary>
    /// 发布状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 轮数。
    /// </summary>

    int32_t getEpoch() const;
    bool epochIsSet() const;
    void unsetepoch();
    void setEpoch(int32_t value);

    /// <summary>
    /// 步数。
    /// </summary>

    int32_t getSteps() const;
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(int32_t value);

    /// <summary>
    /// loss值
    /// </summary>

    double getLoss() const;
    bool lossIsSet() const;
    void unsetloss();
    void setLoss(double value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 产物发布失败的错误信息。
    /// </summary>

    std::string getPublishErrorMsg() const;
    bool publishErrorMsgIsSet() const;
    void unsetpublishErrorMsg();
    void setPublishErrorMsg(const std::string& value);

    /// <summary>
    /// 相关任务信息
    /// </summary>

    std::vector<ContinueTrainTask>& getTaskInfos();
    bool taskInfosIsSet() const;
    void unsettaskInfos();
    void setTaskInfos(const std::vector<ContinueTrainTask>& value);


protected:
    std::string artifactType_;
    bool artifactTypeIsSet_;
    bool isBest_;
    bool isBestIsSet_;
    std::string artifactId_;
    bool artifactIdIsSet_;
    int32_t continueTrainNums_;
    bool continueTrainNumsIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string assetName_;
    bool assetNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t epoch_;
    bool epochIsSet_;
    int32_t steps_;
    bool stepsIsSet_;
    double loss_;
    bool lossIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string publishErrorMsg_;
    bool publishErrorMsgIsSet_;
    std::vector<ContinueTrainTask> taskInfos_;
    bool taskInfosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ArtifactInfo_H_
