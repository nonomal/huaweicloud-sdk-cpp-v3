
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceScheduleEventsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceScheduleEventsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowInstanceScheduleEventsRequest
    : public ModelBase
{
public:
    ShowInstanceScheduleEventsRequest();
    virtual ~ShowInstanceScheduleEventsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInstanceScheduleEventsRequest members

    /// <summary>
    /// **参数解释**：              请求语言类型。  **约束限制**：  不涉及。  **取值范围**：  - en-us：英文。 - zh-cn：中文。  **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件ID。  您可以登录管理控制台，在事件管理列表中查看事件ID。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，前面为UUID，后缀为ev07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例ID，此参数是实例的唯一标识。  获取方法请参见[查询实例列表](https://support.huaweicloud.com/api-taurusdb/ListGaussMySqlInstancesUnifyStatus.html)。  **约束限制**：  不涉及。  **取值范围**：  只能由英文字母、数字组成，后缀为in07，长度为36个字符。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件状态。  **约束限制**：  不涉及。  **取值范围**：  - inquiring：待授权。 - scheduled：待执行。 - executing：执行中。 - completed：执行完成。 - canceled：事件关闭。 - failed：执行失败。  **默认取值**：  不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件类型。  **约束限制**：  不涉及。  **取值范围**：  - system.lifecycle.rebuild_node：备机重建事件。 - system.lifecycle.db_upgrade：数据库内核小版本升级事件。 - system.scheduled_event.high_cpu_memory：实例CPU或内存高负载事件，需要变更实例规格。  **默认取值**：  不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// **参数解释**：  事件级别。  **约束限制**：  不涉及。  **取值范围**：  - critical：紧急。 - major：重要。 - minor：一般。 - info：提示。  **默认取值**：  不涉及。
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// **参数解释**：  响应列表排序字段。  **约束限制**：  不涉及。  **取值范围**：  - created_time：创建时间。 - updated_time：更新时间。 - execution_time_window：执行时间窗。 - execute_time： 执行时间。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSortField() const;
    bool sortFieldIsSet() const;
    void unsetsortField();
    void setSortField(const std::string& value);

    /// <summary>
    /// **参数解释**：  响应列表根据sort_field字段的排序方式（升序/降序）。  **约束限制**：  sort_field不为空时生效。  **取值范围**：  - asc：升序排列。 - desc：降序排列。  **默认取值**：  不涉及。
    /// </summary>

    std::string getOrder() const;
    bool orderIsSet() const;
    void unsetorder();
    void setOrder(const std::string& value);

    /// <summary>
    /// **参数解释**：              查询记录数。  **约束限制**：  必须为整数，不能为负数。  **取值范围**：  1-100。  **默认取值**：  10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释**：              索引位置，偏移量。从第一条数据偏移offset条数据后开始查询。  **约束限制**：  必须为整数，不能为负数。  **取值范围**：  ≥0  **默认取值**：  0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string sortField_;
    bool sortFieldIsSet_;
    std::string order_;
    bool orderIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowInstanceScheduleEventsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowInstanceScheduleEventsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowInstanceScheduleEventsRequest_H_
