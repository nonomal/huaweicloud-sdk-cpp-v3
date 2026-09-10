
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CollectInstanceStatisticResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CollectInstanceStatisticResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_RDS_V3_EXPORT  CollectInstanceStatisticResponse
    : public ModelBase, public HttpResponse
{
public:
    CollectInstanceStatisticResponse();
    virtual ~CollectInstanceStatisticResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CollectInstanceStatisticResponse members

    /// <summary>
    /// 实例总数
    /// </summary>

    int32_t getTotalNum() const;
    bool totalNumIsSet() const;
    void unsettotalNum();
    void setTotalNum(int32_t value);

    /// <summary>
    /// 异常实例数
    /// </summary>

    int32_t getAbnormalNum() const;
    bool abnormalNumIsSet() const;
    void unsetabnormalNum();
    void setAbnormalNum(int32_t value);

    /// <summary>
    /// 磁盘不足实例数
    /// </summary>

    int32_t getDiskFullNum() const;
    bool diskFullNumIsSet() const;
    void unsetdiskFullNum();
    void setDiskFullNum(int32_t value);

    /// <summary>
    /// 冻结实例数
    /// </summary>

    int32_t getFrozenNum() const;
    bool frozenNumIsSet() const;
    void unsetfrozenNum();
    void setFrozenNum(int32_t value);

    /// <summary>
    /// 运行中实例数
    /// </summary>

    int32_t getNormalNum() const;
    bool normalNumIsSet() const;
    void unsetnormalNum();
    void setNormalNum(int32_t value);

    /// <summary>
    /// 等待重启实例数
    /// </summary>

    int32_t getWaitRebootNum() const;
    bool waitRebootNumIsSet() const;
    void unsetwaitRebootNum();
    void setWaitRebootNum(int32_t value);


protected:
    int32_t totalNum_;
    bool totalNumIsSet_;
    int32_t abnormalNum_;
    bool abnormalNumIsSet_;
    int32_t diskFullNum_;
    bool diskFullNumIsSet_;
    int32_t frozenNum_;
    bool frozenNumIsSet_;
    int32_t normalNum_;
    bool normalNumIsSet_;
    int32_t waitRebootNum_;
    bool waitRebootNumIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CollectInstanceStatisticResponse_H_
