
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_Error_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_Error_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  Error
    : public ModelBase
{
public:
    Error();
    virtual ~Error();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Error members

    /// <summary>
    /// 
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<Object>& getDetails();
    bool detailsIsSet() const;
    void unsetdetails();
    void setDetails(const std::vector<Object>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


protected:
    std::string code_;
    bool codeIsSet_;
    std::vector<Object> details_;
    bool detailsIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::string url_;
    bool urlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_Error_H_
