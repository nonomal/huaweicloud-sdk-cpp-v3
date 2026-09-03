
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CloudTestCaseInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CloudTestCaseInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/CommonDto.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CloudTestCaseInfo
    : public ModelBase
{
public:
    CloudTestCaseInfo();
    virtual ~CloudTestCaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CloudTestCaseInfo members

    /// <summary>
    /// 用例id
    /// </summary>

    std::string getCaseId() const;
    bool caseIdIsSet() const;
    void unsetcaseId();
    void setCaseId(const std::string& value);

    /// <summary>
    /// tmss用例类型
    /// </summary>

    int32_t getCaseType() const;
    bool caseTypeIsSet() const;
    void unsetcaseType();
    void setCaseType(int32_t value);

    /// <summary>
    /// 是否未禁用，1为未禁用，0为已禁用
    /// </summary>

    int32_t getIsForbidden() const;
    bool isForbiddenIsSet() const;
    void unsetisForbidden();
    void setIsForbidden(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    CommonDto getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const CommonDto& value);

    /// <summary>
    /// 
    /// </summary>

    CommonDto getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const CommonDto& value);

    /// <summary>
    /// 用例脚本路径
    /// </summary>

    std::string getScriptUrl() const;
    bool scriptUrlIsSet() const;
    void unsetscriptUrl();
    void setScriptUrl(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommonDto getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const CommonDto& value);

    /// <summary>
    /// 用例名称
    /// </summary>

    std::string getTestCaseName() const;
    bool testCaseNameIsSet() const;
    void unsettestCaseName();
    void setTestCaseName(const std::string& value);

    /// <summary>
    /// 用例编号
    /// </summary>

    std::string getTestCaseNumber() const;
    bool testCaseNumberIsSet() const;
    void unsettestCaseNumber();
    void setTestCaseNumber(const std::string& value);

    /// <summary>
    /// tmss版本地址
    /// </summary>

    std::string getTmssVersionUri() const;
    bool tmssVersionUriIsSet() const;
    void unsettmssVersionUri();
    void setTmssVersionUri(const std::string& value);


protected:
    std::string caseId_;
    bool caseIdIsSet_;
    int32_t caseType_;
    bool caseTypeIsSet_;
    int32_t isForbidden_;
    bool isForbiddenIsSet_;
    CommonDto owner_;
    bool ownerIsSet_;
    CommonDto result_;
    bool resultIsSet_;
    std::string scriptUrl_;
    bool scriptUrlIsSet_;
    CommonDto status_;
    bool statusIsSet_;
    std::string testCaseName_;
    bool testCaseNameIsSet_;
    std::string testCaseNumber_;
    bool testCaseNumberIsSet_;
    std::string tmssVersionUri_;
    bool tmssVersionUriIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CloudTestCaseInfo_H_
