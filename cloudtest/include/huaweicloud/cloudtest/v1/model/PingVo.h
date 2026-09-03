
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PingVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PingVo_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  PingVo
    : public ModelBase
{
public:
    PingVo();
    virtual ~PingVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PingVo members

    /// <summary>
    /// ping地址
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 节点名称
    /// </summary>

    std::string getSubTaskName() const;
    bool subTaskNameIsSet() const;
    void unsetsubTaskName();
    void setSubTaskName(const std::string& value);


protected:
    std::string address_;
    bool addressIsSet_;
    std::string subTaskName_;
    bool subTaskNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PingVo_H_
