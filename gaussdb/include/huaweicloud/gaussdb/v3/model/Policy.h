
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_Policy_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_Policy_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  Policy
    : public ModelBase
{
public:
    Policy();
    virtual ~Policy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Policy members

    /// <summary>
    /// **参数解释**：  备份周期配置。  **约束限制**：  格式必须为“日期 月份 星期”形式的Cron表达式，时区为UTC时区。  **取值范围**：  日期支持填写1~31、特殊字符*（表示任意值）、特殊字符L（表示最后一天）。填写1~31或L时支持填写多个，需以逗号隔开。 月份支持填写1~12、特殊字符*（表示任意值）。 星期支持填写1~7（1表示星期一，2表示星期二，依次类推）、特殊字符*（表示任意值）。填写1~7数字时支持填写多个，需以逗号隔开。  取值示例： - \\* \\* 6 表示每周六执行任务，适用于周策略。 - \\* \\* 1,2,3 表示每周一、二、三执行任务，适用于周策略。 - 1,2 * * 表示每月1号、2号执行任务，适用于月策略。 - L * * 表示每月的最后一天执行任务，适用于月策略。 - 15 3 * 表示每年的3月15日执行任务，适用于年策略。  **默认取值**：  不涉及。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// **参数解释**：  备份文件的保留天数，单位为天。  **约束限制**：  不涉及。  **取值范围**：  1~732天。 您也可以联系客服申请开通最大保留天数为3660。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getRetentionDays() const;
    bool retentionDaysIsSet() const;
    void unsetretentionDays();
    void setRetentionDays(int32_t value);

    /// <summary>
    /// **参数解释**：  备份策略类型。  **约束限制**：  不涉及。  **取值范围**：    - base：表示基础策略。    - sparse：表示稀疏策略。  **默认取值**：  不涉及。
    /// </summary>

    std::string getPolicyType() const;
    bool policyTypeIsSet() const;
    void unsetpolicyType();
    void setPolicyType(const std::string& value);


protected:
    std::string period_;
    bool periodIsSet_;
    int32_t retentionDays_;
    bool retentionDaysIsSet_;
    std::string policyType_;
    bool policyTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_Policy_H_
