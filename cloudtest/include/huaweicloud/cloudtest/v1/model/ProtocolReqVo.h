
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProtocolReqVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProtocolReqVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/BasicInfoVo.h>
#include <string>
#include <map>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ProtocolReqVo
    : public ModelBase
{
public:
    ProtocolReqVo();
    virtual ~ProtocolReqVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProtocolReqVo members

    /// <summary>
    /// 
    /// </summary>

    BasicInfoVo getBasic() const;
    bool basicIsSet() const;
    void unsetbasic();
    void setBasic(const BasicInfoVo& value);

    /// <summary>
    /// 请求头
    /// </summary>

    std::map<std::string, std::string>& getHeaders();
    bool headersIsSet() const;
    void unsetheaders();
    void setHeaders(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 方法
    /// </summary>

    std::string getMethod() const;
    bool methodIsSet() const;
    void unsetmethod();
    void setMethod(const std::string& value);

    /// <summary>
    /// 请求body体
    /// </summary>

    std::string getRequestBody() const;
    bool requestBodyIsSet() const;
    void unsetrequestBody();
    void setRequestBody(const std::string& value);

    /// <summary>
    /// url
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


protected:
    BasicInfoVo basic_;
    bool basicIsSet_;
    std::map<std::string, std::string> headers_;
    bool headersIsSet_;
    std::string method_;
    bool methodIsSet_;
    std::string requestBody_;
    bool requestBodyIsSet_;
    std::string url_;
    bool urlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProtocolReqVo_H_
