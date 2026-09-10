
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAgencyPolicyResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAgencyPolicyResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/AgencyRole.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ShowAgencyPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAgencyPolicyResponse();
    virtual ~ShowAgencyPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAgencyPolicyResponse members

    /// <summary>
    /// 委托是否存在。
    /// </summary>

    bool isIsExisted() const;
    bool isExistedIsSet() const;
    void unsetisExisted();
    void setIsExisted(bool value);

    /// <summary>
    /// 委托名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 委托角色列表。
    /// </summary>

    std::vector<AgencyRole>& getRoles();
    bool rolesIsSet() const;
    void unsetroles();
    void setRoles(const std::vector<AgencyRole>& value);


protected:
    bool isExisted_;
    bool isExistedIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<AgencyRole> roles_;
    bool rolesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowAgencyPolicyResponse_H_
