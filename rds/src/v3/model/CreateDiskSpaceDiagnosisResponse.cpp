

#include "huaweicloud/rds/v3/model/CreateDiskSpaceDiagnosisResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDiskSpaceDiagnosisResponse::CreateDiskSpaceDiagnosisResponse()
{
    result_ = "";
    resultIsSet_ = false;
}

CreateDiskSpaceDiagnosisResponse::~CreateDiskSpaceDiagnosisResponse() = default;

void CreateDiskSpaceDiagnosisResponse::validate()
{
}

web::json::value CreateDiskSpaceDiagnosisResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool CreateDiskSpaceDiagnosisResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string CreateDiskSpaceDiagnosisResponse::getResult() const
{
    return result_;
}

void CreateDiskSpaceDiagnosisResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateDiskSpaceDiagnosisResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateDiskSpaceDiagnosisResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


