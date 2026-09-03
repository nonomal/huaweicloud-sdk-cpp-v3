

#include "huaweicloud/rds/v3/model/DiskSpaceDiagnosisResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DiskSpaceDiagnosisResult::DiskSpaceDiagnosisResult()
{
    code_ = "";
    codeIsSet_ = false;
    detail_ = "";
    detailIsSet_ = false;
    affect_ = 0;
    affectIsSet_ = false;
}

DiskSpaceDiagnosisResult::~DiskSpaceDiagnosisResult() = default;

void DiskSpaceDiagnosisResult::validate()
{
}

web::json::value DiskSpaceDiagnosisResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }
    if(affectIsSet_) {
        val[utility::conversions::to_string_t("affect")] = ModelBase::toJson(affect_);
    }

    return val;
}
bool DiskSpaceDiagnosisResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affect"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffect(refVal);
        }
    }
    return ok;
}


std::string DiskSpaceDiagnosisResult::getCode() const
{
    return code_;
}

void DiskSpaceDiagnosisResult::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool DiskSpaceDiagnosisResult::codeIsSet() const
{
    return codeIsSet_;
}

void DiskSpaceDiagnosisResult::unsetcode()
{
    codeIsSet_ = false;
}

std::string DiskSpaceDiagnosisResult::getDetail() const
{
    return detail_;
}

void DiskSpaceDiagnosisResult::setDetail(const std::string& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool DiskSpaceDiagnosisResult::detailIsSet() const
{
    return detailIsSet_;
}

void DiskSpaceDiagnosisResult::unsetdetail()
{
    detailIsSet_ = false;
}

int32_t DiskSpaceDiagnosisResult::getAffect() const
{
    return affect_;
}

void DiskSpaceDiagnosisResult::setAffect(int32_t value)
{
    affect_ = value;
    affectIsSet_ = true;
}

bool DiskSpaceDiagnosisResult::affectIsSet() const
{
    return affectIsSet_;
}

void DiskSpaceDiagnosisResult::unsetaffect()
{
    affectIsSet_ = false;
}

}
}
}
}
}


