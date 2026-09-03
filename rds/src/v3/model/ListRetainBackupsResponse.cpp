

#include "huaweicloud/rds/v3/model/ListRetainBackupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListRetainBackupsResponse::ListRetainBackupsResponse()
{
    backupsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListRetainBackupsResponse::~ListRetainBackupsResponse() = default;

void ListRetainBackupsResponse::validate()
{
}

web::json::value ListRetainBackupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupsIsSet_) {
        val[utility::conversions::to_string_t("backups")] = ModelBase::toJson(backups_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListRetainBackupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backups"));
        if(!fieldValue.is_null())
        {
            RetainBackup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


RetainBackup ListRetainBackupsResponse::getBackups() const
{
    return backups_;
}

void ListRetainBackupsResponse::setBackups(const RetainBackup& value)
{
    backups_ = value;
    backupsIsSet_ = true;
}

bool ListRetainBackupsResponse::backupsIsSet() const
{
    return backupsIsSet_;
}

void ListRetainBackupsResponse::unsetbackups()
{
    backupsIsSet_ = false;
}

int32_t ListRetainBackupsResponse::getTotal() const
{
    return total_;
}

void ListRetainBackupsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListRetainBackupsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListRetainBackupsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


