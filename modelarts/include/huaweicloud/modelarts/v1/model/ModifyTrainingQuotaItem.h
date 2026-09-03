
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ModifyTrainingQuotaItem_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ModifyTrainingQuotaItem_H_


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
/// **参数解释**：训练作业配额项。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ModifyTrainingQuotaItem
    : public ModelBase
{
public:
    ModifyTrainingQuotaItem();
    virtual ~ModifyTrainingQuotaItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyTrainingQuotaItem members

    /// <summary>
    /// **参数解释**：配额的资源类型。 **约束限制**：不涉及。 **取值范围**：枚举值如下： - job-num: 作业个数配额 - visual-job-num: 可视化作业个数配额 - job-retention-enabled: 用户级作业自动老化开关 - job-num-quota-notify: 配额告警SMN通知配置 **默认取值**：不涉及。
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);

    /// <summary>
    /// **参数解释**：配额个数。 **约束限制**：取值约束因资源类型而异：job-retention-enabled取值0（关闭）或1（开启）；job-num-quota-notify固定为0，通知主题URN存于extra_info；其余资源类型要求不小于1。 **取值范围**：0 ~ 2147483647。 **默认取值**：不涉及。
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);

    /// <summary>
    /// **参数解释**：已使用的个数。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);

    /// <summary>
    /// **参数解释**：配额的额外信息。 **约束限制**：当resource为job-num-quota-notify时，该字段存储SMN通知主题URN。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getExtraInfo() const;
    bool extraInfoIsSet() const;
    void unsetextraInfo();
    void setExtraInfo(const std::string& value);


protected:
    std::string resource_;
    bool resourceIsSet_;
    int32_t quota_;
    bool quotaIsSet_;
    int32_t used_;
    bool usedIsSet_;
    std::string extraInfo_;
    bool extraInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ModifyTrainingQuotaItem_H_
