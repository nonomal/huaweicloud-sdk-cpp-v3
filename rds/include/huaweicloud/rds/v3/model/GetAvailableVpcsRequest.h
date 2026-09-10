
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_GetAvailableVpcsRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_GetAvailableVpcsRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  GetAvailableVpcsRequest
    : public ModelBase
{
public:
    GetAvailableVpcsRequest();
    virtual ~GetAvailableVpcsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetAvailableVpcsRequest members

    /// <summary>
    /// 主实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 如果传入vpc_id, 则只返回该VPC下的可用子网
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 如果传入vpc_name, 则只返回该name对应的VPC下的可用子网
    /// </summary>

    std::string getVpcName() const;
    bool vpcNameIsSet() const;
    void unsetvpcName();
    void setVpcName(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string vpcName_;
    bool vpcNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GetAvailableVpcsRequest& dereference_from_shared_ptr(std::shared_ptr<GetAvailableVpcsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_GetAvailableVpcsRequest_H_
