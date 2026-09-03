
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProtocolTestVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProtocolTestVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/HttpVo.h>
#include <huaweicloud/cloudtest/v1/model/PingVo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ProtocolTestVo
    : public ModelBase
{
public:
    ProtocolTestVo();
    virtual ~ProtocolTestVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProtocolTestVo members

    /// <summary>
    /// 
    /// </summary>

    HttpVo getHttp() const;
    bool httpIsSet() const;
    void unsethttp();
    void setHttp(const HttpVo& value);

    /// <summary>
    /// ping拨测任务信息
    /// </summary>

    std::vector<PingVo>& getPing();
    bool pingIsSet() const;
    void unsetping();
    void setPing(const std::vector<PingVo>& value);

    /// <summary>
    /// ping/http节点地址
    /// </summary>

    std::vector<std::string>& getPointHost();
    bool pointHostIsSet() const;
    void unsetpointHost();
    void setPointHost(const std::vector<std::string>& value);

    /// <summary>
    /// 协议
    /// </summary>

    std::string getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(const std::string& value);


protected:
    HttpVo http_;
    bool httpIsSet_;
    std::vector<PingVo> ping_;
    bool pingIsSet_;
    std::vector<std::string> pointHost_;
    bool pointHostIsSet_;
    std::string protocol_;
    bool protocolIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProtocolTestVo_H_
