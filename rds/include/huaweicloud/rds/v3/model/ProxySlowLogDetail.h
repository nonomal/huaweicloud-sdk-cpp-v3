
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxySlowLogDetail_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxySlowLogDetail_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库代理慢日志详情
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ProxySlowLogDetail
    : public ModelBase
{
public:
    ProxySlowLogDetail();
    virtual ~ProxySlowLogDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxySlowLogDetail members

    /// <summary>
    /// **参数解释**：  客户端IP。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSourceIp() const;
    bool sourceIpIsSet() const;
    void unsetsourceIp();
    void setSourceIp(const std::string& value);

    /// <summary>
    /// **参数解释**：  后端数据库IP。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getDescIp() const;
    bool descIpIsSet() const;
    void unsetdescIp();
    void setDescIp(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库用户。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::string& value);

    /// <summary>
    /// **参数解释**：  响应时长，单位ms。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getReactionTime() const;
    bool reactionTimeIsSet() const;
    void unsetreactionTime();
    void setReactionTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  SQL执行跟踪ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  执行语句。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getSql() const;
    bool sqlIsSet() const;
    void unsetsql();
    void setSql(const std::string& value);

    /// <summary>
    /// **参数解释**：  SQL语句执行开始时间，毫秒级时间戳。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  SQL语句执行结束时间，毫秒级时间戳。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**：  每次查询起始记录ID，用于获取后续数据时在请求中传入。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getLineNum() const;
    bool lineNumIsSet() const;
    void unsetlineNum();
    void setLineNum(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库名称。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getDatabase() const;
    bool databaseIsSet() const;
    void unsetdatabase();
    void setDatabase(const std::string& value);

    /// <summary>
    /// **参数解释**：  日志上报时间，毫秒级时间戳。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getLogTime() const;
    bool logTimeIsSet() const;
    void unsetlogTime();
    void setLogTime(const std::string& value);


protected:
    std::string sourceIp_;
    bool sourceIpIsSet_;
    std::string descIp_;
    bool descIpIsSet_;
    std::string user_;
    bool userIsSet_;
    std::string reactionTime_;
    bool reactionTimeIsSet_;
    std::string traceId_;
    bool traceIdIsSet_;
    std::string sql_;
    bool sqlIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string lineNum_;
    bool lineNumIsSet_;
    std::string database_;
    bool databaseIsSet_;
    std::string logTime_;
    bool logTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ProxySlowLogDetail_H_
