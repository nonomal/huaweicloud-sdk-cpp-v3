
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowFtMetricsResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowFtMetricsResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/FtMetricData.h>
#include <huaweicloud/core/utils/Object.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowFtMetricsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowFtMetricsResponse();
    virtual ~ShowFtMetricsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowFtMetricsResponse members

    /// <summary>
    /// 训练loss信息
    /// </summary>

    Object getLoss() const;
    bool lossIsSet() const;
    void unsetloss();
    void setLoss(const Object& value);

    /// <summary>
    /// 评测loss信息
    /// </summary>

    Object getEvalLoss() const;
    bool evalLossIsSet() const;
    void unsetevalLoss();
    void setEvalLoss(const Object& value);

    /// <summary>
    /// 训练预估时长信息
    /// </summary>

    Object getTrainingInfo() const;
    bool trainingInfoIsSet() const;
    void unsettrainingInfo();
    void setTrainingInfo(const Object& value);

    /// <summary>
    /// 训练进度信息
    /// </summary>

    double getTrainProcess() const;
    bool trainProcessIsSet() const;
    void unsettrainProcess();
    void setTrainProcess(double value);

    /// <summary>
    /// 
    /// </summary>

    FtMetricData getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const FtMetricData& value);


protected:
    Object loss_;
    bool lossIsSet_;
    Object evalLoss_;
    bool evalLossIsSet_;
    Object trainingInfo_;
    bool trainingInfoIsSet_;
    double trainProcess_;
    bool trainProcessIsSet_;
    FtMetricData data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowFtMetricsResponse_H_
