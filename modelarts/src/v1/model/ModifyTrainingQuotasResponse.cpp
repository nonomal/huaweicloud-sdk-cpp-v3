

#include "huaweicloud/modelarts/v1/model/ModifyTrainingQuotasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ModifyTrainingQuotasResponse::ModifyTrainingQuotasResponse()
{
    userId_ = "";
    userIdIsSet_ = false;
    quotasIsSet_ = false;
}

ModifyTrainingQuotasResponse::~ModifyTrainingQuotasResponse() = default;

void ModifyTrainingQuotasResponse::validate()
{
}

web::json::value ModifyTrainingQuotasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(quotasIsSet_) {
        val[utility::conversions::to_string_t("quotas")] = ModelBase::toJson(quotas_);
    }

    return val;
}
bool ModifyTrainingQuotasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quotas"));
        if(!fieldValue.is_null())
        {
            std::vector<ModifyTrainingQuotaItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuotas(refVal);
        }
    }
    return ok;
}


std::string ModifyTrainingQuotasResponse::getUserId() const
{
    return userId_;
}

void ModifyTrainingQuotasResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ModifyTrainingQuotasResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void ModifyTrainingQuotasResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

std::vector<ModifyTrainingQuotaItem>& ModifyTrainingQuotasResponse::getQuotas()
{
    return quotas_;
}

void ModifyTrainingQuotasResponse::setQuotas(const std::vector<ModifyTrainingQuotaItem>& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ModifyTrainingQuotasResponse::quotasIsSet() const
{
    return quotasIsSet_;
}

void ModifyTrainingQuotasResponse::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


