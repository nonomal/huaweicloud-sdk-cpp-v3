
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceInstancesFilterReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceInstancesFilterReq_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/MutiValueTag.h>
#include <string>
#include <huaweicloud/modelarts/v1/model/Match.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询训练作业资源列表的请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResourceInstancesFilterReq
    : public ModelBase
{
public:
    ResourceInstancesFilterReq();
    virtual ~ResourceInstancesFilterReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceInstancesFilterReq members

    /// <summary>
    /// **参数解释**：工作空间ID。未创建工作空间时默认值为\&quot;0\&quot;，存在创建并使用的工作空间，以实际取值为准。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：0。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：标签筛选条件，按标签key-value对筛选作业。同一key下多个value为OR关系，不同key之间为AND关系。 **约束限制**：同一key的values不能重复，不同key不能重复。 **取值范围**：不涉及。
    /// </summary>

    std::vector<MutiValueTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<MutiValueTag>& value);

    /// <summary>
    /// **参数解释**：是否查询没有任何标签的作业。 **约束限制**：设为true时忽略tags筛选条件。 **取值范围**： - true：仅查询无标签的作业 - false：按tags条件筛选 **默认取值**：false。
    /// </summary>

    bool isWithoutAnyTag() const;
    bool withoutAnyTagIsSet() const;
    void unsetwithoutAnyTag();
    void setWithoutAnyTag(bool value);

    /// <summary>
    /// **参数解释**：资源名称搜索条件。 **约束限制**：最多支持1个匹配项，且key必须为resource_name。 **取值范围**：不涉及。
    /// </summary>

    std::vector<Match>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<Match>& value);


protected:
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    std::vector<MutiValueTag> tags_;
    bool tagsIsSet_;
    bool withoutAnyTag_;
    bool withoutAnyTagIsSet_;
    std::vector<Match> matches_;
    bool matchesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResourceInstancesFilterReq_H_
