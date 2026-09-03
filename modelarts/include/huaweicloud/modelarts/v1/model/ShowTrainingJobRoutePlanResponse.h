
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobRoutePlanResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobRoutePlanResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowTrainingJobRoutePlanResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTrainingJobRoutePlanResponse();
    virtual ~ShowTrainingJobRoutePlanResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTrainingJobRoutePlanResponse members

    /// <summary>
    /// **参数解释**：训练作业ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：路由规划状态。 **取值范围**： - success：路由规划成功 - failed：路由规划未执行或不满足条件，返回默认rank映射
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：rank映射结果，格式为\&quot;newRankId-workerId\&quot;，多个映射项之间以英文逗号分隔。 **约束限制**：当status为failed时，返回基于作业规格计算的默认顺序映射。 **取值范围**：不涉及。
    /// </summary>

    std::string getRankMapping() const;
    bool rankMappingIsSet() const;
    void unsetrankMapping();
    void setRankMapping(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string rankMapping_;
    bool rankMappingIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowTrainingJobRoutePlanResponse_H_
