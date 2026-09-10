

#include "huaweicloud/rds/v3/model/ShareBackupDatastore.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShareBackupDatastore::ShareBackupDatastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ShareBackupDatastore::~ShareBackupDatastore() = default;

void ShareBackupDatastore::validate()
{
}

web::json::value ShareBackupDatastore::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ShareBackupDatastore::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string ShareBackupDatastore::getType() const
{
    return type_;
}

void ShareBackupDatastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShareBackupDatastore::typeIsSet() const
{
    return typeIsSet_;
}

void ShareBackupDatastore::unsettype()
{
    typeIsSet_ = false;
}

std::string ShareBackupDatastore::getVersion() const
{
    return version_;
}

void ShareBackupDatastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShareBackupDatastore::versionIsSet() const
{
    return versionIsSet_;
}

void ShareBackupDatastore::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


