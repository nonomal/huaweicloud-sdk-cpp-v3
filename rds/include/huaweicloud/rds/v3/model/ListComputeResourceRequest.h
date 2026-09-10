
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListComputeResourceRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListComputeResourceRequest_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  ListComputeResourceRequest
    : public ModelBase
{
public:
    ListComputeResourceRequest();
    virtual ~ListComputeResourceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListComputeResourceRequest members

    /// <summary>
    /// 分页查询，大小，默认为10
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页查询，偏移量，默认为0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 引擎名称： mysql、sqlserver、postgresql
    /// </summary>

    std::string getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string engine_;
    bool engineIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListComputeResourceRequest& dereference_from_shared_ptr(std::shared_ptr<ListComputeResourceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListComputeResourceRequest_H_
