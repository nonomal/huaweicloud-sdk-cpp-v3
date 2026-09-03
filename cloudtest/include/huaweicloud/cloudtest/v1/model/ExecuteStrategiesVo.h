
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExecuteStrategiesVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExecuteStrategiesVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/cloudtest/v1/model/ExecutionTime.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/OperateNotice.h>
#include <huaweicloud/cloudtest/v1/model/ProtocolTestVo.h>
#include <huaweicloud/cloudtest/v1/model/AdvancedConfig.h>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ExecuteStrategiesVo
    : public ModelBase
{
public:
    ExecuteStrategiesVo();
    virtual ~ExecuteStrategiesVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExecuteStrategiesVo members

    /// <summary>
    /// 
    /// </summary>

    AdvancedConfig getAdvancedConfig() const;
    bool advancedConfigIsSet() const;
    void unsetadvancedConfig();
    void setAdvancedConfig(const AdvancedConfig& value);

    /// <summary>
    /// 日报 0 关闭 1开启
    /// </summary>

    std::string getDailyReportEnable() const;
    bool dailyReportEnableIsSet() const;
    void unsetdailyReportEnable();
    void setDailyReportEnable(const std::string& value);

    /// <summary>
    /// 执行顺序 串行 1 并行 2 
    /// </summary>

    std::string getExecuteModel() const;
    bool executeModelIsSet() const;
    void unsetexecuteModel();
    void setExecuteModel(const std::string& value);

    /// <summary>
    /// 执行区间，开始时间
    /// </summary>

    std::string getExecutePeriodBegin() const;
    bool executePeriodBeginIsSet() const;
    void unsetexecutePeriodBegin();
    void setExecutePeriodBegin(const std::string& value);

    /// <summary>
    /// 执行区间，开始时间
    /// </summary>

    std::string getExecutePeriodEnd() const;
    bool executePeriodEndIsSet() const;
    void unsetexecutePeriodEnd();
    void setExecutePeriodEnd(const std::string& value);

    /// <summary>
    /// 执行模式 立即执行 0，延后执行: 延后执行时间
    /// </summary>

    int64_t getExecuteStartTime() const;
    bool executeStartTimeIsSet() const;
    void unsetexecuteStartTime();
    void setExecuteStartTime(int64_t value);

    /// <summary>
    /// 任务执行时间段 -- 重新启用，任务采用多段时间区间执行，quartz需要用这个参数
    /// </summary>

    std::vector<ExecutionTime>& getExecutionTime();
    bool executionTimeIsSet() const;
    void unsetexecutionTime();
    void setExecutionTime(const std::vector<ExecutionTime>& value);

    /// <summary>
    /// 目前无用字段
    /// </summary>

    std::map<std::string, Object>& getExecutorOption();
    bool executorOptionIsSet() const;
    void unsetexecutorOption();
    void setExecutorOption(const std::map<std::string, Object>& value);

    /// <summary>
    /// deployTest修改properties使用，字段不固定。小网拨测使用该字段修改properties中的ip
    /// </summary>

    std::map<std::string, Object>& getExecutorParameters();
    bool executorParametersIsSet() const;
    void unsetexecutorParameters();
    void setExecutorParameters(const std::map<std::string, Object>& value);

    /// <summary>
    /// 失败重试次数
    /// </summary>

    int32_t getFailedRetryTimes() const;
    bool failedRetryTimesIsSet() const;
    void unsetfailedRetryTimes();
    void setFailedRetryTimes(int32_t value);

    /// <summary>
    /// 执行间隔
    /// </summary>

    int32_t getIntervalInSeconds() const;
    bool intervalInSecondsIsSet() const;
    void unsetintervalInSeconds();
    void setIntervalInSeconds(int32_t value);

    /// <summary>
    /// deployTest使用
    /// </summary>

    std::string getIpKey() const;
    bool ipKeyIsSet() const;
    void unsetipKey();
    void setIpKey(const std::string& value);

    /// <summary>
    /// 执行区域
    /// </summary>

    std::vector<std::string>& getLocationIds();
    bool locationIdsIsSet() const;
    void unsetlocationIds();
    void setLocationIds(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    OperateNotice getOperateNotice() const;
    bool operateNoticeIsSet() const;
    void unsetoperateNotice();
    void setOperateNotice(const OperateNotice& value);

    /// <summary>
    /// deployTest使用
    /// </summary>

    std::string getPbi() const;
    bool pbiIsSet() const;
    void unsetpbi();
    void setPbi(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ProtocolTestVo getProtocolTest() const;
    bool protocolTestIsSet() const;
    void unsetprotocolTest();
    void setProtocolTest(const ProtocolTestVo& value);

    /// <summary>
    /// 重试次数，冒烟测试使用
    /// </summary>

    int32_t getRepeatTimes() const;
    bool repeatTimesIsSet() const;
    void unsetrepeatTimes();
    void setRepeatTimes(int32_t value);

    /// <summary>
    /// deployTest使用
    /// </summary>

    std::string getServiceNameCBG() const;
    bool serviceNameCBGIsSet() const;
    void unsetserviceNameCBG();
    void setServiceNameCBG(const std::string& value);

    /// <summary>
    /// deployTest使用
    /// </summary>

    std::string getServiceScopeCBG() const;
    bool serviceScopeCBGIsSet() const;
    void unsetserviceScopeCBG();
    void setServiceScopeCBG(const std::string& value);

    /// <summary>
    /// deployTest使用
    /// </summary>

    std::string getServiceVersionCBG() const;
    bool serviceVersionCBGIsSet() const;
    void unsetserviceVersionCBG();
    void setServiceVersionCBG(const std::string& value);

    /// <summary>
    /// 不再使用
    /// </summary>

    std::string getTestNodeServer() const;
    bool testNodeServerIsSet() const;
    void unsettestNodeServer();
    void setTestNodeServer(const std::string& value);

    /// <summary>
    /// 超时时间
    /// </summary>

    int32_t getTimeoutMilSec() const;
    bool timeoutMilSecIsSet() const;
    void unsettimeoutMilSec();
    void setTimeoutMilSec(int32_t value);

    /// <summary>
    /// 执行时间表达式
    /// </summary>

    std::string getTimerExpression() const;
    bool timerExpressionIsSet() const;
    void unsettimerExpression();
    void setTimerExpression(const std::string& value);

    /// <summary>
    /// deployTest使用
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);


protected:
    AdvancedConfig advancedConfig_;
    bool advancedConfigIsSet_;
    std::string dailyReportEnable_;
    bool dailyReportEnableIsSet_;
    std::string executeModel_;
    bool executeModelIsSet_;
    std::string executePeriodBegin_;
    bool executePeriodBeginIsSet_;
    std::string executePeriodEnd_;
    bool executePeriodEndIsSet_;
    int64_t executeStartTime_;
    bool executeStartTimeIsSet_;
    std::vector<ExecutionTime> executionTime_;
    bool executionTimeIsSet_;
    std::map<std::string, Object> executorOption_;
    bool executorOptionIsSet_;
    std::map<std::string, Object> executorParameters_;
    bool executorParametersIsSet_;
    int32_t failedRetryTimes_;
    bool failedRetryTimesIsSet_;
    int32_t intervalInSeconds_;
    bool intervalInSecondsIsSet_;
    std::string ipKey_;
    bool ipKeyIsSet_;
    std::vector<std::string> locationIds_;
    bool locationIdsIsSet_;
    OperateNotice operateNotice_;
    bool operateNoticeIsSet_;
    std::string pbi_;
    bool pbiIsSet_;
    ProtocolTestVo protocolTest_;
    bool protocolTestIsSet_;
    int32_t repeatTimes_;
    bool repeatTimesIsSet_;
    std::string serviceNameCBG_;
    bool serviceNameCBGIsSet_;
    std::string serviceScopeCBG_;
    bool serviceScopeCBGIsSet_;
    std::string serviceVersionCBG_;
    bool serviceVersionCBGIsSet_;
    std::string testNodeServer_;
    bool testNodeServerIsSet_;
    int32_t timeoutMilSec_;
    bool timeoutMilSecIsSet_;
    std::string timerExpression_;
    bool timerExpressionIsSet_;
    std::string token_;
    bool tokenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ExecuteStrategiesVo_H_
