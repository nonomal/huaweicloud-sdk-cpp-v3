
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetInstanceScheduleEventsRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetInstanceScheduleEventsRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/EventScheduleWindow.h>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/EventInstances.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  设置事件执行策略参数体。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SetInstanceScheduleEventsRequestBody
    : public ModelBase
{
public:
    SetInstanceScheduleEventsRequestBody();
    virtual ~SetInstanceScheduleEventsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetInstanceScheduleEventsRequestBody members

    /// <summary>
    /// **参数解释**：  事件操作类型。  **约束限制**：  不涉及。  **取值范围**：  - execute：授权立即执行。 - cancel：授权取消执行。 - reservation：授权预约执行。  **默认取值**：  不涉及。
    /// </summary>

    std::string getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetoperationType();
    void setOperationType(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件信息。  **约束限制**：  批量事件个数不得超过20个。
    /// </summary>

    std::vector<EventInstances>& getEventInstances();
    bool eventInstancesIsSet() const;
    void unseteventInstances();
    void setEventInstances(const std::vector<EventInstances>& value);

    /// <summary>
    /// 
    /// </summary>

    EventScheduleWindow getEventScheduleWindow() const;
    bool eventScheduleWindowIsSet() const;
    void unseteventScheduleWindow();
    void setEventScheduleWindow(const EventScheduleWindow& value);


protected:
    std::string operationType_;
    bool operationTypeIsSet_;
    std::vector<EventInstances> eventInstances_;
    bool eventInstancesIsSet_;
    EventScheduleWindow eventScheduleWindow_;
    bool eventScheduleWindowIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetInstanceScheduleEventsRequestBody_H_
