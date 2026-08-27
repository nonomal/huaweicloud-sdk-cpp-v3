
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GroupParameterDiffInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GroupParameterDiffInfo_H_


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
/// **参数解释**：  参数差异信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  GroupParameterDiffInfo
    : public ModelBase
{
public:
    GroupParameterDiffInfo();
    virtual ~GroupParameterDiffInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GroupParameterDiffInfo members

    /// <summary>
    /// **参数解释**：  参数名称。  **取值范围**：  不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  源参数值（当前模板中的值）。  **取值范围**：  不涉及。
    /// </summary>

    std::string getSourceValue() const;
    bool sourceValueIsSet() const;
    void unsetsourceValue();
    void setSourceValue(const std::string& value);

    /// <summary>
    /// **参数解释**：  目标参数值（系统默认模板中的值）。  **取值范围**：  不涉及。
    /// </summary>

    std::string getTargetValue() const;
    bool targetValueIsSet() const;
    void unsettargetValue();
    void setTargetValue(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string sourceValue_;
    bool sourceValueIsSet_;
    std::string targetValue_;
    bool targetValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_GroupParameterDiffInfo_H_
