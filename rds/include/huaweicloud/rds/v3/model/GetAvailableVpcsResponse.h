
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_GetAvailableVpcsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_GetAvailableVpcsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/Vpc.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  GetAvailableVpcsResponse
    : public ModelBase, public HttpResponse
{
public:
    GetAvailableVpcsResponse();
    virtual ~GetAvailableVpcsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetAvailableVpcsResponse members

    /// <summary>
    /// 可用的VPC列表
    /// </summary>

    std::vector<Vpc>& getVpcs();
    bool vpcsIsSet() const;
    void unsetvpcs();
    void setVpcs(const std::vector<Vpc>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTraceId() const;
    bool xTraceIdIsSet() const;
    void unsetxTraceId();
    void setXTraceId(const std::string& value);


protected:
    std::vector<Vpc> vpcs_;
    bool vpcsIsSet_;
    std::string xTraceId_;
    bool xTraceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_GetAvailableVpcsResponse_H_
