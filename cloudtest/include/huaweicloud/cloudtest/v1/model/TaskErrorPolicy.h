
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskErrorPolicy_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskErrorPolicy_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskErrorPolicy
    : public ModelBase
{
public:
    TaskErrorPolicy();
    virtual ~TaskErrorPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskErrorPolicy members

    /// <summary>
    /// 小网拨测：同一个ip异常的用例大于多少个告警
    /// </summary>

    int32_t getSameIpErrorTestCaseCount() const;
    bool sameIpErrorTestCaseCountIsSet() const;
    void unsetsameIpErrorTestCaseCount();
    void setSameIpErrorTestCaseCount(int32_t value);

    /// <summary>
    /// 小网拨测:同一用例在N个IP中异常，并且异常的用例个数达到M个告警
    /// </summary>

    std::string getSameTestCaseErrorIpCount() const;
    bool sameTestCaseErrorIpCountIsSet() const;
    void unsetsameTestCaseErrorIpCount();
    void setSameTestCaseErrorIpCount(const std::string& value);

    /// <summary>
    /// 任务中多少个用例异常告警
    /// </summary>

    int32_t getTestCaseErrorCount() const;
    bool testCaseErrorCountIsSet() const;
    void unsettestCaseErrorCount();
    void setTestCaseErrorCount(int32_t value);

    /// <summary>
    /// 任务中多少百分比的用例异常告警
    /// </summary>

    int32_t getTestCaseErrorRatio() const;
    bool testCaseErrorRatioIsSet() const;
    void unsettestCaseErrorRatio();
    void setTestCaseErrorRatio(int32_t value);


protected:
    int32_t sameIpErrorTestCaseCount_;
    bool sameIpErrorTestCaseCountIsSet_;
    std::string sameTestCaseErrorIpCount_;
    bool sameTestCaseErrorIpCountIsSet_;
    int32_t testCaseErrorCount_;
    bool testCaseErrorCountIsSet_;
    int32_t testCaseErrorRatio_;
    bool testCaseErrorRatioIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskErrorPolicy_H_
