
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetInstanceScheduleEventsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetInstanceScheduleEventsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/EventJobResult.h>
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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SetInstanceScheduleEventsResponse
    : public ModelBase, public HttpResponse
{
public:
    SetInstanceScheduleEventsResponse();
    virtual ~SetInstanceScheduleEventsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetInstanceScheduleEventsResponse members

    /// <summary>
    /// **参数解释**：  设置事件执行策略响应结果。
    /// </summary>

    std::vector<EventJobResult>& getResults();
    bool resultsIsSet() const;
    void unsetresults();
    void setResults(const std::vector<EventJobResult>& value);


protected:
    std::vector<EventJobResult> results_;
    bool resultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SetInstanceScheduleEventsResponse_H_
