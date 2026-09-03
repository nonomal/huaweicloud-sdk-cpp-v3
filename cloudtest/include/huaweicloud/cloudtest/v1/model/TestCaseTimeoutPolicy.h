
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseTimeoutPolicy_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseTimeoutPolicy_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCaseTimeoutPolicy
    : public ModelBase
{
public:
    TestCaseTimeoutPolicy();
    virtual ~TestCaseTimeoutPolicy();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCaseTimeoutPolicy members

    /// <summary>
    /// 用例超时多少次告警
    /// </summary>

    int32_t getTimeoutTimes() const;
    bool timeoutTimesIsSet() const;
    void unsettimeoutTimes();
    void setTimeoutTimes(int32_t value);


protected:
    int32_t timeoutTimes_;
    bool timeoutTimesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseTimeoutPolicy_H_
