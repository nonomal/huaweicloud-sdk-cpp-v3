
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryNewBackupEncryptionResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryNewBackupEncryptionResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  QueryNewBackupEncryptionResponse
    : public ModelBase, public HttpResponse
{
public:
    QueryNewBackupEncryptionResponse();
    virtual ~QueryNewBackupEncryptionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryNewBackupEncryptionResponse members

    /// <summary>
    /// **参数解释**：  备份加密开关状态。  **约束限制**：  不涉及。  **取值范围**：  - true：已开启备份加密 - false：未开启备份加密  **默认取值**：  不涉及。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    bool enabled_;
    bool enabledIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryNewBackupEncryptionResponse_H_
