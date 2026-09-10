
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ResourceUsage_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ResourceUsage_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  ResourceUsage
    : public ModelBase
{
public:
    ResourceUsage();
    virtual ~ResourceUsage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceUsage members

    /// <summary>
    /// 当前使用量。
    /// </summary>

    float getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(float value);

    /// <summary>
    /// 总量。
    /// </summary>

    float getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(float value);

    /// <summary>
    /// 对比值。
    /// </summary>

    float getContrast() const;
    bool contrastIsSet() const;
    void unsetcontrast();
    void setContrast(float value);

    /// <summary>
    /// 单位。
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);


protected:
    float value_;
    bool valueIsSet_;
    float total_;
    bool totalIsSet_;
    float contrast_;
    bool contrastIsSet_;
    std::string unit_;
    bool unitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ResourceUsage_H_
