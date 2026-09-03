
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_FailedAlert_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_FailedAlert_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TaskPolicy.h>
#include <huaweicloud/cloudtest/v1/model/TestCasePolicy.h>
#include <huaweicloud/cloudtest/v1/model/CloudAlarmDto.h>
#include <huaweicloud/cloudtest/v1/model/WiseEye.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  FailedAlert
    : public ModelBase
{
public:
    FailedAlert();
    virtual ~FailedAlert();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FailedAlert members

    /// <summary>
    /// 
    /// </summary>

    CloudAlarmDto getCloudAlarm() const;
    bool cloudAlarmIsSet() const;
    void unsetcloudAlarm();
    void setCloudAlarm(const CloudAlarmDto& value);

    /// <summary>
    /// 
    /// </summary>

    TaskPolicy getTaskPolicy() const;
    bool taskPolicyIsSet() const;
    void unsettaskPolicy();
    void setTaskPolicy(const TaskPolicy& value);

    /// <summary>
    /// 
    /// </summary>

    TestCasePolicy getTestCasePolicy() const;
    bool testCasePolicyIsSet() const;
    void unsettestCasePolicy();
    void setTestCasePolicy(const TestCasePolicy& value);

    /// <summary>
    /// 
    /// </summary>

    WiseEye getWiseEye() const;
    bool wiseEyeIsSet() const;
    void unsetwiseEye();
    void setWiseEye(const WiseEye& value);


protected:
    CloudAlarmDto cloudAlarm_;
    bool cloudAlarmIsSet_;
    TaskPolicy taskPolicy_;
    bool taskPolicyIsSet_;
    TestCasePolicy testCasePolicy_;
    bool testCasePolicyIsSet_;
    WiseEye wiseEye_;
    bool wiseEyeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_FailedAlert_H_
