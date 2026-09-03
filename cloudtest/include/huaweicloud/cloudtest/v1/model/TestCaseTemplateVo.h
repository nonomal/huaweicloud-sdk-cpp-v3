
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseTemplateVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseTemplateVo_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCaseTemplateVo
    : public ModelBase
{
public:
    TestCaseTemplateVo();
    virtual ~TestCaseTemplateVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCaseTemplateVo members

    /// <summary>
    /// 用例对应的告警模板id
    /// </summary>

    std::string getAlertTemplateId() const;
    bool alertTemplateIdIsSet() const;
    void unsetalertTemplateId();
    void setAlertTemplateId(const std::string& value);

    /// <summary>
    /// 测试用例id
    /// </summary>

    std::string getTestcaseId() const;
    bool testcaseIdIsSet() const;
    void unsettestcaseId();
    void setTestcaseId(const std::string& value);


protected:
    std::string alertTemplateId_;
    bool alertTemplateIdIsSet_;
    std::string testcaseId_;
    bool testcaseIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseTemplateVo_H_
