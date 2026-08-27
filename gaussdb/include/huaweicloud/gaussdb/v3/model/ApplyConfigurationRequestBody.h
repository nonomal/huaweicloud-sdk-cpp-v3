
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ApplyConfigurationRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ApplyConfigurationRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ApplyConfigurationRequestBody
    : public ModelBase
{
public:
    ApplyConfigurationRequestBody();
    virtual ~ApplyConfigurationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplyConfigurationRequestBody members

    /// <summary>
    /// 实例ID列表。列表长度限制在10以内。
    /// </summary>

    std::vector<std::string>& getInstanceIds();
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：  是否更新实例参数组版本，更新后实例规格变更时默认的规格参数值会以最新版本的为准。  **约束限制**：  不涉及。  **取值范围**：  - true：是。 - false：否。  **默认取值**：    false。
    /// </summary>

    bool isIsUpdateParamGroupVersion() const;
    bool isUpdateParamGroupVersionIsSet() const;
    void unsetisUpdateParamGroupVersion();
    void setIsUpdateParamGroupVersion(bool value);


protected:
    std::vector<std::string> instanceIds_;
    bool instanceIdsIsSet_;
    bool isUpdateParamGroupVersion_;
    bool isUpdateParamGroupVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ApplyConfigurationRequestBody_H_
