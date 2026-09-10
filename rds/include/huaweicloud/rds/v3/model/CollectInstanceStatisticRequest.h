
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CollectInstanceStatisticRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CollectInstanceStatisticRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CollectInstanceStatisticRequest
    : public ModelBase
{
public:
    CollectInstanceStatisticRequest();
    virtual ~CollectInstanceStatisticRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CollectInstanceStatisticRequest members

    /// <summary>
    /// 语言。默认en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 引擎类型
    /// </summary>

    std::string getEngine() const;
    bool engineIsSet() const;
    void unsetengine();
    void setEngine(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string engine_;
    bool engineIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CollectInstanceStatisticRequest& dereference_from_shared_ptr(std::shared_ptr<CollectInstanceStatisticRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CollectInstanceStatisticRequest_H_
