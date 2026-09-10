
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListComputeResourceResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListComputeResourceResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ResourcePackageInfo.h>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListComputeResourceResponse
    : public ModelBase, public HttpResponse
{
public:
    ListComputeResourceResponse();
    virtual ~ListComputeResourceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListComputeResourceResponse members

    /// <summary>
    /// 资源包信息列表。
    /// </summary>

    std::vector<ResourcePackageInfo>& getResourcePackageInfos();
    bool resourcePackageInfosIsSet() const;
    void unsetresourcePackageInfos();
    void setResourcePackageInfos(const std::vector<ResourcePackageInfo>& value);

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<ResourcePackageInfo> resourcePackageInfos_;
    bool resourcePackageInfosIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListComputeResourceResponse_H_
