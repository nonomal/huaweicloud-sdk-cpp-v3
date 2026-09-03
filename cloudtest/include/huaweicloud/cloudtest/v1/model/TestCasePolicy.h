
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCasePolicy_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCasePolicy_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCasePolicy
    : public ModelBase
{
public:
    TestCasePolicy();
    virtual ~TestCasePolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCasePolicy members

    /// <summary>
    /// 单用例失败多少次告警
    /// </summary>

    int32_t getFailedTimes() const;
    bool failedTimesIsSet() const;
    void unsetfailedTimes();
    void setFailedTimes(int32_t value);

    /// <summary>
    /// 单用例重试多少次后告警
    /// </summary>

    int32_t getRetryTimes() const;
    bool retryTimesIsSet() const;
    void unsetretryTimes();
    void setRetryTimes(int32_t value);


protected:
    int32_t failedTimes_;
    bool failedTimesIsSet_;
    int32_t retryTimes_;
    bool retryTimesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCasePolicy_H_
