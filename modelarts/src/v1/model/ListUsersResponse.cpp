

#include "huaweicloud/modelarts/v1/model/ListUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListUsersResponse::ListUsersResponse()
{
    usersIsSet_ = false;
}

ListUsersResponse::~ListUsersResponse() = default;

void ListUsersResponse::validate()
{
}

web::json::value ListUsersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool ListUsersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<UserInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::vector<UserInfo>& ListUsersResponse::getUsers()
{
    return users_;
}

void ListUsersResponse::setUsers(const std::vector<UserInfo>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ListUsersResponse::usersIsSet() const
{
    return usersIsSet_;
}

void ListUsersResponse::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


