
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddOrUpdateTestsuiteInfoUsingRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddOrUpdateTestsuiteInfoUsingRequest_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/TaskInfoV4VoReq.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AddOrUpdateTestsuiteInfoUsingRequest
    : public ModelBase
{
public:
    AddOrUpdateTestsuiteInfoUsingRequest();
    virtual ~AddOrUpdateTestsuiteInfoUsingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddOrUpdateTestsuiteInfoUsingRequest members

    /// <summary>
    /// 服务id
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TaskInfoV4VoReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TaskInfoV4VoReq& value);


protected:
    std::string serviceId_;
    bool serviceIdIsSet_;
    TaskInfoV4VoReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddOrUpdateTestsuiteInfoUsingRequest& dereference_from_shared_ptr(std::shared_ptr<AddOrUpdateTestsuiteInfoUsingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddOrUpdateTestsuiteInfoUsingRequest_H_
