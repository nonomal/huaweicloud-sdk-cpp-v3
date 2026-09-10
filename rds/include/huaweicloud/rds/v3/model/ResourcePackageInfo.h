
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ResourcePackageInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ResourcePackageInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ResourcePackageInfo
    : public ModelBase
{
public:
    ResourcePackageInfo();
    virtual ~ResourcePackageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourcePackageInfo members

    /// <summary>
    /// 资源包ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 引擎名称。
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 已使用配额。
    /// </summary>

    int32_t getUsedQuota() const;
    bool usedQuotaIsSet() const;
    void unsetusedQuota();
    void setUsedQuota(int32_t value);

    /// <summary>
    /// 总配额。
    /// </summary>

    int32_t getTotalQuota() const;
    bool totalQuotaIsSet() const;
    void unsettotalQuota();
    void setTotalQuota(int32_t value);

    /// <summary>
    /// 资源包状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    int32_t usedQuota_;
    bool usedQuotaIsSet_;
    int32_t totalQuota_;
    bool totalQuotaIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ResourcePackageInfo_H_
