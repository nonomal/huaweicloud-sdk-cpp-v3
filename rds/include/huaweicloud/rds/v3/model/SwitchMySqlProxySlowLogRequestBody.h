
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchMySqlProxySlowLogRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchMySqlProxySlowLogRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更改数据库代理慢日志上报开关请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SwitchMySqlProxySlowLogRequestBody
    : public ModelBase
{
public:
    SwitchMySqlProxySlowLogRequestBody();
    virtual ~SwitchMySqlProxySlowLogRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchMySqlProxySlowLogRequestBody members

    /// <summary>
    /// **参数解释**：  慢日志上报开关。  **约束限制**：  不涉及。  **取值范围**：  - on：开启。 - off：关闭。  **默认取值**：  不涉及。
    /// </summary>

    std::string getLtsSlowLogEnabled() const;
    bool ltsSlowLogEnabledIsSet() const;
    void unsetltsSlowLogEnabled();
    void setLtsSlowLogEnabled(const std::string& value);


protected:
    std::string ltsSlowLogEnabled_;
    bool ltsSlowLogEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchMySqlProxySlowLogRequestBody_H_
