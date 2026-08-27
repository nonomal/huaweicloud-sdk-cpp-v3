
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListOnlineDdlTaskRecordsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListOnlineDdlTaskRecordsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/RecordItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListOnlineDdlTaskRecordsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListOnlineDdlTaskRecordsResponse();
    virtual ~ListOnlineDdlTaskRecordsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOnlineDdlTaskRecordsResponse members

    /// <summary>
    /// **参数解释**：  无锁变更任务详情列表。
    /// </summary>

    std::vector<RecordItem>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<RecordItem>& value);

    /// <summary>
    /// **参数解释**：   无锁变更任务记录总数，整数。  **取值范围**：   ≥0。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<RecordItem> records_;
    bool recordsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListOnlineDdlTaskRecordsResponse_H_
