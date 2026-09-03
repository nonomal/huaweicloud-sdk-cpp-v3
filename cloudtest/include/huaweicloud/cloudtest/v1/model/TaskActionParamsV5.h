
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskActionParamsV5_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskActionParamsV5_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskActionParamsV5
    : public ModelBase
{
public:
    TaskActionParamsV5();
    virtual ~TaskActionParamsV5();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskActionParamsV5 members

    /// <summary>
    /// 启停、调试动作（1为启动，0为停止，2为调试）
    /// </summary>

    int32_t getActionId() const;
    bool actionIdIsSet() const;
    void unsetactionId();
    void setActionId(int32_t value);

    /// <summary>
    /// 环境Id
    /// </summary>

    std::string getEnvironmentGroupId() const;
    bool environmentGroupIdIsSet() const;
    void unsetenvironmentGroupId();
    void setEnvironmentGroupId(const std::string& value);

    /// <summary>
    /// 测试计划Id
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// 任务id列表信息
    /// </summary>

    std::vector<std::string>& getTaskIds();
    bool taskIdsIsSet() const;
    void unsettaskIds();
    void setTaskIds(const std::vector<std::string>& value);


protected:
    int32_t actionId_;
    bool actionIdIsSet_;
    std::string environmentGroupId_;
    bool environmentGroupIdIsSet_;
    std::string planId_;
    bool planIdIsSet_;
    std::vector<std::string> taskIds_;
    bool taskIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskActionParamsV5_H_
