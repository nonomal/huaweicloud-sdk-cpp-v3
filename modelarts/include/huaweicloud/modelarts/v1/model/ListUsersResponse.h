
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListUsersResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListUsersResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/UserInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListUsersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUsersResponse();
    virtual ~ListUsersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUsersResponse members

    /// <summary>
    /// **参数解释**：授权对象列表。
    /// </summary>

    std::vector<UserInfo>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<UserInfo>& value);


protected:
    std::vector<UserInfo> users_;
    bool usersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListUsersResponse_H_
