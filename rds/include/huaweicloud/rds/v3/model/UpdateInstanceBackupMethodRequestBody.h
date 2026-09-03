
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstanceBackupMethodRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstanceBackupMethodRequestBody_H_


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
/// 切换实例备份方式请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateInstanceBackupMethodRequestBody
    : public ModelBase
{
public:
    UpdateInstanceBackupMethodRequestBody();
    virtual ~UpdateInstanceBackupMethodRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInstanceBackupMethodRequestBody members

    /// <summary>
    /// **参数解释**：  修改的备份方式。Db为物理备份（OBS），EBackup为CBR快照备份。  **约束限制**：  不涉及。
    /// </summary>

    std::string getBackupMethod() const;
    bool backupMethodIsSet() const;
    void unsetbackupMethod();
    void setBackupMethod(const std::string& value);


protected:
    std::string backupMethod_;
    bool backupMethodIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstanceBackupMethodRequestBody_H_
