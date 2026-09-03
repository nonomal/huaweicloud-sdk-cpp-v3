

#include "huaweicloud/gaussdb/v3/model/ShowKernelUpgradeCheckResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowKernelUpgradeCheckResultResponse::ShowKernelUpgradeCheckResultResponse()
{
    upgradePrecheckResult_ = "";
    upgradePrecheckResultIsSet_ = false;
    updatedAt_ = 0L;
    updatedAtIsSet_ = false;
    upgradePrecheckDetailIsSet_ = false;
}

ShowKernelUpgradeCheckResultResponse::~ShowKernelUpgradeCheckResultResponse() = default;

void ShowKernelUpgradeCheckResultResponse::validate()
{
}

web::json::value ShowKernelUpgradeCheckResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(upgradePrecheckResultIsSet_) {
        val[utility::conversions::to_string_t("upgrade_precheck_result")] = ModelBase::toJson(upgradePrecheckResult_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(upgradePrecheckDetailIsSet_) {
        val[utility::conversions::to_string_t("upgrade_precheck_detail")] = ModelBase::toJson(upgradePrecheckDetail_);
    }

    return val;
}
bool ShowKernelUpgradeCheckResultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("upgrade_precheck_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_precheck_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradePrecheckResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_precheck_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_precheck_detail"));
        if(!fieldValue.is_null())
        {
            std::vector<UpgradeDatabasePrecheckResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradePrecheckDetail(refVal);
        }
    }
    return ok;
}


std::string ShowKernelUpgradeCheckResultResponse::getUpgradePrecheckResult() const
{
    return upgradePrecheckResult_;
}

void ShowKernelUpgradeCheckResultResponse::setUpgradePrecheckResult(const std::string& value)
{
    upgradePrecheckResult_ = value;
    upgradePrecheckResultIsSet_ = true;
}

bool ShowKernelUpgradeCheckResultResponse::upgradePrecheckResultIsSet() const
{
    return upgradePrecheckResultIsSet_;
}

void ShowKernelUpgradeCheckResultResponse::unsetupgradePrecheckResult()
{
    upgradePrecheckResultIsSet_ = false;
}

int64_t ShowKernelUpgradeCheckResultResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowKernelUpgradeCheckResultResponse::setUpdatedAt(int64_t value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowKernelUpgradeCheckResultResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowKernelUpgradeCheckResultResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::vector<UpgradeDatabasePrecheckResult>& ShowKernelUpgradeCheckResultResponse::getUpgradePrecheckDetail()
{
    return upgradePrecheckDetail_;
}

void ShowKernelUpgradeCheckResultResponse::setUpgradePrecheckDetail(const std::vector<UpgradeDatabasePrecheckResult>& value)
{
    upgradePrecheckDetail_ = value;
    upgradePrecheckDetailIsSet_ = true;
}

bool ShowKernelUpgradeCheckResultResponse::upgradePrecheckDetailIsSet() const
{
    return upgradePrecheckDetailIsSet_;
}

void ShowKernelUpgradeCheckResultResponse::unsetupgradePrecheckDetail()
{
    upgradePrecheckDetailIsSet_ = false;
}

}
}
}
}
}


