
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_GetInstancesOpsResourceUsageResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_GetInstancesOpsResourceUsageResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ResourceUsage.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  GetInstancesOpsResourceUsageResponse
    : public ModelBase, public HttpResponse
{
public:
    GetInstancesOpsResourceUsageResponse();
    virtual ~GetInstancesOpsResourceUsageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetInstancesOpsResourceUsageResponse members

    /// <summary>
    /// 
    /// </summary>

    ResourceUsage getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const ResourceUsage& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceUsage getMem() const;
    bool memIsSet() const;
    void unsetmem();
    void setMem(const ResourceUsage& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceUsage getDisk() const;
    bool diskIsSet() const;
    void unsetdisk();
    void setDisk(const ResourceUsage& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceUsage getIo() const;
    bool ioIsSet() const;
    void unsetio();
    void setIo(const ResourceUsage& value);


protected:
    ResourceUsage cpu_;
    bool cpuIsSet_;
    ResourceUsage mem_;
    bool memIsSet_;
    ResourceUsage disk_;
    bool diskIsSet_;
    ResourceUsage io_;
    bool ioIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_GetInstancesOpsResourceUsageResponse_H_
