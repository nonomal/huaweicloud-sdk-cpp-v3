
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CloudAlarmDto_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CloudAlarmDto_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CloudAlarmDto
    : public ModelBase
{
public:
    CloudAlarmDto();
    virtual ~CloudAlarmDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CloudAlarmDto members

    /// <summary>
    /// 云服务名称
    /// </summary>

    std::string getCloudServiceName() const;
    bool cloudServiceNameIsSet() const;
    void unsetcloudServiceName();
    void setCloudServiceName(const std::string& value);

    /// <summary>
    /// 云服务区域标识
    /// </summary>

    std::string getCloudServiceRegionId() const;
    bool cloudServiceRegionIdIsSet() const;
    void unsetcloudServiceRegionId();
    void setCloudServiceRegionId(const std::string& value);

    /// <summary>
    /// 云服务站点：默认中国站
    /// </summary>

    std::string getCloudServiceSite() const;
    bool cloudServiceSiteIsSet() const;
    void unsetcloudServiceSite();
    void setCloudServiceSite(const std::string& value);

    /// <summary>
    /// 是否开启CloudAlarm配置
    /// </summary>

    std::string getEnable() const;
    bool enableIsSet() const;
    void unsetenable();
    void setEnable(const std::string& value);

    /// <summary>
    /// 告警级别
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// 微服务组名称
    /// </summary>

    std::string getMicroServiceGroupName() const;
    bool microServiceGroupNameIsSet() const;
    void unsetmicroServiceGroupName();
    void setMicroServiceGroupName(const std::string& value);

    /// <summary>
    /// 微服务名称
    /// </summary>

    std::string getMicroServiceName() const;
    bool microServiceNameIsSet() const;
    void unsetmicroServiceName();
    void setMicroServiceName(const std::string& value);


protected:
    std::string cloudServiceName_;
    bool cloudServiceNameIsSet_;
    std::string cloudServiceRegionId_;
    bool cloudServiceRegionIdIsSet_;
    std::string cloudServiceSite_;
    bool cloudServiceSiteIsSet_;
    std::string enable_;
    bool enableIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string microServiceGroupName_;
    bool microServiceGroupNameIsSet_;
    std::string microServiceName_;
    bool microServiceNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CloudAlarmDto_H_
