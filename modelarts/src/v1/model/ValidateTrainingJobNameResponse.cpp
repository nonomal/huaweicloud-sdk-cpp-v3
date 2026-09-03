

#include "huaweicloud/modelarts/v1/model/ValidateTrainingJobNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ValidateTrainingJobNameResponse::ValidateTrainingJobNameResponse()
{
    isDuplicate_ = false;
    isDuplicateIsSet_ = false;
}

ValidateTrainingJobNameResponse::~ValidateTrainingJobNameResponse() = default;

void ValidateTrainingJobNameResponse::validate()
{
}

web::json::value ValidateTrainingJobNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isDuplicateIsSet_) {
        val[utility::conversions::to_string_t("is_duplicate")] = ModelBase::toJson(isDuplicate_);
    }

    return val;
}
bool ValidateTrainingJobNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_duplicate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_duplicate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDuplicate(refVal);
        }
    }
    return ok;
}


bool ValidateTrainingJobNameResponse::isIsDuplicate() const
{
    return isDuplicate_;
}

void ValidateTrainingJobNameResponse::setIsDuplicate(bool value)
{
    isDuplicate_ = value;
    isDuplicateIsSet_ = true;
}

bool ValidateTrainingJobNameResponse::isDuplicateIsSet() const
{
    return isDuplicateIsSet_;
}

void ValidateTrainingJobNameResponse::unsetisDuplicate()
{
    isDuplicateIsSet_ = false;
}

}
}
}
}
}


