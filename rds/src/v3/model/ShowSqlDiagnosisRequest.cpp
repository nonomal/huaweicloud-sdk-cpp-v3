

#include "huaweicloud/rds/v3/model/ShowSqlDiagnosisRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowSqlDiagnosisRequest::ShowSqlDiagnosisRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    subcategory_ = "";
    subcategoryIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ShowSqlDiagnosisRequest::~ShowSqlDiagnosisRequest() = default;

void ShowSqlDiagnosisRequest::validate()
{
}

web::json::value ShowSqlDiagnosisRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(subcategoryIsSet_) {
        val[utility::conversions::to_string_t("subcategory")] = ModelBase::toJson(subcategory_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowSqlDiagnosisRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subcategory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subcategory"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubcategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ShowSqlDiagnosisRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSqlDiagnosisRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSqlDiagnosisRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSqlDiagnosisRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowSqlDiagnosisRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSqlDiagnosisRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSqlDiagnosisRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSqlDiagnosisRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSqlDiagnosisRequest::getCategory() const
{
    return category_;
}

void ShowSqlDiagnosisRequest::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ShowSqlDiagnosisRequest::categoryIsSet() const
{
    return categoryIsSet_;
}

void ShowSqlDiagnosisRequest::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ShowSqlDiagnosisRequest::getSubcategory() const
{
    return subcategory_;
}

void ShowSqlDiagnosisRequest::setSubcategory(const std::string& value)
{
    subcategory_ = value;
    subcategoryIsSet_ = true;
}

bool ShowSqlDiagnosisRequest::subcategoryIsSet() const
{
    return subcategoryIsSet_;
}

void ShowSqlDiagnosisRequest::unsetsubcategory()
{
    subcategoryIsSet_ = false;
}

std::string ShowSqlDiagnosisRequest::getOffset() const
{
    return offset_;
}

void ShowSqlDiagnosisRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowSqlDiagnosisRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowSqlDiagnosisRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowSqlDiagnosisRequest::getLimit() const
{
    return limit_;
}

void ShowSqlDiagnosisRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowSqlDiagnosisRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowSqlDiagnosisRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


