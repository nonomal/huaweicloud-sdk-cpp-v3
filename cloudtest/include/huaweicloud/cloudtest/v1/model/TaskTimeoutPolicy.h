
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskTimeoutPolicy_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskTimeoutPolicy_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskTimeoutPolicy
    : public ModelBase
{
public:
    TaskTimeoutPolicy();
    virtual ~TaskTimeoutPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskTimeoutPolicy members

    /// <summary>
    /// 小网拨测：同一个ip超时的用例大于多少个告警
    /// </summary>

    int32_t getSameIpTimeoutTestCaseCount() const;
    bool sameIpTimeoutTestCaseCountIsSet() const;
    void unsetsameIpTimeoutTestCaseCount();
    void setSameIpTimeoutTestCaseCount(int32_t value);

    /// <summary>
    /// 小网拨测:同一用例在N个IP中超时，并且超时的用例个数达到M个告警
    /// </summary>

    std::string getSameTestCaseTimeoutIpCount() const;
    bool sameTestCaseTimeoutIpCountIsSet() const;
    void unsetsameTestCaseTimeoutIpCount();
    void setSameTestCaseTimeoutIpCount(const std::string& value);

    /// <summary>
    /// 任务中多少个用例超时告警
    /// </summary>

    int32_t getTestCaseTimeoutCount() const;
    bool testCaseTimeoutCountIsSet() const;
    void unsettestCaseTimeoutCount();
    void setTestCaseTimeoutCount(int32_t value);

    /// <summary>
    /// 任务中多少百分比的用例超时告警
    /// </summary>

    int32_t getTestCaseTimeoutRatio() const;
    bool testCaseTimeoutRatioIsSet() const;
    void unsettestCaseTimeoutRatio();
    void setTestCaseTimeoutRatio(int32_t value);

    /// <summary>
    /// 任务连续超时告警
    /// </summary>

    int32_t getTimeoutTimes() const;
    bool timeoutTimesIsSet() const;
    void unsettimeoutTimes();
    void setTimeoutTimes(int32_t value);


protected:
    int32_t sameIpTimeoutTestCaseCount_;
    bool sameIpTimeoutTestCaseCountIsSet_;
    std::string sameTestCaseTimeoutIpCount_;
    bool sameTestCaseTimeoutIpCountIsSet_;
    int32_t testCaseTimeoutCount_;
    bool testCaseTimeoutCountIsSet_;
    int32_t testCaseTimeoutRatio_;
    bool testCaseTimeoutRatioIsSet_;
    int32_t timeoutTimes_;
    bool timeoutTimesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskTimeoutPolicy_H_
