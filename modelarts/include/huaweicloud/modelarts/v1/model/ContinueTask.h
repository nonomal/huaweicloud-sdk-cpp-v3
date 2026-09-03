
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ContinueTask_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ContinueTask_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 续训任务信息
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ContinueTask
    : public ModelBase
{
public:
    ContinueTask();
    virtual ~ContinueTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ContinueTask members

    /// <summary>
    /// 断点ID
    /// </summary>

    std::string getCheckpointId() const;
    bool checkpointIdIsSet() const;
    void unsetcheckpointId();
    void setCheckpointId(const std::string& value);

    /// <summary>
    /// 续训任务模型ID
    /// </summary>

    std::string getSourceModelId() const;
    bool sourceModelIdIsSet() const;
    void unsetsourceModelId();
    void setSourceModelId(const std::string& value);

    /// <summary>
    /// 续训任务模型名称
    /// </summary>

    std::string getSourceModelName() const;
    bool sourceModelNameIsSet() const;
    void unsetsourceModelName();
    void setSourceModelName(const std::string& value);

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
    /// 是否最优
    /// </summary>

    bool isIsBest() const;
    bool isBestIsSet() const;
    void unsetisBest();
    void setIsBest(bool value);

    /// <summary>
    /// 跳过步数，0表示不跳过。
    /// </summary>

    int32_t getSkippedSteps() const;
    bool skippedStepsIsSet() const;
    void unsetskippedSteps();
    void setSkippedSteps(int32_t value);


protected:
    std::string checkpointId_;
    bool checkpointIdIsSet_;
    std::string sourceModelId_;
    bool sourceModelIdIsSet_;
    std::string sourceModelName_;
    bool sourceModelNameIsSet_;
    int32_t epoch_;
    bool epochIsSet_;
    int32_t steps_;
    bool stepsIsSet_;
    bool isBest_;
    bool isBestIsSet_;
    int32_t skippedSteps_;
    bool skippedStepsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ContinueTask_H_
