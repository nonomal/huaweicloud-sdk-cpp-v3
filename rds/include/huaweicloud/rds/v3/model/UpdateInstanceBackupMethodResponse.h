
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstanceBackupMethodResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstanceBackupMethodResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UpdateInstanceBackupMethodResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateInstanceBackupMethodResponse();
    virtual ~UpdateInstanceBackupMethodResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInstanceBackupMethodResponse members

    /// <summary>
    /// **参数解释**：  成功修改后的备份方式。  **约束限制**：  不涉及。
    /// </summary>

    std::string getBackupMethod() const;
    bool backupMethodIsSet() const;
    void unsetbackupMethod();
    void setBackupMethod(const std::string& value);


protected:
    std::string backupMethod_;
    bool backupMethodIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpdateInstanceBackupMethodResponse_H_
