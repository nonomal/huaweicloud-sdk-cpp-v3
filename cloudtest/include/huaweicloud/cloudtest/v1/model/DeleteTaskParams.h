
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTaskParams_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTaskParams_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DeleteTaskParams
    : public ModelBase
{
public:
    DeleteTaskParams();
    virtual ~DeleteTaskParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTaskParams members

    /// <summary>
    /// 测试计划id
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTaskParams_H_
