
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TimeoutAlert_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TimeoutAlert_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/AlertTemplate.h>
#include <huaweicloud/cloudtest/v1/model/TaskTimeoutPolicy.h>
#include <huaweicloud/cloudtest/v1/model/TestCaseTimeoutPolicy.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TimeoutAlert
    : public ModelBase
{
public:
    TimeoutAlert();
    virtual ~TimeoutAlert();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TimeoutAlert members

    /// <summary>
    /// 
    /// </summary>

    AlertTemplate getAlertTemplate() const;
    bool alertTemplateIsSet() const;
    void unsetalertTemplate();
    void setAlertTemplate(const AlertTemplate& value);

    /// <summary>
    /// 超时告警开启 0关闭 1开启
    /// </summary>

    std::string getEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TaskTimeoutPolicy getTaskTimeoutPolicy() const;
    bool taskTimeoutPolicyIsSet() const;
    void unsettaskTimeoutPolicy();
    void setTaskTimeoutPolicy(const TaskTimeoutPolicy& value);

    /// <summary>
    /// 
    /// </summary>

    TestCaseTimeoutPolicy getTestCaseTimeoutPolicy() const;
    bool testCaseTimeoutPolicyIsSet() const;
    void unsettestCaseTimeoutPolicy();
    void setTestCaseTimeoutPolicy(const TestCaseTimeoutPolicy& value);

    /// <summary>
    /// 超时重试次数
    /// </summary>

    int32_t getTimeoutRetryTimes() const;
    bool timeoutRetryTimesIsSet() const;
    void unsettimeoutRetryTimes();
    void setTimeoutRetryTimes(int32_t value);


protected:
    AlertTemplate alertTemplate_;
    bool alertTemplateIsSet_;
    std::string enable_;
    bool enableIsSet_;
    TaskTimeoutPolicy taskTimeoutPolicy_;
    bool taskTimeoutPolicyIsSet_;
    TestCaseTimeoutPolicy testCaseTimeoutPolicy_;
    bool testCaseTimeoutPolicyIsSet_;
    int32_t timeoutRetryTimes_;
    bool timeoutRetryTimesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TimeoutAlert_H_
