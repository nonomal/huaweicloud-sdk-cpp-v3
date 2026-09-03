
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CloudTestCaseOperationInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CloudTestCaseOperationInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/CloudTestCaseInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CloudTestCaseOperationInfo
    : public ModelBase
{
public:
    CloudTestCaseOperationInfo();
    virtual ~CloudTestCaseOperationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CloudTestCaseOperationInfo members

    /// <summary>
    /// 前置用例信息
    /// </summary>

    std::vector<CloudTestCaseInfo>& getSetUpCasesInfo();
    bool setUpCasesInfoIsSet() const;
    void unsetsetUpCasesInfo();
    void setSetUpCasesInfo(const std::vector<CloudTestCaseInfo>& value);

    /// <summary>
    /// 后置用例信息
    /// </summary>

    std::vector<CloudTestCaseInfo>& getTearDownCasesInfo();
    bool tearDownCasesInfoIsSet() const;
    void unsettearDownCasesInfo();
    void setTearDownCasesInfo(const std::vector<CloudTestCaseInfo>& value);

    /// <summary>
    /// 用例信息
    /// </summary>

    std::vector<CloudTestCaseInfo>& getTestCasesInfo();
    bool testCasesInfoIsSet() const;
    void unsettestCasesInfo();
    void setTestCasesInfo(const std::vector<CloudTestCaseInfo>& value);


protected:
    std::vector<CloudTestCaseInfo> setUpCasesInfo_;
    bool setUpCasesInfoIsSet_;
    std::vector<CloudTestCaseInfo> tearDownCasesInfo_;
    bool tearDownCasesInfoIsSet_;
    std::vector<CloudTestCaseInfo> testCasesInfo_;
    bool testCasesInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CloudTestCaseOperationInfo_H_
