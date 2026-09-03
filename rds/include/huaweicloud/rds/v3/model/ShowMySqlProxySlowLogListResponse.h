
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowMySqlProxySlowLogListResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowMySqlProxySlowLogListResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ProxySlowLogDetail.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowMySqlProxySlowLogListResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMySqlProxySlowLogListResponse();
    virtual ~ShowMySqlProxySlowLogListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMySqlProxySlowLogListResponse members

    /// <summary>
    /// **参数解释**：  数据库代理慢日志信息列表。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<ProxySlowLogDetail>& getSlowLogList();
    bool slowLogListIsSet() const;
    void unsetslowLogList();
    void setSlowLogList(const std::vector<ProxySlowLogDetail>& value);

    /// <summary>
    /// **参数解释**：  慢日志展示列表，该字段定义slow_log_list返回哪些字段信息，line_num字段一定返回。  **约束限制**：  不涉及。  **取值范围**：  - source_ip：客户端IP。 - desc_ip：后端数据库IP回。 - user：数据库用户。 - reaction_time：响应时长，单位ms。 - trace_id：SQL执行跟踪ID。 - sql：执行语句。 - start_time：SQL语句执行开始时间，毫秒级时间戳。 - end_time：SQL语句执行结束时间，毫秒级时间戳。 - database：数据库名称，默认不返回。 - log_time：日志上报时间，毫秒级时间戳，默认不返回。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<std::string>& getSlowLogColumn();
    bool slowLogColumnIsSet() const;
    void unsetslowLogColumn();
    void setSlowLogColumn(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：  慢日志阈值，单位ms。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSlowLogQueryTime() const;
    bool slowLogQueryTimeIsSet() const;
    void unsetslowLogQueryTime();
    void setSlowLogQueryTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  慢日志上报开关状态。  **约束限制**：  不涉及。  **取值范围**：  - on：开启。 - off：关闭。  **默认取值**：  不涉及。
    /// </summary>

    std::string getLtsSlowLogEnabled() const;
    bool ltsSlowLogEnabledIsSet() const;
    void unsetltsSlowLogEnabled();
    void setLtsSlowLogEnabled(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库代理版本是否支持慢日志上报。  **约束限制**：  不涉及。  **取值范围**：  - true：支持。 - false：不支持。  **默认取值**：  不涉及。
    /// </summary>

    bool isSupportSwitchLtsSlowLog() const;
    bool supportSwitchLtsSlowLogIsSet() const;
    void unsetsupportSwitchLtsSlowLog();
    void setSupportSwitchLtsSlowLog(bool value);

    /// <summary>
    /// **参数解释**：  每次查询到的慢日志数量。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(const std::string& value);


protected:
    std::vector<ProxySlowLogDetail> slowLogList_;
    bool slowLogListIsSet_;
    std::vector<std::string> slowLogColumn_;
    bool slowLogColumnIsSet_;
    std::string slowLogQueryTime_;
    bool slowLogQueryTimeIsSet_;
    std::string ltsSlowLogEnabled_;
    bool ltsSlowLogEnabledIsSet_;
    bool supportSwitchLtsSlowLog_;
    bool supportSwitchLtsSlowLogIsSet_;
    std::string totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowMySqlProxySlowLogListResponse_H_
