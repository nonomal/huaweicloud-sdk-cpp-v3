
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskBasicInfoVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskBasicInfoVo_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskBasicInfoVo
    : public ModelBase
{
public:
    TaskBasicInfoVo();
    virtual ~TaskBasicInfoVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskBasicInfoVo members

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getErrorReason() const;
    bool errorReasonIsSet() const;
    void unseterrorReason();
    void setErrorReason(const std::string& value);

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 任务名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务类型
    /// </summary>

    int32_t getTaskState() const;
    bool taskStateIsSet() const;
    void unsettaskState();
    void setTaskState(int32_t value);

    /// <summary>
    /// 测试套类型
    /// </summary>

    int32_t getTestSuiteType() const;
    bool testSuiteTypeIsSet() const;
    void unsettestSuiteType();
    void setTestSuiteType(int32_t value);


protected:
    std::string errorReason_;
    bool errorReasonIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t taskState_;
    bool taskStateIsSet_;
    int32_t testSuiteType_;
    bool testSuiteTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskBasicInfoVo_H_
