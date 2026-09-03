
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListFtArtifactsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListFtArtifactsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListFtArtifactsRequest
    : public ModelBase
{
public:
    ListFtArtifactsRequest();
    virtual ~ListFtArtifactsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFtArtifactsRequest members

    /// <summary>
    /// 训练作业ID。获取方法请参见[查询训练作业列表](ListTrainingJobs.xml)。
    /// </summary>

    std::string getTrainingJobId() const;
    bool trainingJobIdIsSet() const;
    void unsettrainingJobId();
    void setTrainingJobId(const std::string& value);

    /// <summary>
    /// 步数。
    /// </summary>

    int32_t getSteps() const;
    bool stepsIsSet() const;
    void unsetsteps();
    void setSteps(int32_t value);

    /// <summary>
    /// 轮数。
    /// </summary>

    int32_t getEpoch() const;
    bool epochIsSet() const;
    void unsetepoch();
    void setEpoch(int32_t value);

    /// <summary>
    /// loss值。
    /// </summary>

    double getLoss() const;
    bool lossIsSet() const;
    void unsetloss();
    void setLoss(double value);

    /// <summary>
    /// 状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 是否按照创建时间排序。
    /// </summary>

    bool isOrderByCreateTimeAsc() const;
    bool orderByCreateTimeAscIsSet() const;
    void unsetorderByCreateTimeAsc();
    void setOrderByCreateTimeAsc(bool value);

    /// <summary>
    /// 返回的数据条目数。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 数据条目偏移量。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string trainingJobId_;
    bool trainingJobIdIsSet_;
    int32_t steps_;
    bool stepsIsSet_;
    int32_t epoch_;
    bool epochIsSet_;
    double loss_;
    bool lossIsSet_;
    std::string status_;
    bool statusIsSet_;
    bool orderByCreateTimeAsc_;
    bool orderByCreateTimeAscIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFtArtifactsRequest& dereference_from_shared_ptr(std::shared_ptr<ListFtArtifactsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListFtArtifactsRequest_H_
