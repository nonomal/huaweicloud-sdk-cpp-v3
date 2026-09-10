
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryAutoSqlLimitingResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryAutoSqlLimitingResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  QueryAutoSqlLimitingResponse
    : public ModelBase, public HttpResponse
{
public:
    QueryAutoSqlLimitingResponse();
    virtual ~QueryAutoSqlLimitingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryAutoSqlLimitingResponse members

    /// <summary>
    /// 限流策略CPU利用率。
    /// </summary>

    int32_t getCpuUsage() const;
    bool cpuUsageIsSet() const;
    void unsetcpuUsage();
    void setCpuUsage(int32_t value);

    /// <summary>
    /// 限流策略活跃会话数。
    /// </summary>

    int32_t getActiveSessions() const;
    bool activeSessionsIsSet() const;
    void unsetactiveSessions();
    void setActiveSessions(int32_t value);

    /// <summary>
    /// 限流策略CPU利用率和活跃会话数的关联关系。取值范围：and、or。
    /// </summary>

    std::string getCondition() const;
    bool conditionIsSet() const;
    void unsetcondition();
    void setCondition(const std::string& value);

    /// <summary>
    /// 限流策略满足限流条件的事件持续时间（分钟）。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 自治限流规则每天生效开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 自治限流规则每天生效结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 允许的会话数。
    /// </summary>

    int32_t getSessionAllow() const;
    bool sessionAllowIsSet() const;
    void unsetsessionAllow();
    void setSessionAllow(int32_t value);

    /// <summary>
    /// 限流规则适用的用户列表。
    /// </summary>

    std::vector<std::string>& getUser();
    bool userIsSet() const;
    void unsetuser();
    void setUser(const std::vector<std::string>& value);

    /// <summary>
    /// 限流规则适用的数据库列表。
    /// </summary>

    std::vector<std::string>& getDb();
    bool dbIsSet() const;
    void unsetdb();
    void setDb(const std::vector<std::string>& value);

    /// <summary>
    /// 每次最大限流时长（分钟）。
    /// </summary>

    int32_t getClearTime() const;
    bool clearTimeIsSet() const;
    void unsetclearTime();
    void setClearTime(int32_t value);

    /// <summary>
    /// 是否启用自治限流规则。
    /// </summary>

    bool isEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(bool value);

    /// <summary>
    /// 是否为关键字限流。
    /// </summary>

    bool isIsKeyword() const;
    bool isKeywordIsSet() const;
    void unsetisKeyword();
    void setIsKeyword(bool value);

    /// <summary>
    /// 最大并发数。
    /// </summary>

    int32_t getMaxConcurrency() const;
    bool maxConcurrencyIsSet() const;
    void unsetmaxConcurrency();
    void setMaxConcurrency(int32_t value);

    /// <summary>
    /// 是否保留SQL限流规则。
    /// </summary>

    bool isRetainSqlRule() const;
    bool retainSqlRuleIsSet() const;
    void unsetretainSqlRule();
    void setRetainSqlRule(bool value);

    /// <summary>
    /// 是否开启kill会话开关。
    /// </summary>

    bool isKillSessionSwitch() const;
    bool killSessionSwitchIsSet() const;
    void unsetkillSessionSwitch();
    void setKillSessionSwitch(bool value);


protected:
    int32_t cpuUsage_;
    bool cpuUsageIsSet_;
    int32_t activeSessions_;
    bool activeSessionsIsSet_;
    std::string condition_;
    bool conditionIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int32_t sessionAllow_;
    bool sessionAllowIsSet_;
    std::vector<std::string> user_;
    bool userIsSet_;
    std::vector<std::string> db_;
    bool dbIsSet_;
    int32_t clearTime_;
    bool clearTimeIsSet_;
    bool enable_;
    bool enableIsSet_;
    bool isKeyword_;
    bool isKeywordIsSet_;
    int32_t maxConcurrency_;
    bool maxConcurrencyIsSet_;
    bool retainSqlRule_;
    bool retainSqlRuleIsSet_;
    bool killSessionSwitch_;
    bool killSessionSwitchIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryAutoSqlLimitingResponse_H_
