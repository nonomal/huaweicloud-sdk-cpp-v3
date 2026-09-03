

#include "huaweicloud/cloudtest/v1/model/ExecuteStrategiesVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExecuteStrategiesVo::ExecuteStrategiesVo()
{
    advancedConfigIsSet_ = false;
    dailyReportEnable_ = "";
    dailyReportEnableIsSet_ = false;
    executeModel_ = "";
    executeModelIsSet_ = false;
    executePeriodBegin_ = "";
    executePeriodBeginIsSet_ = false;
    executePeriodEnd_ = "";
    executePeriodEndIsSet_ = false;
    executeStartTime_ = 0L;
    executeStartTimeIsSet_ = false;
    executionTimeIsSet_ = false;
    executorOptionIsSet_ = false;
    executorParametersIsSet_ = false;
    failedRetryTimes_ = 0;
    failedRetryTimesIsSet_ = false;
    intervalInSeconds_ = 0;
    intervalInSecondsIsSet_ = false;
    ipKey_ = "";
    ipKeyIsSet_ = false;
    locationIdsIsSet_ = false;
    operateNoticeIsSet_ = false;
    pbi_ = "";
    pbiIsSet_ = false;
    protocolTestIsSet_ = false;
    repeatTimes_ = 0;
    repeatTimesIsSet_ = false;
    serviceNameCBG_ = "";
    serviceNameCBGIsSet_ = false;
    serviceScopeCBG_ = "";
    serviceScopeCBGIsSet_ = false;
    serviceVersionCBG_ = "";
    serviceVersionCBGIsSet_ = false;
    testNodeServer_ = "";
    testNodeServerIsSet_ = false;
    timeoutMilSec_ = 0;
    timeoutMilSecIsSet_ = false;
    timerExpression_ = "";
    timerExpressionIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
}

ExecuteStrategiesVo::~ExecuteStrategiesVo() = default;

void ExecuteStrategiesVo::validate()
{
}

web::json::value ExecuteStrategiesVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(advancedConfigIsSet_) {
        val[utility::conversions::to_string_t("advancedConfig")] = ModelBase::toJson(advancedConfig_);
    }
    if(dailyReportEnableIsSet_) {
        val[utility::conversions::to_string_t("dailyReportEnable")] = ModelBase::toJson(dailyReportEnable_);
    }
    if(executeModelIsSet_) {
        val[utility::conversions::to_string_t("executeModel")] = ModelBase::toJson(executeModel_);
    }
    if(executePeriodBeginIsSet_) {
        val[utility::conversions::to_string_t("executePeriodBegin")] = ModelBase::toJson(executePeriodBegin_);
    }
    if(executePeriodEndIsSet_) {
        val[utility::conversions::to_string_t("executePeriodEnd")] = ModelBase::toJson(executePeriodEnd_);
    }
    if(executeStartTimeIsSet_) {
        val[utility::conversions::to_string_t("executeStartTime")] = ModelBase::toJson(executeStartTime_);
    }
    if(executionTimeIsSet_) {
        val[utility::conversions::to_string_t("executionTime")] = ModelBase::toJson(executionTime_);
    }
    if(executorOptionIsSet_) {
        val[utility::conversions::to_string_t("executorOption")] = ModelBase::toJson(executorOption_);
    }
    if(executorParametersIsSet_) {
        val[utility::conversions::to_string_t("executorParameters")] = ModelBase::toJson(executorParameters_);
    }
    if(failedRetryTimesIsSet_) {
        val[utility::conversions::to_string_t("failedRetryTimes")] = ModelBase::toJson(failedRetryTimes_);
    }
    if(intervalInSecondsIsSet_) {
        val[utility::conversions::to_string_t("intervalInSeconds")] = ModelBase::toJson(intervalInSeconds_);
    }
    if(ipKeyIsSet_) {
        val[utility::conversions::to_string_t("ipKey")] = ModelBase::toJson(ipKey_);
    }
    if(locationIdsIsSet_) {
        val[utility::conversions::to_string_t("location_ids")] = ModelBase::toJson(locationIds_);
    }
    if(operateNoticeIsSet_) {
        val[utility::conversions::to_string_t("operateNotice")] = ModelBase::toJson(operateNotice_);
    }
    if(pbiIsSet_) {
        val[utility::conversions::to_string_t("pbi")] = ModelBase::toJson(pbi_);
    }
    if(protocolTestIsSet_) {
        val[utility::conversions::to_string_t("protocol_test")] = ModelBase::toJson(protocolTest_);
    }
    if(repeatTimesIsSet_) {
        val[utility::conversions::to_string_t("repeatTimes")] = ModelBase::toJson(repeatTimes_);
    }
    if(serviceNameCBGIsSet_) {
        val[utility::conversions::to_string_t("serviceNameCBG")] = ModelBase::toJson(serviceNameCBG_);
    }
    if(serviceScopeCBGIsSet_) {
        val[utility::conversions::to_string_t("serviceScopeCBG")] = ModelBase::toJson(serviceScopeCBG_);
    }
    if(serviceVersionCBGIsSet_) {
        val[utility::conversions::to_string_t("serviceVersionCBG")] = ModelBase::toJson(serviceVersionCBG_);
    }
    if(testNodeServerIsSet_) {
        val[utility::conversions::to_string_t("testNodeServer")] = ModelBase::toJson(testNodeServer_);
    }
    if(timeoutMilSecIsSet_) {
        val[utility::conversions::to_string_t("timeoutMilSec")] = ModelBase::toJson(timeoutMilSec_);
    }
    if(timerExpressionIsSet_) {
        val[utility::conversions::to_string_t("timerExpression")] = ModelBase::toJson(timerExpression_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }

    return val;
}
bool ExecuteStrategiesVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("advancedConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advancedConfig"));
        if(!fieldValue.is_null())
        {
            AdvancedConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvancedConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dailyReportEnable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dailyReportEnable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDailyReportEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executeModel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executeModel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executePeriodBegin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executePeriodBegin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutePeriodBegin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executePeriodEnd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executePeriodEnd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutePeriodEnd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executeStartTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executeStartTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executionTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executionTime"));
        if(!fieldValue.is_null())
        {
            std::vector<ExecutionTime> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executorOption"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executorOption"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorOption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executorParameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executorParameters"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failedRetryTimes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failedRetryTimes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailedRetryTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("intervalInSeconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intervalInSeconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntervalInSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocationIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operateNotice"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operateNotice"));
        if(!fieldValue.is_null())
        {
            OperateNotice refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateNotice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pbi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pbi"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPbi(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol_test"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol_test"));
        if(!fieldValue.is_null())
        {
            ProtocolTestVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocolTest(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repeatTimes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repeatTimes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepeatTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serviceNameCBG"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serviceNameCBG"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceNameCBG(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serviceScopeCBG"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serviceScopeCBG"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceScopeCBG(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serviceVersionCBG"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serviceVersionCBG"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceVersionCBG(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testNodeServer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testNodeServer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestNodeServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeoutMilSec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeoutMilSec"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeoutMilSec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timerExpression"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timerExpression"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimerExpression(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    return ok;
}


AdvancedConfig ExecuteStrategiesVo::getAdvancedConfig() const
{
    return advancedConfig_;
}

void ExecuteStrategiesVo::setAdvancedConfig(const AdvancedConfig& value)
{
    advancedConfig_ = value;
    advancedConfigIsSet_ = true;
}

bool ExecuteStrategiesVo::advancedConfigIsSet() const
{
    return advancedConfigIsSet_;
}

void ExecuteStrategiesVo::unsetadvancedConfig()
{
    advancedConfigIsSet_ = false;
}

std::string ExecuteStrategiesVo::getDailyReportEnable() const
{
    return dailyReportEnable_;
}

void ExecuteStrategiesVo::setDailyReportEnable(const std::string& value)
{
    dailyReportEnable_ = value;
    dailyReportEnableIsSet_ = true;
}

bool ExecuteStrategiesVo::dailyReportEnableIsSet() const
{
    return dailyReportEnableIsSet_;
}

void ExecuteStrategiesVo::unsetdailyReportEnable()
{
    dailyReportEnableIsSet_ = false;
}

std::string ExecuteStrategiesVo::getExecuteModel() const
{
    return executeModel_;
}

void ExecuteStrategiesVo::setExecuteModel(const std::string& value)
{
    executeModel_ = value;
    executeModelIsSet_ = true;
}

bool ExecuteStrategiesVo::executeModelIsSet() const
{
    return executeModelIsSet_;
}

void ExecuteStrategiesVo::unsetexecuteModel()
{
    executeModelIsSet_ = false;
}

std::string ExecuteStrategiesVo::getExecutePeriodBegin() const
{
    return executePeriodBegin_;
}

void ExecuteStrategiesVo::setExecutePeriodBegin(const std::string& value)
{
    executePeriodBegin_ = value;
    executePeriodBeginIsSet_ = true;
}

bool ExecuteStrategiesVo::executePeriodBeginIsSet() const
{
    return executePeriodBeginIsSet_;
}

void ExecuteStrategiesVo::unsetexecutePeriodBegin()
{
    executePeriodBeginIsSet_ = false;
}

std::string ExecuteStrategiesVo::getExecutePeriodEnd() const
{
    return executePeriodEnd_;
}

void ExecuteStrategiesVo::setExecutePeriodEnd(const std::string& value)
{
    executePeriodEnd_ = value;
    executePeriodEndIsSet_ = true;
}

bool ExecuteStrategiesVo::executePeriodEndIsSet() const
{
    return executePeriodEndIsSet_;
}

void ExecuteStrategiesVo::unsetexecutePeriodEnd()
{
    executePeriodEndIsSet_ = false;
}

int64_t ExecuteStrategiesVo::getExecuteStartTime() const
{
    return executeStartTime_;
}

void ExecuteStrategiesVo::setExecuteStartTime(int64_t value)
{
    executeStartTime_ = value;
    executeStartTimeIsSet_ = true;
}

bool ExecuteStrategiesVo::executeStartTimeIsSet() const
{
    return executeStartTimeIsSet_;
}

void ExecuteStrategiesVo::unsetexecuteStartTime()
{
    executeStartTimeIsSet_ = false;
}

std::vector<ExecutionTime>& ExecuteStrategiesVo::getExecutionTime()
{
    return executionTime_;
}

void ExecuteStrategiesVo::setExecutionTime(const std::vector<ExecutionTime>& value)
{
    executionTime_ = value;
    executionTimeIsSet_ = true;
}

bool ExecuteStrategiesVo::executionTimeIsSet() const
{
    return executionTimeIsSet_;
}

void ExecuteStrategiesVo::unsetexecutionTime()
{
    executionTimeIsSet_ = false;
}

std::map<std::string, Object>& ExecuteStrategiesVo::getExecutorOption()
{
    return executorOption_;
}

void ExecuteStrategiesVo::setExecutorOption(const std::map<std::string, Object>& value)
{
    executorOption_ = value;
    executorOptionIsSet_ = true;
}

bool ExecuteStrategiesVo::executorOptionIsSet() const
{
    return executorOptionIsSet_;
}

void ExecuteStrategiesVo::unsetexecutorOption()
{
    executorOptionIsSet_ = false;
}

std::map<std::string, Object>& ExecuteStrategiesVo::getExecutorParameters()
{
    return executorParameters_;
}

void ExecuteStrategiesVo::setExecutorParameters(const std::map<std::string, Object>& value)
{
    executorParameters_ = value;
    executorParametersIsSet_ = true;
}

bool ExecuteStrategiesVo::executorParametersIsSet() const
{
    return executorParametersIsSet_;
}

void ExecuteStrategiesVo::unsetexecutorParameters()
{
    executorParametersIsSet_ = false;
}

int32_t ExecuteStrategiesVo::getFailedRetryTimes() const
{
    return failedRetryTimes_;
}

void ExecuteStrategiesVo::setFailedRetryTimes(int32_t value)
{
    failedRetryTimes_ = value;
    failedRetryTimesIsSet_ = true;
}

bool ExecuteStrategiesVo::failedRetryTimesIsSet() const
{
    return failedRetryTimesIsSet_;
}

void ExecuteStrategiesVo::unsetfailedRetryTimes()
{
    failedRetryTimesIsSet_ = false;
}

int32_t ExecuteStrategiesVo::getIntervalInSeconds() const
{
    return intervalInSeconds_;
}

void ExecuteStrategiesVo::setIntervalInSeconds(int32_t value)
{
    intervalInSeconds_ = value;
    intervalInSecondsIsSet_ = true;
}

bool ExecuteStrategiesVo::intervalInSecondsIsSet() const
{
    return intervalInSecondsIsSet_;
}

void ExecuteStrategiesVo::unsetintervalInSeconds()
{
    intervalInSecondsIsSet_ = false;
}

std::string ExecuteStrategiesVo::getIpKey() const
{
    return ipKey_;
}

void ExecuteStrategiesVo::setIpKey(const std::string& value)
{
    ipKey_ = value;
    ipKeyIsSet_ = true;
}

bool ExecuteStrategiesVo::ipKeyIsSet() const
{
    return ipKeyIsSet_;
}

void ExecuteStrategiesVo::unsetipKey()
{
    ipKeyIsSet_ = false;
}

std::vector<std::string>& ExecuteStrategiesVo::getLocationIds()
{
    return locationIds_;
}

void ExecuteStrategiesVo::setLocationIds(const std::vector<std::string>& value)
{
    locationIds_ = value;
    locationIdsIsSet_ = true;
}

bool ExecuteStrategiesVo::locationIdsIsSet() const
{
    return locationIdsIsSet_;
}

void ExecuteStrategiesVo::unsetlocationIds()
{
    locationIdsIsSet_ = false;
}

OperateNotice ExecuteStrategiesVo::getOperateNotice() const
{
    return operateNotice_;
}

void ExecuteStrategiesVo::setOperateNotice(const OperateNotice& value)
{
    operateNotice_ = value;
    operateNoticeIsSet_ = true;
}

bool ExecuteStrategiesVo::operateNoticeIsSet() const
{
    return operateNoticeIsSet_;
}

void ExecuteStrategiesVo::unsetoperateNotice()
{
    operateNoticeIsSet_ = false;
}

std::string ExecuteStrategiesVo::getPbi() const
{
    return pbi_;
}

void ExecuteStrategiesVo::setPbi(const std::string& value)
{
    pbi_ = value;
    pbiIsSet_ = true;
}

bool ExecuteStrategiesVo::pbiIsSet() const
{
    return pbiIsSet_;
}

void ExecuteStrategiesVo::unsetpbi()
{
    pbiIsSet_ = false;
}

ProtocolTestVo ExecuteStrategiesVo::getProtocolTest() const
{
    return protocolTest_;
}

void ExecuteStrategiesVo::setProtocolTest(const ProtocolTestVo& value)
{
    protocolTest_ = value;
    protocolTestIsSet_ = true;
}

bool ExecuteStrategiesVo::protocolTestIsSet() const
{
    return protocolTestIsSet_;
}

void ExecuteStrategiesVo::unsetprotocolTest()
{
    protocolTestIsSet_ = false;
}

int32_t ExecuteStrategiesVo::getRepeatTimes() const
{
    return repeatTimes_;
}

void ExecuteStrategiesVo::setRepeatTimes(int32_t value)
{
    repeatTimes_ = value;
    repeatTimesIsSet_ = true;
}

bool ExecuteStrategiesVo::repeatTimesIsSet() const
{
    return repeatTimesIsSet_;
}

void ExecuteStrategiesVo::unsetrepeatTimes()
{
    repeatTimesIsSet_ = false;
}

std::string ExecuteStrategiesVo::getServiceNameCBG() const
{
    return serviceNameCBG_;
}

void ExecuteStrategiesVo::setServiceNameCBG(const std::string& value)
{
    serviceNameCBG_ = value;
    serviceNameCBGIsSet_ = true;
}

bool ExecuteStrategiesVo::serviceNameCBGIsSet() const
{
    return serviceNameCBGIsSet_;
}

void ExecuteStrategiesVo::unsetserviceNameCBG()
{
    serviceNameCBGIsSet_ = false;
}

std::string ExecuteStrategiesVo::getServiceScopeCBG() const
{
    return serviceScopeCBG_;
}

void ExecuteStrategiesVo::setServiceScopeCBG(const std::string& value)
{
    serviceScopeCBG_ = value;
    serviceScopeCBGIsSet_ = true;
}

bool ExecuteStrategiesVo::serviceScopeCBGIsSet() const
{
    return serviceScopeCBGIsSet_;
}

void ExecuteStrategiesVo::unsetserviceScopeCBG()
{
    serviceScopeCBGIsSet_ = false;
}

std::string ExecuteStrategiesVo::getServiceVersionCBG() const
{
    return serviceVersionCBG_;
}

void ExecuteStrategiesVo::setServiceVersionCBG(const std::string& value)
{
    serviceVersionCBG_ = value;
    serviceVersionCBGIsSet_ = true;
}

bool ExecuteStrategiesVo::serviceVersionCBGIsSet() const
{
    return serviceVersionCBGIsSet_;
}

void ExecuteStrategiesVo::unsetserviceVersionCBG()
{
    serviceVersionCBGIsSet_ = false;
}

std::string ExecuteStrategiesVo::getTestNodeServer() const
{
    return testNodeServer_;
}

void ExecuteStrategiesVo::setTestNodeServer(const std::string& value)
{
    testNodeServer_ = value;
    testNodeServerIsSet_ = true;
}

bool ExecuteStrategiesVo::testNodeServerIsSet() const
{
    return testNodeServerIsSet_;
}

void ExecuteStrategiesVo::unsettestNodeServer()
{
    testNodeServerIsSet_ = false;
}

int32_t ExecuteStrategiesVo::getTimeoutMilSec() const
{
    return timeoutMilSec_;
}

void ExecuteStrategiesVo::setTimeoutMilSec(int32_t value)
{
    timeoutMilSec_ = value;
    timeoutMilSecIsSet_ = true;
}

bool ExecuteStrategiesVo::timeoutMilSecIsSet() const
{
    return timeoutMilSecIsSet_;
}

void ExecuteStrategiesVo::unsettimeoutMilSec()
{
    timeoutMilSecIsSet_ = false;
}

std::string ExecuteStrategiesVo::getTimerExpression() const
{
    return timerExpression_;
}

void ExecuteStrategiesVo::setTimerExpression(const std::string& value)
{
    timerExpression_ = value;
    timerExpressionIsSet_ = true;
}

bool ExecuteStrategiesVo::timerExpressionIsSet() const
{
    return timerExpressionIsSet_;
}

void ExecuteStrategiesVo::unsettimerExpression()
{
    timerExpressionIsSet_ = false;
}

std::string ExecuteStrategiesVo::getToken() const
{
    return token_;
}

void ExecuteStrategiesVo::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool ExecuteStrategiesVo::tokenIsSet() const
{
    return tokenIsSet_;
}

void ExecuteStrategiesVo::unsettoken()
{
    tokenIsSet_ = false;
}

}
}
}
}
}


