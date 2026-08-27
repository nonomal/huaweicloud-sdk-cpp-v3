
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeConfigurationRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeConfigurationRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  更新自定义模板请求体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpgradeConfigurationRequestBody
    : public ModelBase
{
public:
    UpgradeConfigurationRequestBody();
    virtual ~UpgradeConfigurationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeConfigurationRequestBody members

    /// <summary>
    /// **参数解释**：  需要更新的差异参数名称列表。 - 若参数有值传入：将该参数更新为系统默认模板的值。 - 若参数传入空值或未传入：保留自定义模板中的原有值。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<std::string>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<std::string>& value);


protected:
    std::vector<std::string> parameters_;
    bool parametersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeConfigurationRequestBody_H_
