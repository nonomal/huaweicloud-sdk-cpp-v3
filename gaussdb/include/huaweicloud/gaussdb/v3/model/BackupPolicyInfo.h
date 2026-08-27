
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupPolicyInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupPolicyInfo_H_


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
/// **参数解释**：  备份策略信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  BackupPolicyInfo
    : public ModelBase
{
public:
    BackupPolicyInfo();
    virtual ~BackupPolicyInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BackupPolicyInfo members

    /// <summary>
    /// **参数解释**：  指定已生成的备份文件可以保存的天数。  **取值范围**：  1-732。 您也可以联系客服申请开通最大保留天数为3660。
    /// </summary>

    int32_t getRetentionDays() const;
    bool retentionDaysIsSet() const;
    void unsetretentionDays();
    void setRetentionDays(int32_t value);

    /// <summary>
    /// **参数解释**：  备份周期配置。  **取值范围**：  格式必须为“日期 月份 星期”形式的Cron表达式，时区为UTC时区。 日期支持填写1~31、特殊字符*（表示任意值）、特殊字符L（表示最后一天）。填写1~31或L时支持填写多个，需以逗号隔开。 月份支持填写1~12、特殊字符*（表示任意值）。 星期支持填写1~7，需以逗号隔开。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// **参数解释**:  自动备份策略类型。  **取值范围**：   - base：表示基础策略。   - sparse：表示稀疏策略。
    /// </summary>

    std::string getPolicyType() const;
    bool policyTypeIsSet() const;
    void unsetpolicyType();
    void setPolicyType(const std::string& value);


protected:
    int32_t retentionDays_;
    bool retentionDaysIsSet_;
    std::string period_;
    bool periodIsSet_;
    std::string policyType_;
    bool policyTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_BackupPolicyInfo_H_
