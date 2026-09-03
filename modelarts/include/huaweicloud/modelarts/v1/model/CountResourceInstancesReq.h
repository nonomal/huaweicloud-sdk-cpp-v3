
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CountResourceInstancesReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CountResourceInstancesReq_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/CountResourceInstancesReq_tags.h>
#include <string>
#include <vector>
#include <huaweicloud/modelarts/v1/model/CountResourceInstancesReq_matches.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：按标签统计训练作业资源数量的请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CountResourceInstancesReq
    : public ModelBase
{
public:
    CountResourceInstancesReq();
    virtual ~CountResourceInstancesReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountResourceInstancesReq members

    /// <summary>
    /// **参数解释**：标签过滤条件，返回同时包含列表中所有标签的训练作业。 **约束限制**：标签个数不能超过系统允许的最大标签数。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<CountResourceInstancesReq_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CountResourceInstancesReq_tags>& value);

    /// <summary>
    /// **参数解释**：模糊匹配条件，支持按资源名称等字段进行模糊查询。 **约束限制**：最多1个匹配条件。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::vector<CountResourceInstancesReq_matches>& getMatches();
    bool matchesIsSet() const;
    void unsetmatches();
    void setMatches(const std::vector<CountResourceInstancesReq_matches>& value);

    /// <summary>
    /// **参数解释**：工作空间ID。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：0。
    /// </summary>

    std::string getWorkspaceId() const;
    bool workspaceIdIsSet() const;
    void unsetworkspaceId();
    void setWorkspaceId(const std::string& value);

    /// <summary>
    /// **参数解释**：是否查询不带任何标签的训练作业。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：false。
    /// </summary>

    bool isWithoutAnyTag() const;
    bool withoutAnyTagIsSet() const;
    void unsetwithoutAnyTag();
    void setWithoutAnyTag(bool value);


protected:
    std::vector<CountResourceInstancesReq_tags> tags_;
    bool tagsIsSet_;
    std::vector<CountResourceInstancesReq_matches> matches_;
    bool matchesIsSet_;
    std::string workspaceId_;
    bool workspaceIdIsSet_;
    bool withoutAnyTag_;
    bool withoutAnyTagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CountResourceInstancesReq_H_
