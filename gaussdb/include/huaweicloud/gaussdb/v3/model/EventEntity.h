
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EventEntity_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EventEntity_H_


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
/// **参数解释**：  事件对象信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  EventEntity
    : public ModelBase
{
public:
    EventEntity();
    virtual ~EventEntity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EventEntity members

    /// <summary>
    /// **参数解释**：  事件对象ID。  **取值范围**：  实例ID或者节点ID。只能由英文字母、数字组成，后缀为in07或no07，长度为36个字符。
    /// </summary>

    std::string getEventEntityId() const;
    bool eventEntityIdIsSet() const;
    void unseteventEntityId();
    void setEventEntityId(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件对象的执行状态。  **取值范围**：    - inquiring：待授权。   - scheduled：待执行。   - executing：执行中。   - completed：执行完成。   - canceled：事件关闭。   - failed：执行失败。
    /// </summary>

    std::string getEventEntityStatus() const;
    bool eventEntityStatusIsSet() const;
    void unseteventEntityStatus();
    void setEventEntityStatus(const std::string& value);


protected:
    std::string eventEntityId_;
    bool eventEntityIdIsSet_;
    std::string eventEntityStatus_;
    bool eventEntityStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EventEntity_H_
