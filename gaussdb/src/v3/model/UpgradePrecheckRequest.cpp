

#include "huaweicloud/gaussdb/v3/model/UpgradePrecheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradePrecheckRequest::UpgradePrecheckRequest()
{
    databasesInstanceInfosIsSet_ = false;
}

UpgradePrecheckRequest::~UpgradePrecheckRequest() = default;

void UpgradePrecheckRequest::validate()
{
}

web::json::value UpgradePrecheckRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesInstanceInfosIsSet_) {
        val[utility::conversions::to_string_t("databases_instance_infos")] = ModelBase::toJson(databasesInstanceInfos_);
    }

    return val;
}
bool UpgradePrecheckRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases_instance_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases_instance_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<PreCheckForUpgradeDatabasesSingleInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabasesInstanceInfos(refVal);
        }
    }
    return ok;
}


std::vector<PreCheckForUpgradeDatabasesSingleInstance>& UpgradePrecheckRequest::getDatabasesInstanceInfos()
{
    return databasesInstanceInfos_;
}

void UpgradePrecheckRequest::setDatabasesInstanceInfos(const std::vector<PreCheckForUpgradeDatabasesSingleInstance>& value)
{
    databasesInstanceInfos_ = value;
    databasesInstanceInfosIsSet_ = true;
}

bool UpgradePrecheckRequest::databasesInstanceInfosIsSet() const
{
    return databasesInstanceInfosIsSet_;
}

void UpgradePrecheckRequest::unsetdatabasesInstanceInfos()
{
    databasesInstanceInfosIsSet_ = false;
}

}
}
}
}
}


