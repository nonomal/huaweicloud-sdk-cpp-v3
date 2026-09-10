

#include "huaweicloud/rds/v3/model/ShowRiskInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowRiskInfoRequest::ShowRiskInfoRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowRiskInfoRequest::~ShowRiskInfoRequest() = default;

void ShowRiskInfoRequest::validate()
{
}

web::json::value ShowRiskInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowRiskInfoRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowRiskInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowRiskInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRiskInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRiskInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


