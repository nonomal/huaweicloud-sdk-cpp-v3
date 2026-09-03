

#include "huaweicloud/rds/v3/model/ShowBackupUsageExceededInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowBackupUsageExceededInstancesRequest::ShowBackupUsageExceededInstancesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowBackupUsageExceededInstancesRequest::~ShowBackupUsageExceededInstancesRequest() = default;

void ShowBackupUsageExceededInstancesRequest::validate()
{
}

web::json::value ShowBackupUsageExceededInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowBackupUsageExceededInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ShowBackupUsageExceededInstancesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowBackupUsageExceededInstancesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowBackupUsageExceededInstancesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowBackupUsageExceededInstancesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ShowBackupUsageExceededInstancesRequest::getLimit() const
{
    return limit_;
}

void ShowBackupUsageExceededInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowBackupUsageExceededInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowBackupUsageExceededInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowBackupUsageExceededInstancesRequest::getOffset() const
{
    return offset_;
}

void ShowBackupUsageExceededInstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowBackupUsageExceededInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowBackupUsageExceededInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


