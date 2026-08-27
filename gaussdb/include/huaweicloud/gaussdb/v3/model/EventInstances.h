
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EventInstances_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EventInstances_H_


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
/// **参数解释**：  事件信息。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  EventInstances
    : public ModelBase
{
public:
    EventInstances();
    virtual ~EventInstances();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EventInstances members

    /// <summary>
    /// **参数解释**：  事件ID。  获取方法请参见[获取事件列表](https://support.huaweicloud.com/api-taurusdb/ShowInstanceScheduleEvents.html)。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，前面为UUID，后缀为ev07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEventId() const;
    bool eventIdIsSet() const;
    void unseteventId();
    void setEventId(const std::string& value);


protected:
    std::string eventId_;
    bool eventIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_EventInstances_H_
