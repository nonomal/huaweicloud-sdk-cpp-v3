

#include "huaweicloud/rds/v3/model/ShowBackupUsageExceededInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowBackupUsageExceededInstancesResponse::ShowBackupUsageExceededInstancesResponse()
{
    instancesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowBackupUsageExceededInstancesResponse::~ShowBackupUsageExceededInstancesResponse() = default;

void ShowBackupUsageExceededInstancesResponse::validate()
{
}

web::json::value ShowBackupUsageExceededInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowBackupUsageExceededInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ExceededInstanceInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
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


std::vector<ExceededInstanceInfo>& ShowBackupUsageExceededInstancesResponse::getInstances()
{
    return instances_;
}

void ShowBackupUsageExceededInstancesResponse::setInstances(const std::vector<ExceededInstanceInfo>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ShowBackupUsageExceededInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ShowBackupUsageExceededInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ShowBackupUsageExceededInstancesResponse::getTotal() const
{
    return total_;
}

void ShowBackupUsageExceededInstancesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowBackupUsageExceededInstancesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowBackupUsageExceededInstancesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


