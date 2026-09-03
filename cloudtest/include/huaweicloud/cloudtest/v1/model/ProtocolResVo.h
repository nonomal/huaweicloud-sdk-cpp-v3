
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProtocolResVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProtocolResVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ProtocolResVo
    : public ModelBase
{
public:
    ProtocolResVo();
    virtual ~ProtocolResVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProtocolResVo members

    /// <summary>
    /// 期望响应的状态码
    /// </summary>

    std::vector<int32_t>& getResponseCode();
    bool responseCodeIsSet() const;
    void unsetresponseCode();
    void setResponseCode(std::vector<int32_t> value);

    /// <summary>
    /// 期望响应时间
    /// </summary>

    std::string getResponseTime() const;
    bool responseTimeIsSet() const;
    void unsetresponseTime();
    void setResponseTime(const std::string& value);


protected:
    std::vector<int32_t> responseCode_;
    bool responseCodeIsSet_;
    std::string responseTime_;
    bool responseTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProtocolResVo_H_
