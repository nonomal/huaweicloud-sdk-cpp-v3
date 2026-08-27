
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TxnItem_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TxnItem_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 单个事务的进度信息。 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TxnItem
    : public ModelBase
{
public:
    TxnItem();
    virtual ~TxnItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TxnItem members

    /// <summary>
    /// **参数解释**： 事务的唯一标识。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTrxId() const;
    bool trxIdIsSet() const;
    void unsettrxId();
    void setTrxId(const std::string& value);

    /// <summary>
    /// **参数解释**： 预计剩余完成时间（秒）。 **取值范围**： ＞0。 
    /// </summary>

    int64_t getEstimatedRemainingTime() const;
    bool estimatedRemainingTimeIsSet() const;
    void unsetestimatedRemainingTime();
    void setEstimatedRemainingTime(int64_t value);

    /// <summary>
    /// **参数解释**： 用户会话线程ID。 **取值范围**： 不涉及。
    /// </summary>

    int64_t getTrxMysqlThreadId() const;
    bool trxMysqlThreadIdIsSet() const;
    void unsettrxMysqlThreadId();
    void setTrxMysqlThreadId(int64_t value);

    /// <summary>
    /// **参数解释**： 额外信息，通常是正在执行的语句。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getTrxQuery() const;
    bool trxQueryIsSet() const;
    void unsettrxQuery();
    void setTrxQuery(const std::string& value);

    /// <summary>
    /// **参数解释**： 事务开始时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getTrxStarted() const;
    bool trxStartedIsSet() const;
    void unsettrxStarted();
    void setTrxStarted(const std::string& value);

    /// <summary>
    /// **参数解释**： 事务修改的行数。 **取值范围**： ≥0。 
    /// </summary>

    int64_t getTrxRowsModified() const;
    bool trxRowsModifiedIsSet() const;
    void unsettrxRowsModified();
    void setTrxRowsModified(int64_t value);


protected:
    std::string trxId_;
    bool trxIdIsSet_;
    int64_t estimatedRemainingTime_;
    bool estimatedRemainingTimeIsSet_;
    int64_t trxMysqlThreadId_;
    bool trxMysqlThreadIdIsSet_;
    std::string trxQuery_;
    bool trxQueryIsSet_;
    std::string trxStarted_;
    bool trxStartedIsSet_;
    int64_t trxRowsModified_;
    bool trxRowsModifiedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TxnItem_H_
