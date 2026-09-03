
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IpGroup_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IpGroup_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  IpGroup
    : public ModelBase
{
public:
    IpGroup();
    virtual ~IpGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IpGroup members

    /// <summary>
    /// IP组名称
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// IP组id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string groupName_;
    bool groupNameIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_IpGroup_H_
