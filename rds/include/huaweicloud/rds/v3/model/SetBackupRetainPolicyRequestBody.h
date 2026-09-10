
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SetBackupRetainPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SetBackupRetainPolicyRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**  设置备份保留策略请求体  **约束限制**  不涉及  **取值范围**  不涉及  **默认取值**  不涉及
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SetBackupRetainPolicyRequestBody
    : public ModelBase
{
public:
    SetBackupRetainPolicyRequestBody();
    virtual ~SetBackupRetainPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetBackupRetainPolicyRequestBody members

    /// <summary>
    /// **参数解释**  自动备份保留策略。NONE不保留，LAST保留最后一个，ALL全部保留。  **约束限制**  不涉及  **取值范围**  NONE、LAST、ALL  **默认取值**  不涉及。
    /// </summary>

    std::string getAuto() const;
    bool autoIsSet() const;
    void unsetauto();
    void setAuto(const std::string& value);

    /// <summary>
    /// **参数解释**  手动备份保留策略。NONE不保留，LAST保留最后一个，ALL全部保留。  **约束限制**  不涉及  **取值范围**  NONE、LAST、ALL  **默认取值**  不涉及。
    /// </summary>

    std::string getManual() const;
    bool manualIsSet() const;
    void unsetmanual();
    void setManual(const std::string& value);

    /// <summary>
    /// **参数解释**  实例ID列表，实例ID是实例的唯一标识。  **约束限制**  不涉及。  **取值范围**  实例ID只能由英文字母、数字组成，长度为36个字符。  **默认取值**  不涉及。
    /// </summary>

    std::vector<std::string>& getInstanceids();
    bool instanceidsIsSet() const;
    void unsetinstanceids();
    void setInstanceids(const std::vector<std::string>& value);


protected:
    std::string auto_;
    bool autoIsSet_;
    std::string manual_;
    bool manualIsSet_;
    std::vector<std::string> instanceids_;
    bool instanceidsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SetBackupRetainPolicyRequestBody_H_
