
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeDatabasePrecheckResult_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeDatabasePrecheckResult_H_


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
/// **参数解释**：  升级预检查结果。  **取值范围**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpgradeDatabasePrecheckResult
    : public ModelBase
{
public:
    UpgradeDatabasePrecheckResult();
    virtual ~UpgradeDatabasePrecheckResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeDatabasePrecheckResult members

    /// <summary>
    /// **参数解释**：  升级预检查项目。  **取值范围**：  - Upgrade permission check：升级权限检查。 - Instance version check：实例源版本检查。 - Resource check：资源检查。 - Upgrade feature compatibility check：升级特性兼容性检查。
    /// </summary>

    std::string getCheckItem() const;
    bool checkItemIsSet() const;
    void unsetcheckItem();
    void setCheckItem(const std::string& value);

    /// <summary>
    /// **参数解释**：  升级预检查项说明。  **取值范围**：  不涉及。
    /// </summary>

    std::string getCheckDescription() const;
    bool checkDescriptionIsSet() const;
    void unsetcheckDescription();
    void setCheckDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：  升级预检查对象。  **取值范围**：  不涉及。
    /// </summary>

    std::string getCheckObject() const;
    bool checkObjectIsSet() const;
    void unsetcheckObject();
    void setCheckObject(const std::string& value);

    /// <summary>
    /// **参数解释**：  升级预检查项的检查状态。  **取值范围**：  - passed：检查通过。 - failed：检查失败。
    /// </summary>

    std::string getCheckStatus() const;
    bool checkStatusIsSet() const;
    void unsetcheckStatus();
    void setCheckStatus(const std::string& value);


protected:
    std::string checkItem_;
    bool checkItemIsSet_;
    std::string checkDescription_;
    bool checkDescriptionIsSet_;
    std::string checkObject_;
    bool checkObjectIsSet_;
    std::string checkStatus_;
    bool checkStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeDatabasePrecheckResult_H_
