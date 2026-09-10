
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListOperateRecordResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListOperateRecordResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/OperateRecord.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListOperateRecordResponse
    : public ModelBase, public HttpResponse
{
public:
    ListOperateRecordResponse();
    virtual ~ListOperateRecordResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOperateRecordResponse members

    /// <summary>
    /// 本次查询事件列表返回的事件记录的总条数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 本次查询事件列表返回的事件记录
    /// </summary>

    std::vector<OperateRecord>& getTraces();
    bool tracesIsSet() const;
    void unsettraces();
    void setTraces(const std::vector<OperateRecord>& value);

    /// <summary>
    /// 所有事件类型
    /// </summary>

    std::vector<std::string>& getAllOperateType();
    bool allOperateTypeIsSet() const;
    void unsetallOperateType();
    void setAllOperateType(const std::vector<std::string>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<OperateRecord> traces_;
    bool tracesIsSet_;
    std::vector<std::string> allOperateType_;
    bool allOperateTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListOperateRecordResponse_H_
