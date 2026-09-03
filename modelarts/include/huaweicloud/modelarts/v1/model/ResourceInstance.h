
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceInstance_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceInstance_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/modelarts/v1/model/TmsTagResp.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业资源信息及标签。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceInstance
    : public ModelBase
{
public:
    ResourceInstance();
    virtual ~ResourceInstance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceInstance members

    /// <summary>
    /// **参数解释**：资源详情，当前为空对象。 **取值范围**：不涉及。
    /// </summary>

    Object getResourceDetail() const;
    bool resourceDetailIsSet() const;
    void unsetresourceDetail();
    void setResourceDetail(const Object& value);

    /// <summary>
    /// **参数解释**：工作空间ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业ID。 **取值范围**：不涉及。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// **参数解释**：训练作业名称。 **取值范围**：不涉及。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// **参数解释**：该训练作业上的标签列表。无标签的作业返回空数组。 **取值范围**：不涉及。
    /// </summary>

    std::vector<TmsTagResp>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TmsTagResp>& value);


protected:
    Object resourceDetail_;
    bool resourceDetailIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::vector<TmsTagResp> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceInstance_H_
