

#include "huaweicloud/rds/v3/model/CollectInstanceStatisticResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CollectInstanceStatisticResponse::CollectInstanceStatisticResponse()
{
    totalNum_ = 0;
    totalNumIsSet_ = false;
    abnormalNum_ = 0;
    abnormalNumIsSet_ = false;
    diskFullNum_ = 0;
    diskFullNumIsSet_ = false;
    frozenNum_ = 0;
    frozenNumIsSet_ = false;
    normalNum_ = 0;
    normalNumIsSet_ = false;
    waitRebootNum_ = 0;
    waitRebootNumIsSet_ = false;
}

CollectInstanceStatisticResponse::~CollectInstanceStatisticResponse() = default;

void CollectInstanceStatisticResponse::validate()
{
}

web::json::value CollectInstanceStatisticResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalNumIsSet_) {
        val[utility::conversions::to_string_t("total_num")] = ModelBase::toJson(totalNum_);
    }
    if(abnormalNumIsSet_) {
        val[utility::conversions::to_string_t("abnormal_num")] = ModelBase::toJson(abnormalNum_);
    }
    if(diskFullNumIsSet_) {
        val[utility::conversions::to_string_t("disk_full_num")] = ModelBase::toJson(diskFullNum_);
    }
    if(frozenNumIsSet_) {
        val[utility::conversions::to_string_t("frozen_num")] = ModelBase::toJson(frozenNum_);
    }
    if(normalNumIsSet_) {
        val[utility::conversions::to_string_t("normal_num")] = ModelBase::toJson(normalNum_);
    }
    if(waitRebootNumIsSet_) {
        val[utility::conversions::to_string_t("wait_reboot_num")] = ModelBase::toJson(waitRebootNum_);
    }

    return val;
}
bool CollectInstanceStatisticResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("abnormal_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abnormal_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbnormalNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_full_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_full_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskFullNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frozen_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozen_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozenNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("normal_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("normal_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNormalNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wait_reboot_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_reboot_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitRebootNum(refVal);
        }
    }
    return ok;
}


int32_t CollectInstanceStatisticResponse::getTotalNum() const
{
    return totalNum_;
}

void CollectInstanceStatisticResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool CollectInstanceStatisticResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void CollectInstanceStatisticResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

int32_t CollectInstanceStatisticResponse::getAbnormalNum() const
{
    return abnormalNum_;
}

void CollectInstanceStatisticResponse::setAbnormalNum(int32_t value)
{
    abnormalNum_ = value;
    abnormalNumIsSet_ = true;
}

bool CollectInstanceStatisticResponse::abnormalNumIsSet() const
{
    return abnormalNumIsSet_;
}

void CollectInstanceStatisticResponse::unsetabnormalNum()
{
    abnormalNumIsSet_ = false;
}

int32_t CollectInstanceStatisticResponse::getDiskFullNum() const
{
    return diskFullNum_;
}

void CollectInstanceStatisticResponse::setDiskFullNum(int32_t value)
{
    diskFullNum_ = value;
    diskFullNumIsSet_ = true;
}

bool CollectInstanceStatisticResponse::diskFullNumIsSet() const
{
    return diskFullNumIsSet_;
}

void CollectInstanceStatisticResponse::unsetdiskFullNum()
{
    diskFullNumIsSet_ = false;
}

int32_t CollectInstanceStatisticResponse::getFrozenNum() const
{
    return frozenNum_;
}

void CollectInstanceStatisticResponse::setFrozenNum(int32_t value)
{
    frozenNum_ = value;
    frozenNumIsSet_ = true;
}

bool CollectInstanceStatisticResponse::frozenNumIsSet() const
{
    return frozenNumIsSet_;
}

void CollectInstanceStatisticResponse::unsetfrozenNum()
{
    frozenNumIsSet_ = false;
}

int32_t CollectInstanceStatisticResponse::getNormalNum() const
{
    return normalNum_;
}

void CollectInstanceStatisticResponse::setNormalNum(int32_t value)
{
    normalNum_ = value;
    normalNumIsSet_ = true;
}

bool CollectInstanceStatisticResponse::normalNumIsSet() const
{
    return normalNumIsSet_;
}

void CollectInstanceStatisticResponse::unsetnormalNum()
{
    normalNumIsSet_ = false;
}

int32_t CollectInstanceStatisticResponse::getWaitRebootNum() const
{
    return waitRebootNum_;
}

void CollectInstanceStatisticResponse::setWaitRebootNum(int32_t value)
{
    waitRebootNum_ = value;
    waitRebootNumIsSet_ = true;
}

bool CollectInstanceStatisticResponse::waitRebootNumIsSet() const
{
    return waitRebootNumIsSet_;
}

void CollectInstanceStatisticResponse::unsetwaitRebootNum()
{
    waitRebootNumIsSet_ = false;
}

}
}
}
}
}


