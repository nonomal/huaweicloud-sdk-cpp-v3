

#include "huaweicloud/rds/v3/model/ListOperateRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListOperateRecordResponse::ListOperateRecordResponse()
{
    count_ = 0;
    countIsSet_ = false;
    tracesIsSet_ = false;
    allOperateTypeIsSet_ = false;
}

ListOperateRecordResponse::~ListOperateRecordResponse() = default;

void ListOperateRecordResponse::validate()
{
}

web::json::value ListOperateRecordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(tracesIsSet_) {
        val[utility::conversions::to_string_t("traces")] = ModelBase::toJson(traces_);
    }
    if(allOperateTypeIsSet_) {
        val[utility::conversions::to_string_t("all_operate_type")] = ModelBase::toJson(allOperateType_);
    }

    return val;
}
bool ListOperateRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traces"));
        if(!fieldValue.is_null())
        {
            std::vector<OperateRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraces(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all_operate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_operate_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllOperateType(refVal);
        }
    }
    return ok;
}


int32_t ListOperateRecordResponse::getCount() const
{
    return count_;
}

void ListOperateRecordResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListOperateRecordResponse::countIsSet() const
{
    return countIsSet_;
}

void ListOperateRecordResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<OperateRecord>& ListOperateRecordResponse::getTraces()
{
    return traces_;
}

void ListOperateRecordResponse::setTraces(const std::vector<OperateRecord>& value)
{
    traces_ = value;
    tracesIsSet_ = true;
}

bool ListOperateRecordResponse::tracesIsSet() const
{
    return tracesIsSet_;
}

void ListOperateRecordResponse::unsettraces()
{
    tracesIsSet_ = false;
}

std::vector<std::string>& ListOperateRecordResponse::getAllOperateType()
{
    return allOperateType_;
}

void ListOperateRecordResponse::setAllOperateType(const std::vector<std::string>& value)
{
    allOperateType_ = value;
    allOperateTypeIsSet_ = true;
}

bool ListOperateRecordResponse::allOperateTypeIsSet() const
{
    return allOperateTypeIsSet_;
}

void ListOperateRecordResponse::unsetallOperateType()
{
    allOperateTypeIsSet_ = false;
}

}
}
}
}
}


