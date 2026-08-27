
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlVolumeAutoExpandPolicy_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlVolumeAutoExpandPolicy_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlVolumeAutoExpandPolicy
    : public ModelBase
{
public:
    MysqlVolumeAutoExpandPolicy();
    virtual ~MysqlVolumeAutoExpandPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlVolumeAutoExpandPolicy members

    /// <summary>
    /// **参数解释**：  存储自动扩容上限，需要为10的倍数，单位GB。  **约束限制**：  不涉及。  **取值范围**：  10-128000。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getLimitSize() const;
    bool limitSizeIsSet() const;
    void unsetlimitSize();
    void setLimitSize(int32_t value);

    /// <summary>
    /// **参数解释**：  可用存储空间率。  **约束限制**：  不涉及。  **取值范围**：  - 1 - 5 - 10 - 15 - 20  **默认取值**：  不涉及。
    /// </summary>

    int32_t getTriggerAvailablePercent() const;
    bool triggerAvailablePercentIsSet() const;
    void unsettriggerAvailablePercent();
    void setTriggerAvailablePercent(int32_t value);

    /// <summary>
    /// **参数解释**：  扩容步长百分比。  **约束限制**：  不涉及。  **取值范围**：  5-50。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getStepPercent() const;
    bool stepPercentIsSet() const;
    void unsetstepPercent();
    void setStepPercent(int32_t value);


protected:
    int32_t limitSize_;
    bool limitSizeIsSet_;
    int32_t triggerAvailablePercent_;
    bool triggerAvailablePercentIsSet_;
    int32_t stepPercent_;
    bool stepPercentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlVolumeAutoExpandPolicy_H_
