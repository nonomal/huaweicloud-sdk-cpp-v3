

#include "huaweicloud/modelarts/v1/model/UserInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UserInfo::UserInfo()
{
    userName_ = "";
    userNameIsSet_ = false;
}

UserInfo::~UserInfo() = default;

void UserInfo::validate()
{
}

web::json::value UserInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("userName")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool UserInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("userName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string UserInfo::getUserName() const
{
    return userName_;
}

void UserInfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool UserInfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void UserInfo::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


