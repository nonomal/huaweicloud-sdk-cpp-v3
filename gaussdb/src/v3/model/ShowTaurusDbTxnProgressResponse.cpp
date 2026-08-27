

#include "huaweicloud/gaussdb/v3/model/ShowTaurusDbTxnProgressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowTaurusDbTxnProgressResponse::ShowTaurusDbTxnProgressResponse()
{
    transactionsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowTaurusDbTxnProgressResponse::~ShowTaurusDbTxnProgressResponse() = default;

void ShowTaurusDbTxnProgressResponse::validate()
{
}

web::json::value ShowTaurusDbTxnProgressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transactionsIsSet_) {
        val[utility::conversions::to_string_t("transactions")] = ModelBase::toJson(transactions_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowTaurusDbTxnProgressResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("transactions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transactions"));
        if(!fieldValue.is_null())
        {
            std::vector<TxnItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransactions(refVal);
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


std::vector<TxnItem>& ShowTaurusDbTxnProgressResponse::getTransactions()
{
    return transactions_;
}

void ShowTaurusDbTxnProgressResponse::setTransactions(const std::vector<TxnItem>& value)
{
    transactions_ = value;
    transactionsIsSet_ = true;
}

bool ShowTaurusDbTxnProgressResponse::transactionsIsSet() const
{
    return transactionsIsSet_;
}

void ShowTaurusDbTxnProgressResponse::unsettransactions()
{
    transactionsIsSet_ = false;
}

int32_t ShowTaurusDbTxnProgressResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowTaurusDbTxnProgressResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowTaurusDbTxnProgressResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowTaurusDbTxnProgressResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


