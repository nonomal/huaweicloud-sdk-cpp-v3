
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadStatisticsInfo_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadStatisticsInfo_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 工作负载统计
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  WorkloadStatisticsInfo
    : public ModelBase
{
public:
    WorkloadStatisticsInfo();
    virtual ~WorkloadStatisticsInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WorkloadStatisticsInfo members

    /// <summary>
    /// 旧版模型部署作业数量。
    /// </summary>

    int32_t getInfer() const;
    bool inferIsSet() const;
    void unsetinfer();
    void setInfer(int32_t value);

    /// <summary>
    /// 开发环境作业数量。
    /// </summary>

    int32_t getNotebook() const;
    bool notebookIsSet() const;
    void unsetnotebook();
    void setNotebook(int32_t value);

    /// <summary>
    /// 训练作业数量。
    /// </summary>

    int32_t getTrain() const;
    bool trainIsSet() const;
    void unsettrain();
    void setTrain(int32_t value);

    /// <summary>
    /// 权重预热作业数量。
    /// </summary>

    int32_t getWarmUpTask() const;
    bool warmUpTaskIsSet() const;
    void unsetwarmUpTask();
    void setWarmUpTask(int32_t value);

    /// <summary>
    /// 模型部署作业数量。
    /// </summary>

    int32_t getXInfer() const;
    bool xInferIsSet() const;
    void unsetxInfer();
    void setXInfer(int32_t value);

    /// <summary>
    /// 所有作业总和。
    /// </summary>

    int32_t getSum() const;
    bool sumIsSet() const;
    void unsetsum();
    void setSum(int32_t value);


protected:
    int32_t infer_;
    bool inferIsSet_;
    int32_t notebook_;
    bool notebookIsSet_;
    int32_t train_;
    bool trainIsSet_;
    int32_t warmUpTask_;
    bool warmUpTaskIsSet_;
    int32_t xInfer_;
    bool xInferIsSet_;
    int32_t sum_;
    bool sumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_WorkloadStatisticsInfo_H_
