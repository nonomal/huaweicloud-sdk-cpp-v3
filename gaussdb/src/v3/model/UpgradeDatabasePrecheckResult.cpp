

#include "huaweicloud/gaussdb/v3/model/UpgradeDatabasePrecheckResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradeDatabasePrecheckResult::UpgradeDatabasePrecheckResult()
{
    checkItem_ = "";
    checkItemIsSet_ = false;
    checkDescription_ = "";
    checkDescriptionIsSet_ = false;
    checkObject_ = "";
    checkObjectIsSet_ = false;
    checkStatus_ = "";
    checkStatusIsSet_ = false;
}

UpgradeDatabasePrecheckResult::~UpgradeDatabasePrecheckResult() = default;

void UpgradeDatabasePrecheckResult::validate()
{
}

web::json::value UpgradeDatabasePrecheckResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkItemIsSet_) {
        val[utility::conversions::to_string_t("check_item")] = ModelBase::toJson(checkItem_);
    }
    if(checkDescriptionIsSet_) {
        val[utility::conversions::to_string_t("check_description")] = ModelBase::toJson(checkDescription_);
    }
    if(checkObjectIsSet_) {
        val[utility::conversions::to_string_t("check_object")] = ModelBase::toJson(checkObject_);
    }
    if(checkStatusIsSet_) {
        val[utility::conversions::to_string_t("check_status")] = ModelBase::toJson(checkStatus_);
    }

    return val;
}
bool UpgradeDatabasePrecheckResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("check_item"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_item"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckItem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_object"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckObject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckStatus(refVal);
        }
    }
    return ok;
}


std::string UpgradeDatabasePrecheckResult::getCheckItem() const
{
    return checkItem_;
}

void UpgradeDatabasePrecheckResult::setCheckItem(const std::string& value)
{
    checkItem_ = value;
    checkItemIsSet_ = true;
}

bool UpgradeDatabasePrecheckResult::checkItemIsSet() const
{
    return checkItemIsSet_;
}

void UpgradeDatabasePrecheckResult::unsetcheckItem()
{
    checkItemIsSet_ = false;
}

std::string UpgradeDatabasePrecheckResult::getCheckDescription() const
{
    return checkDescription_;
}

void UpgradeDatabasePrecheckResult::setCheckDescription(const std::string& value)
{
    checkDescription_ = value;
    checkDescriptionIsSet_ = true;
}

bool UpgradeDatabasePrecheckResult::checkDescriptionIsSet() const
{
    return checkDescriptionIsSet_;
}

void UpgradeDatabasePrecheckResult::unsetcheckDescription()
{
    checkDescriptionIsSet_ = false;
}

std::string UpgradeDatabasePrecheckResult::getCheckObject() const
{
    return checkObject_;
}

void UpgradeDatabasePrecheckResult::setCheckObject(const std::string& value)
{
    checkObject_ = value;
    checkObjectIsSet_ = true;
}

bool UpgradeDatabasePrecheckResult::checkObjectIsSet() const
{
    return checkObjectIsSet_;
}

void UpgradeDatabasePrecheckResult::unsetcheckObject()
{
    checkObjectIsSet_ = false;
}

std::string UpgradeDatabasePrecheckResult::getCheckStatus() const
{
    return checkStatus_;
}

void UpgradeDatabasePrecheckResult::setCheckStatus(const std::string& value)
{
    checkStatus_ = value;
    checkStatusIsSet_ = true;
}

bool UpgradeDatabasePrecheckResult::checkStatusIsSet() const
{
    return checkStatusIsSet_;
}

void UpgradeDatabasePrecheckResult::unsetcheckStatus()
{
    checkStatusIsSet_ = false;
}

}
}
}
}
}


