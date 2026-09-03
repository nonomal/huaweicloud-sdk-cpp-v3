
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasicInfoVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasicInfoVo_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BasicInfoVo
    : public ModelBase
{
public:
    BasicInfoVo();
    virtual ~BasicInfoVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BasicInfoVo members

    /// <summary>
    /// 采集间隔以秒为单位
    /// </summary>

    int32_t getCollectInterval() const;
    bool collectIntervalIsSet() const;
    void unsetcollectInterval();
    void setCollectInterval(int32_t value);

    /// <summary>
    /// 子任务名称
    /// </summary>

    std::string getSubTaskName() const;
    bool subTaskNameIsSet() const;
    void unsetsubTaskName();
    void setSubTaskName(const std::string& value);


protected:
    int32_t collectInterval_;
    bool collectIntervalIsSet_;
    std::string subTaskName_;
    bool subTaskNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BasicInfoVo_H_
