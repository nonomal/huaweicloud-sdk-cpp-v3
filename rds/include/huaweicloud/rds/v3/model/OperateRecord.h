
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_OperateRecord_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_OperateRecord_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  OperateRecord
    : public ModelBase
{
public:
    OperateRecord();
    virtual ~OperateRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateRecord members

    /// <summary>
    /// 操作类型
    /// </summary>

    std::string getOperateType() const;
    bool operateTypeIsSet() const;
    void unsetoperateType();
    void setOperateType(const std::string& value);

    /// <summary>
    /// 用户名称
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 操作时间
    /// </summary>

    int64_t getOperateTime() const;
    bool operateTimeIsSet() const;
    void unsetoperateTime();
    void setOperateTime(int64_t value);

    /// <summary>
    /// 事件等级
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);


protected:
    std::string operateType_;
    bool operateTypeIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    int64_t operateTime_;
    bool operateTimeIsSet_;
    std::string level_;
    bool levelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_OperateRecord_H_
