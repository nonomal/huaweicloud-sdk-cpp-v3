
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BuildProduct_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BuildProduct_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BuildProduct
    : public ModelBase
{
public:
    BuildProduct();
    virtual ~BuildProduct();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BuildProduct members

    /// <summary>
    /// 构建产物名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 构建产物地址
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string url_;
    bool urlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BuildProduct_H_
