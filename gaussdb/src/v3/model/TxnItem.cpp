

#include "huaweicloud/gaussdb/v3/model/TxnItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TxnItem::TxnItem()
{
    trxId_ = "";
    trxIdIsSet_ = false;
    estimatedRemainingTime_ = 0L;
    estimatedRemainingTimeIsSet_ = false;
    trxMysqlThreadId_ = 0L;
    trxMysqlThreadIdIsSet_ = false;
    trxQuery_ = "";
    trxQueryIsSet_ = false;
    trxStarted_ = "";
    trxStartedIsSet_ = false;
    trxRowsModified_ = 0L;
    trxRowsModifiedIsSet_ = false;
}

TxnItem::~TxnItem() = default;

void TxnItem::validate()
{
}

web::json::value TxnItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trxIdIsSet_) {
        val[utility::conversions::to_string_t("trx_id")] = ModelBase::toJson(trxId_);
    }
    if(estimatedRemainingTimeIsSet_) {
        val[utility::conversions::to_string_t("estimated_remaining_time")] = ModelBase::toJson(estimatedRemainingTime_);
    }
    if(trxMysqlThreadIdIsSet_) {
        val[utility::conversions::to_string_t("trx_mysql_thread_id")] = ModelBase::toJson(trxMysqlThreadId_);
    }
    if(trxQueryIsSet_) {
        val[utility::conversions::to_string_t("trx_query")] = ModelBase::toJson(trxQuery_);
    }
    if(trxStartedIsSet_) {
        val[utility::conversions::to_string_t("trx_started")] = ModelBase::toJson(trxStarted_);
    }
    if(trxRowsModifiedIsSet_) {
        val[utility::conversions::to_string_t("trx_rows_modified")] = ModelBase::toJson(trxRowsModified_);
    }

    return val;
}
bool TxnItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trx_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trx_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrxId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("estimated_remaining_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("estimated_remaining_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEstimatedRemainingTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trx_mysql_thread_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trx_mysql_thread_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrxMysqlThreadId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trx_query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trx_query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrxQuery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trx_started"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trx_started"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrxStarted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trx_rows_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trx_rows_modified"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrxRowsModified(refVal);
        }
    }
    return ok;
}


std::string TxnItem::getTrxId() const
{
    return trxId_;
}

void TxnItem::setTrxId(const std::string& value)
{
    trxId_ = value;
    trxIdIsSet_ = true;
}

bool TxnItem::trxIdIsSet() const
{
    return trxIdIsSet_;
}

void TxnItem::unsettrxId()
{
    trxIdIsSet_ = false;
}

int64_t TxnItem::getEstimatedRemainingTime() const
{
    return estimatedRemainingTime_;
}

void TxnItem::setEstimatedRemainingTime(int64_t value)
{
    estimatedRemainingTime_ = value;
    estimatedRemainingTimeIsSet_ = true;
}

bool TxnItem::estimatedRemainingTimeIsSet() const
{
    return estimatedRemainingTimeIsSet_;
}

void TxnItem::unsetestimatedRemainingTime()
{
    estimatedRemainingTimeIsSet_ = false;
}

int64_t TxnItem::getTrxMysqlThreadId() const
{
    return trxMysqlThreadId_;
}

void TxnItem::setTrxMysqlThreadId(int64_t value)
{
    trxMysqlThreadId_ = value;
    trxMysqlThreadIdIsSet_ = true;
}

bool TxnItem::trxMysqlThreadIdIsSet() const
{
    return trxMysqlThreadIdIsSet_;
}

void TxnItem::unsettrxMysqlThreadId()
{
    trxMysqlThreadIdIsSet_ = false;
}

std::string TxnItem::getTrxQuery() const
{
    return trxQuery_;
}

void TxnItem::setTrxQuery(const std::string& value)
{
    trxQuery_ = value;
    trxQueryIsSet_ = true;
}

bool TxnItem::trxQueryIsSet() const
{
    return trxQueryIsSet_;
}

void TxnItem::unsettrxQuery()
{
    trxQueryIsSet_ = false;
}

std::string TxnItem::getTrxStarted() const
{
    return trxStarted_;
}

void TxnItem::setTrxStarted(const std::string& value)
{
    trxStarted_ = value;
    trxStartedIsSet_ = true;
}

bool TxnItem::trxStartedIsSet() const
{
    return trxStartedIsSet_;
}

void TxnItem::unsettrxStarted()
{
    trxStartedIsSet_ = false;
}

int64_t TxnItem::getTrxRowsModified() const
{
    return trxRowsModified_;
}

void TxnItem::setTrxRowsModified(int64_t value)
{
    trxRowsModified_ = value;
    trxRowsModifiedIsSet_ = true;
}

bool TxnItem::trxRowsModifiedIsSet() const
{
    return trxRowsModifiedIsSet_;
}

void TxnItem::unsettrxRowsModified()
{
    trxRowsModifiedIsSet_ = false;
}

}
}
}
}
}


