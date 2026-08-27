

#include "huaweicloud/gaussdb/v3/model/ListOnlineDdlTaskRecordsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListOnlineDdlTaskRecordsResponse::ListOnlineDdlTaskRecordsResponse()
{
    recordsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListOnlineDdlTaskRecordsResponse::~ListOnlineDdlTaskRecordsResponse() = default;

void ListOnlineDdlTaskRecordsResponse::validate()
{
}

web::json::value ListOnlineDdlTaskRecordsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordsIsSet_) {
        val[utility::conversions::to_string_t("records")] = ModelBase::toJson(records_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListOnlineDdlTaskRecordsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("records"));
        if(!fieldValue.is_null())
        {
            std::vector<RecordItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<RecordItem>& ListOnlineDdlTaskRecordsResponse::getRecords()
{
    return records_;
}

void ListOnlineDdlTaskRecordsResponse::setRecords(const std::vector<RecordItem>& value)
{
    records_ = value;
    recordsIsSet_ = true;
}

bool ListOnlineDdlTaskRecordsResponse::recordsIsSet() const
{
    return recordsIsSet_;
}

void ListOnlineDdlTaskRecordsResponse::unsetrecords()
{
    recordsIsSet_ = false;
}

int32_t ListOnlineDdlTaskRecordsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListOnlineDdlTaskRecordsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListOnlineDdlTaskRecordsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListOnlineDdlTaskRecordsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


