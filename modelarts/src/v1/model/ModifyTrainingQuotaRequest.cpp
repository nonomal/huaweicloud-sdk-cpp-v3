

#include "huaweicloud/modelarts/v1/model/ModifyTrainingQuotaRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ModifyTrainingQuotaRequest::ModifyTrainingQuotaRequest()
{
    userId_ = "";
    userIdIsSet_ = false;
    quotasIsSet_ = false;
}

ModifyTrainingQuotaRequest::~ModifyTrainingQuotaRequest() = default;

void ModifyTrainingQuotaRequest::validate()
{
}

web::json::value ModifyTrainingQuotaRequest::toJson() const
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
bool ModifyTrainingQuotaRequest::fromJson(const web::json::value& val)
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


std::string ModifyTrainingQuotaRequest::getUserId() const
{
    return userId_;
}

void ModifyTrainingQuotaRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ModifyTrainingQuotaRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void ModifyTrainingQuotaRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

std::vector<ModifyTrainingQuotaItem>& ModifyTrainingQuotaRequest::getQuotas()
{
    return quotas_;
}

void ModifyTrainingQuotaRequest::setQuotas(const std::vector<ModifyTrainingQuotaItem>& value)
{
    quotas_ = value;
    quotasIsSet_ = true;
}

bool ModifyTrainingQuotaRequest::quotasIsSet() const
{
    return quotasIsSet_;
}

void ModifyTrainingQuotaRequest::unsetquotas()
{
    quotasIsSet_ = false;
}

}
}
}
}
}


