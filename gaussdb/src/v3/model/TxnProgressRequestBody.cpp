

#include "huaweicloud/gaussdb/v3/model/TxnProgressRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TxnProgressRequestBody::TxnProgressRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    transactionIdsIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

TxnProgressRequestBody::~TxnProgressRequestBody() = default;

void TxnProgressRequestBody::validate()
{
}

web::json::value TxnProgressRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(transactionIdsIsSet_) {
        val[utility::conversions::to_string_t("transaction_ids")] = ModelBase::toJson(transactionIds_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool TxnProgressRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transaction_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transaction_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransactionIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string TxnProgressRequestBody::getAction() const
{
    return action_;
}

void TxnProgressRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool TxnProgressRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void TxnProgressRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<std::string>& TxnProgressRequestBody::getTransactionIds()
{
    return transactionIds_;
}

void TxnProgressRequestBody::setTransactionIds(const std::vector<std::string>& value)
{
    transactionIds_ = value;
    transactionIdsIsSet_ = true;
}

bool TxnProgressRequestBody::transactionIdsIsSet() const
{
    return transactionIdsIsSet_;
}

void TxnProgressRequestBody::unsettransactionIds()
{
    transactionIdsIsSet_ = false;
}

int32_t TxnProgressRequestBody::getLimit() const
{
    return limit_;
}

void TxnProgressRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool TxnProgressRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void TxnProgressRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t TxnProgressRequestBody::getOffset() const
{
    return offset_;
}

void TxnProgressRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool TxnProgressRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void TxnProgressRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


