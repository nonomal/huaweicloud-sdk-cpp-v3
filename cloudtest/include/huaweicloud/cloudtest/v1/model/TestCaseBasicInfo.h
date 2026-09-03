
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseBasicInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseBasicInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/AlertTemplate.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestCaseBasicInfo
    : public ModelBase
{
public:
    TestCaseBasicInfo();
    virtual ~TestCaseBasicInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestCaseBasicInfo members

    /// <summary>
    /// 
    /// </summary>

    AlertTemplate getAlertTemplate() const;
    bool alertTemplateIsSet() const;
    void unsetalertTemplate();
    void setAlertTemplate(const AlertTemplate& value);

    /// <summary>
    /// tmss用例类型
    /// </summary>

    int32_t getCaseType() const;
    bool caseTypeIsSet() const;
    void unsetcaseType();
    void setCaseType(int32_t value);

    /// <summary>
    /// 执行机类型
    /// </summary>

    std::string getExecutorType() const;
    bool executorTypeIsSet() const;
    void unsetexecutorType();
    void setExecutorType(const std::string& value);

    /// <summary>
    /// 用例id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 是否收藏
    /// </summary>

    bool isIsForbidden() const;
    bool isForbiddenIsSet() const;
    void unsetisForbidden();
    void setIsForbidden(bool value);

    /// <summary>
    /// 用例id
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用例编号
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 用例包更新时间
    /// </summary>

    int64_t getProjectUpdateTime() const;
    bool projectUpdateTimeIsSet() const;
    void unsetprojectUpdateTime();
    void setProjectUpdateTime(int64_t value);

    /// <summary>
    /// 用例包名
    /// </summary>

    std::string getScriptProjectName() const;
    bool scriptProjectNameIsSet() const;
    void unsetscriptProjectName();
    void setScriptProjectName(const std::string& value);

    /// <summary>
    /// 用例状态
    /// </summary>

    int32_t getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(int32_t value);

    /// <summary>
    /// svn脚本路径
    /// </summary>

    std::string getSvnScriptPath() const;
    bool svnScriptPathIsSet() const;
    void unsetsvnScriptPath();
    void setSvnScriptPath(const std::string& value);

    /// <summary>
    /// tmss版本地址
    /// </summary>

    std::string getTmssVersionUri() const;
    bool tmssVersionUriIsSet() const;
    void unsettmssVersionUri();
    void setTmssVersionUri(const std::string& value);


protected:
    AlertTemplate alertTemplate_;
    bool alertTemplateIsSet_;
    int32_t caseType_;
    bool caseTypeIsSet_;
    std::string executorType_;
    bool executorTypeIsSet_;
    std::string id_;
    bool idIsSet_;
    bool isForbidden_;
    bool isForbiddenIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string number_;
    bool numberIsSet_;
    int64_t projectUpdateTime_;
    bool projectUpdateTimeIsSet_;
    std::string scriptProjectName_;
    bool scriptProjectNameIsSet_;
    int32_t state_;
    bool stateIsSet_;
    std::string svnScriptPath_;
    bool svnScriptPathIsSet_;
    std::string tmssVersionUri_;
    bool tmssVersionUriIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestCaseBasicInfo_H_
