

#include "huaweicloud/gaussdb/v3/model/SetInstanceScheduleEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetInstanceScheduleEventsResponse::SetInstanceScheduleEventsResponse()
{
    resultsIsSet_ = false;
}

SetInstanceScheduleEventsResponse::~SetInstanceScheduleEventsResponse() = default;

void SetInstanceScheduleEventsResponse::validate()
{
}

web::json::value SetInstanceScheduleEventsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}
bool SetInstanceScheduleEventsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<EventJobResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


std::vector<EventJobResult>& SetInstanceScheduleEventsResponse::getResults()
{
    return results_;
}

void SetInstanceScheduleEventsResponse::setResults(const std::vector<EventJobResult>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool SetInstanceScheduleEventsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void SetInstanceScheduleEventsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


