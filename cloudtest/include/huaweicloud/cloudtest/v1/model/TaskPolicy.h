
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskPolicy_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskPolicy_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskPolicy
    : public ModelBase
{
public:
    TaskPolicy();
    virtual ~TaskPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskPolicy members

    /// <summary>
    /// 任务连续失败N次告警
    /// </summary>

    int32_t getFailedTimes() const;
    bool failedTimesIsSet() const;
    void unsetfailedTimes();
    void setFailedTimes(int32_t value);

    /// <summary>
    /// 小网拨测：同一个ip失败的用例大于多少个告警
    /// </summary>

    int32_t getSameIpFailedTestCaseCount() const;
    bool sameIpFailedTestCaseCountIsSet() const;
    void unsetsameIpFailedTestCaseCount();
    void setSameIpFailedTestCaseCount(int32_t value);

    /// <summary>
    /// 小网拨测:同一用例在N个IP中失败，并且失败的用例个数达到M个
    /// </summary>

    std::string getSameTestCaseFailedIpCount() const;
    bool sameTestCaseFailedIpCountIsSet() const;
    void unsetsameTestCaseFailedIpCount();
    void setSameTestCaseFailedIpCount(const std::string& value);

    /// <summary>
    /// 任务中多少个用例失败告警
    /// </summary>

    int32_t getTestCaseFailedCount() const;
    bool testCaseFailedCountIsSet() const;
    void unsettestCaseFailedCount();
    void setTestCaseFailedCount(int32_t value);

    /// <summary>
    /// 任务中多少百分比的用例失败告警
    /// </summary>

    int32_t getTestCaseFailedRatio() const;
    bool testCaseFailedRatioIsSet() const;
    void unsettestCaseFailedRatio();
    void setTestCaseFailedRatio(int32_t value);


protected:
    int32_t failedTimes_;
    bool failedTimesIsSet_;
    int32_t sameIpFailedTestCaseCount_;
    bool sameIpFailedTestCaseCountIsSet_;
    std::string sameTestCaseFailedIpCount_;
    bool sameTestCaseFailedIpCountIsSet_;
    int32_t testCaseFailedCount_;
    bool testCaseFailedCountIsSet_;
    int32_t testCaseFailedRatio_;
    bool testCaseFailedRatioIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskPolicy_H_
