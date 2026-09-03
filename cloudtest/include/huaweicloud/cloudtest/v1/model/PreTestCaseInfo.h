
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PreTestCaseInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PreTestCaseInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/AlertTemplate.h>
#include <huaweicloud/cloudtest/v1/model/TestCaseBasicInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  PreTestCaseInfo
    : public ModelBase
{
public:
    PreTestCaseInfo();
    virtual ~PreTestCaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PreTestCaseInfo members

    /// <summary>
    /// 
    /// </summary>

    AlertTemplate getAlertTemplate() const;
    bool alertTemplateIsSet() const;
    void unsetalertTemplate();
    void setAlertTemplate(const AlertTemplate& value);

    /// <summary>
    /// 0 关闭，1开启
    /// </summary>

    std::string getEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(const std::string& value);

    /// <summary>
    /// 用例列表
    /// </summary>

    std::vector<TestCaseBasicInfo>& getTestCases();
    bool testCasesIsSet() const;
    void unsettestCases();
    void setTestCases(const std::vector<TestCaseBasicInfo>& value);


protected:
    AlertTemplate alertTemplate_;
    bool alertTemplateIsSet_;
    std::string enable_;
    bool enableIsSet_;
    std::vector<TestCaseBasicInfo> testCases_;
    bool testCasesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PreTestCaseInfo_H_
