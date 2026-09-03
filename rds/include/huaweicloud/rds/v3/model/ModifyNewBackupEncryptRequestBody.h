
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyNewBackupEncryptRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyNewBackupEncryptRequestBody_H_


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
/// 设置备份加密开关请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifyNewBackupEncryptRequestBody
    : public ModelBase
{
public:
    ModifyNewBackupEncryptRequestBody();
    virtual ~ModifyNewBackupEncryptRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyNewBackupEncryptRequestBody members

    /// <summary>
    /// **参数解释**：  KMS密钥ID，用于备份加密。  **约束限制**：  当enabled为true时必填，当enabled为false时不需填写。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getKmsKey() const;
    bool kmsKeyIsSet() const;
    void unsetkmsKey();
    void setKmsKey(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否开启备份加密。  **约束限制**：  不涉及。  **取值范围**：  - true：开启备份加密 - false：关闭备份加密  **默认取值**：  不涉及。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    std::string kmsKey_;
    bool kmsKeyIsSet_;
    bool enabled_;
    bool enabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyNewBackupEncryptRequestBody_H_
