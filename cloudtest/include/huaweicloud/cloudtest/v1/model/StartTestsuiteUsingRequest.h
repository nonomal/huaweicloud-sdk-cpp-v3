
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_StartTestsuiteUsingRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_StartTestsuiteUsingRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TaskActionParamsV5.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  StartTestsuiteUsingRequest
    : public ModelBase
{
public:
    StartTestsuiteUsingRequest();
    virtual ~StartTestsuiteUsingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StartTestsuiteUsingRequest members

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getSuiteId() const;
    bool suiteIdIsSet() const;
    void unsetsuiteId();
    void setSuiteId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TaskActionParamsV5 getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TaskActionParamsV5& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string suiteId_;
    bool suiteIdIsSet_;
    TaskActionParamsV5 body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    StartTestsuiteUsingRequest& dereference_from_shared_ptr(std::shared_ptr<StartTestsuiteUsingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_StartTestsuiteUsingRequest_H_
