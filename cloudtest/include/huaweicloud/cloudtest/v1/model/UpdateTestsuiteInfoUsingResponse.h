
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestsuiteInfoUsingResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestsuiteInfoUsingResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/cloudtest/v1/model/Error.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UpdateTestsuiteInfoUsingResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateTestsuiteInfoUsingResponse();
    virtual ~UpdateTestsuiteInfoUsingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTestsuiteInfoUsingResponse members

    /// <summary>
    /// 
    /// </summary>

    Error getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const Error& value);

    /// <summary>
    /// 对应traceId
    /// </summary>

    std::string getEtTraceId() const;
    bool etTraceIdIsSet() const;
    void unsetetTraceId();
    void setEtTraceId(const std::string& value);

    /// <summary>
    /// 响应结果
    /// </summary>

    Object getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const Object& value);

    /// <summary>
    /// 响应状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    Error error_;
    bool errorIsSet_;
    std::string etTraceId_;
    bool etTraceIdIsSet_;
    Object result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestsuiteInfoUsingResponse_H_
