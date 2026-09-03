
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_Warn_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_Warn_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  Warn
    : public ModelBase
{
public:
    Warn();
    virtual ~Warn();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Warn members

    /// <summary>
    /// 
    /// </summary>

    std::string getWarnCode() const;
    bool warnCodeIsSet() const;
    void unsetwarnCode();
    void setWarnCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getWarnMsg() const;
    bool warnMsgIsSet() const;
    void unsetwarnMsg();
    void setWarnMsg(const std::string& value);


protected:
    std::string warnCode_;
    bool warnCodeIsSet_;
    std::string warnMsg_;
    bool warnMsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_Warn_H_
