
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateTaurusDbAdvancedBackupPolicyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateTaurusDbAdvancedBackupPolicyResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateTaurusDbAdvancedBackupPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateTaurusDbAdvancedBackupPolicyResponse();
    virtual ~UpdateTaurusDbAdvancedBackupPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTaurusDbAdvancedBackupPolicyResponse members

    /// <summary>
    /// **参数解释**：  状态信息。  **取值范围**：  COMPLETED：设置备份策略成功。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例ID，严格匹配UUID规则。 **取值范围**： 与请求的实例ID相同。 
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例名称。 **取值范围**： 实例ID对应的实例名称。 
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateTaurusDbAdvancedBackupPolicyResponse_H_
