
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Subnet_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Subnet_H_


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
/// 子网信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Subnet
    : public ModelBase
{
public:
    Subnet();
    virtual ~Subnet();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Subnet members

    /// <summary>
    /// 子网ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 子网名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否是IPV6子网
    /// </summary>

    bool isIpv6Enable() const;
    bool ipv6EnableIsSet() const;
    void unsetipv6Enable();
    void setIpv6Enable(bool value);

    /// <summary>
    /// 子网的CIDR信息
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// IPV6子网的CIDR信息
    /// </summary>

    std::string getCidrV6() const;
    bool cidrV6IsSet() const;
    void unsetcidrV6();
    void setCidrV6(const std::string& value);

    /// <summary>
    /// 子网的网关
    /// </summary>

    std::string getGatewayIp() const;
    bool gatewayIpIsSet() const;
    void unsetgatewayIp();
    void setGatewayIp(const std::string& value);

    /// <summary>
    /// IPV6子网的网关
    /// </summary>

    std::string getGatewayIpV6() const;
    bool gatewayIpV6IsSet() const;
    void unsetgatewayIpV6();
    void setGatewayIpV6(const std::string& value);

    /// <summary>
    /// 子网的可用区
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool ipv6Enable_;
    bool ipv6EnableIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::string cidrV6_;
    bool cidrV6IsSet_;
    std::string gatewayIp_;
    bool gatewayIpIsSet_;
    std::string gatewayIpV6_;
    bool gatewayIpV6IsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Subnet_H_
