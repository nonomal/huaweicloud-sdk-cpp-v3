
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteJobsReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteJobsReq_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/BatchDeleteJobItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量删除训练作业请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  BatchDeleteJobsReq
    : public ModelBase
{
public:
    BatchDeleteJobsReq();
    virtual ~BatchDeleteJobsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteJobsReq members

    /// <summary>
    /// **参数解释**：待删除的训练作业列表。 **约束限制**：列表元素数量不超过100，且所有作业必须属于同一工作空间。 **取值范围**：不涉及。
    /// </summary>

    std::vector<BatchDeleteJobItem>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<BatchDeleteJobItem>& value);


protected:
    std::vector<BatchDeleteJobItem> jobs_;
    bool jobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_BatchDeleteJobsReq_H_
