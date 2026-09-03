
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_HttpVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_HttpVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/ProtocolResVo.h>
#include <huaweicloud/cloudtest/v1/model/ProtocolReqVo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  HttpVo
    : public ModelBase
{
public:
    HttpVo();
    virtual ~HttpVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpVo members

    /// <summary>
    /// 
    /// </summary>

    ProtocolReqVo getRequest() const;
    bool requestIsSet() const;
    void unsetrequest();
    void setRequest(const ProtocolReqVo& value);

    /// <summary>
    /// 
    /// </summary>

    ProtocolResVo getResponse() const;
    bool responseIsSet() const;
    void unsetresponse();
    void setResponse(const ProtocolResVo& value);


protected:
    ProtocolReqVo request_;
    bool requestIsSet_;
    ProtocolResVo response_;
    bool responseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_HttpVo_H_
