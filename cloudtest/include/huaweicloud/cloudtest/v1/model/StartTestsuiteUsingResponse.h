
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_StartTestsuiteUsingResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_StartTestsuiteUsingResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/Error.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/Warn.h>
#include <huaweicloud/cloudtest/v1/model/TaskBasicInfoVo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  StartTestsuiteUsingResponse
    : public ModelBase, public HttpResponse
{
public:
    StartTestsuiteUsingResponse();
    virtual ~StartTestsuiteUsingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartTestsuiteUsingResponse members

    /// <summary>
    /// 
    /// </summary>

    Error getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const Error& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getEtTraceId() const;
    bool etTraceIdIsSet() const;
    void unsetetTraceId();
    void setEtTraceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TaskBasicInfoVo getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const TaskBasicInfoVo& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Warn getWarn() const;
    bool warnIsSet() const;
    void unsetwarn();
    void setWarn(const Warn& value);


protected:
    Error error_;
    bool errorIsSet_;
    std::string etTraceId_;
    bool etTraceIdIsSet_;
    TaskBasicInfoVo result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;
    Warn warn_;
    bool warnIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_StartTestsuiteUsingResponse_H_
