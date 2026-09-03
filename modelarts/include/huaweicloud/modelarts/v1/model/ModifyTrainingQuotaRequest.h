
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ModifyTrainingQuotaRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ModifyTrainingQuotaRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ModifyTrainingQuotaItem.h>
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
/// **参数解释**：修改训练配额的请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ModifyTrainingQuotaRequest
    : public ModelBase
{
public:
    ModifyTrainingQuotaRequest();
    virtual ~ModifyTrainingQuotaRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyTrainingQuotaRequest members

    /// <summary>
    /// **参数解释**：用户ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业配额组。
    /// </summary>

    std::vector<ModifyTrainingQuotaItem>& getQuotas();
    bool quotasIsSet() const;
    void unsetquotas();
    void setQuotas(const std::vector<ModifyTrainingQuotaItem>& value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    std::vector<ModifyTrainingQuotaItem> quotas_;
    bool quotasIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ModifyTrainingQuotaRequest_H_
