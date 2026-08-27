
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeConfigurationResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeConfigurationResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/GroupParameterDiffInfo.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpgradeConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    UpgradeConfigurationResponse();
    virtual ~UpgradeConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeConfigurationResponse members

    /// <summary>
    /// **参数解释**：  参数模板名称。  **取值范围**：  不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  差异参数列表。
    /// </summary>

    std::vector<GroupParameterDiffInfo>& getDiffParameters();
    bool diffParametersIsSet() const;
    void unsetdiffParameters();
    void setDiffParameters(const std::vector<GroupParameterDiffInfo>& value);

    /// <summary>
    /// **参数解释**：  执行更新操作被跳过的参数名称列表（原值与目标值相同）。
    /// </summary>

    std::vector<std::string>& getSkippedParameterNames();
    bool skippedParameterNamesIsSet() const;
    void unsetskippedParameterNames();
    void setSkippedParameterNames(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<GroupParameterDiffInfo> diffParameters_;
    bool diffParametersIsSet_;
    std::vector<std::string> skippedParameterNames_;
    bool skippedParameterNamesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeConfigurationResponse_H_
