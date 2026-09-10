

#include "huaweicloud/rds/v3/model/GetInstancesOpsResourceUsageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GetInstancesOpsResourceUsageResponse::GetInstancesOpsResourceUsageResponse()
{
    cpuIsSet_ = false;
    memIsSet_ = false;
    diskIsSet_ = false;
    ioIsSet_ = false;
}

GetInstancesOpsResourceUsageResponse::~GetInstancesOpsResourceUsageResponse() = default;

void GetInstancesOpsResourceUsageResponse::validate()
{
}

web::json::value GetInstancesOpsResourceUsageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(memIsSet_) {
        val[utility::conversions::to_string_t("mem")] = ModelBase::toJson(mem_);
    }
    if(diskIsSet_) {
        val[utility::conversions::to_string_t("disk")] = ModelBase::toJson(disk_);
    }
    if(ioIsSet_) {
        val[utility::conversions::to_string_t("io")] = ModelBase::toJson(io_);
    }

    return val;
}
bool GetInstancesOpsResourceUsageResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            ResourceUsage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem"));
        if(!fieldValue.is_null())
        {
            ResourceUsage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk"));
        if(!fieldValue.is_null())
        {
            ResourceUsage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("io"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("io"));
        if(!fieldValue.is_null())
        {
            ResourceUsage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIo(refVal);
        }
    }
    return ok;
}


ResourceUsage GetInstancesOpsResourceUsageResponse::getCpu() const
{
    return cpu_;
}

void GetInstancesOpsResourceUsageResponse::setCpu(const ResourceUsage& value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool GetInstancesOpsResourceUsageResponse::cpuIsSet() const
{
    return cpuIsSet_;
}

void GetInstancesOpsResourceUsageResponse::unsetcpu()
{
    cpuIsSet_ = false;
}

ResourceUsage GetInstancesOpsResourceUsageResponse::getMem() const
{
    return mem_;
}

void GetInstancesOpsResourceUsageResponse::setMem(const ResourceUsage& value)
{
    mem_ = value;
    memIsSet_ = true;
}

bool GetInstancesOpsResourceUsageResponse::memIsSet() const
{
    return memIsSet_;
}

void GetInstancesOpsResourceUsageResponse::unsetmem()
{
    memIsSet_ = false;
}

ResourceUsage GetInstancesOpsResourceUsageResponse::getDisk() const
{
    return disk_;
}

void GetInstancesOpsResourceUsageResponse::setDisk(const ResourceUsage& value)
{
    disk_ = value;
    diskIsSet_ = true;
}

bool GetInstancesOpsResourceUsageResponse::diskIsSet() const
{
    return diskIsSet_;
}

void GetInstancesOpsResourceUsageResponse::unsetdisk()
{
    diskIsSet_ = false;
}

ResourceUsage GetInstancesOpsResourceUsageResponse::getIo() const
{
    return io_;
}

void GetInstancesOpsResourceUsageResponse::setIo(const ResourceUsage& value)
{
    io_ = value;
    ioIsSet_ = true;
}

bool GetInstancesOpsResourceUsageResponse::ioIsSet() const
{
    return ioIsSet_;
}

void GetInstancesOpsResourceUsageResponse::unsetio()
{
    ioIsSet_ = false;
}

}
}
}
}
}


