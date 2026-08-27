
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetInstanceReadonlyRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetInstanceReadonlyRequestBody_H_


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
/// 设置/解除只读。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SetInstanceReadonlyRequestBody
    : public ModelBase
{
public:
    SetInstanceReadonlyRequestBody();
    virtual ~SetInstanceReadonlyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetInstanceReadonlyRequestBody members

    /// <summary>
    /// **参数解释**：  设置或者解除实例只读。  **约束限制**：  不涉及。  **取值范围**：  - true: 设置只读。 - false: 解除只读。 **默认取值**：  不涉及。
    /// </summary>

    bool isReadonly() const;
    bool readonlyIsSet() const;
    void unsetreadonly();
    void setReadonly(bool value);


protected:
    bool readonly_;
    bool readonlyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetInstanceReadonlyRequestBody_H_
