
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskInfoV4VoReq_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskInfoV4VoReq_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/cloudtest/v1/model/ResourcePool.h>
#include <huaweicloud/cloudtest/v1/model/TaskExtParam.h>
#include <huaweicloud/cloudtest/v1/model/BuildProduct.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/ExecuteStrategiesVo.h>
#include <huaweicloud/cloudtest/v1/model/CloudTestSuiteBasicInfo.h>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/cloudtest/v1/model/PreTestCaseInfo.h>
#include <huaweicloud/cloudtest/v1/model/IpGroup.h>
#include <huaweicloud/cloudtest/v1/model/TestCaseBasicInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TaskInfoV4VoReq
    : public ModelBase
{
public:
    TaskInfoV4VoReq();
    virtual ~TaskInfoV4VoReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaskInfoV4VoReq members

    /// <summary>
    /// 智能告警开关：0为置灰，1为可用
    /// </summary>

    std::string getAlertAction() const;
    bool alertActionIsSet() const;
    void unsetalertAction();
    void setAlertAction(const std::string& value);

    /// <summary>
    /// 告警配置
    /// </summary>

    Object getAlertConfig() const;
    bool alertConfigIsSet() const;
    void unsetalertConfig();
    void setAlertConfig(const Object& value);

    /// <summary>
    /// 流水线启动测试套件，携带构建产物
    /// </summary>

    std::vector<BuildProduct>& getBuildProducts();
    bool buildProductsIsSet() const;
    void unsetbuildProducts();
    void setBuildProducts(const std::vector<BuildProduct>& value);

    /// <summary>
    /// 用例环境参数
    /// </summary>

    std::string getCasePackageEnvName() const;
    bool casePackageEnvNameIsSet() const;
    void unsetcasePackageEnvName();
    void setCasePackageEnvName(const std::string& value);

    /// <summary>
    /// 用例包ID
    /// </summary>

    std::string getCasePackageId() const;
    bool casePackageIdIsSet() const;
    void unsetcasePackageId();
    void setCasePackageId(const std::string& value);

    /// <summary>
    /// 用例包名
    /// </summary>

    std::string getCasePackageName() const;
    bool casePackageNameIsSet() const;
    void unsetcasePackageName();
    void setCasePackageName(const std::string& value);

    /// <summary>
    /// 用例总数
    /// </summary>

    int32_t getCaseTotal() const;
    bool caseTotalIsSet() const;
    void unsetcaseTotal();
    void setCaseTotal(int32_t value);

    /// <summary>
    /// 客户端类型，deviceTest使用
    /// </summary>

    std::string getClientType() const;
    bool clientTypeIsSet() const;
    void unsetclientType();
    void setClientType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CloudTestSuiteBasicInfo getCloudTestSuiteBasicInfo() const;
    bool cloudTestSuiteBasicInfoIsSet() const;
    void unsetcloudTestSuiteBasicInfo();
    void setCloudTestSuiteBasicInfo(const CloudTestSuiteBasicInfo& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getComments() const;
    bool commentsIsSet() const;
    void unsetcomments();
    void setComments(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getCreateUser() const;
    bool createUserIsSet() const;
    void unsetcreateUser();
    void setCreateUser(const std::string& value);

    /// <summary>
    /// 环境类型：0表示用例包环境，1表示全局环境
    /// </summary>

    int32_t getEnvType() const;
    bool envTypeIsSet() const;
    void unsetenvType();
    void setEnvType(int32_t value);

    /// <summary>
    /// environmentId环境信息
    /// </summary>

    std::string getEnvironmentGroupId() const;
    bool environmentGroupIdIsSet() const;
    void unsetenvironmentGroupId();
    void setEnvironmentGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExecuteStrategiesVo getExecuteStrategies() const;
    bool executeStrategiesIsSet() const;
    void unsetexecuteStrategies();
    void setExecuteStrategies(const ExecuteStrategiesVo& value);

    /// <summary>
    /// 用例类型
    /// </summary>

    std::string getExecutorType() const;
    bool executorTypeIsSet() const;
    void unsetexecutorType();
    void setExecutorType(const std::string& value);

    /// <summary>
    /// 扩展参数
    /// </summary>

    std::vector<TaskExtParam>& getExtParams();
    bool extParamsIsSet() const;
    void unsetextParams();
    void setExtParams(const std::vector<TaskExtParam>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getFavorite() const;
    bool favoriteIsSet() const;
    void unsetfavorite();
    void setFavorite(const std::string& value);

    /// <summary>
    /// 唯一ID，主键
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IpGroup getIpGroup() const;
    bool ipGroupIsSet() const;
    void unsetipGroup();
    void setIpGroup(const IpGroup& value);

    /// <summary>
    /// 小网拨测替换application的hostIP
    /// </summary>

    std::string getIpKey() const;
    bool ipKeyIsSet() const;
    void unsetipKey();
    void setIpKey(const std::string& value);

    /// <summary>
    /// 任务类型，是否debug任务
    /// </summary>

    int32_t getIsDebugTask() const;
    bool isDebugTaskIsSet() const;
    void unsetisDebugTask();
    void setIsDebugTask(int32_t value);

    /// <summary>
    /// 执行标签
    /// </summary>

    std::string getLabel() const;
    bool labelIsSet() const;
    void unsetlabel();
    void setLabel(const std::string& value);

    /// <summary>
    /// 资源池名称
    /// </summary>

    std::string getLabelName() const;
    bool labelNameIsSet() const;
    void unsetlabelName();
    void setLabelName(const std::string& value);

    /// <summary>
    /// 资源池类型
    /// </summary>

    std::string getLabelType() const;
    bool labelTypeIsSet() const;
    void unsetlabelType();
    void setLabelType(const std::string& value);

    /// <summary>
    /// 最近一次停止时间 
    /// </summary>

    int64_t getLastStopTime() const;
    bool lastStopTimeIsSet() const;
    void unsetlastStopTime();
    void setLastStopTime(int64_t value);

    /// <summary>
    /// 执行区域，冗余处理，修改更新在执行配置字段
    /// </summary>

    std::vector<std::string>& getLocationIds();
    bool locationIdsIsSet() const;
    void unsetlocationIds();
    void setLocationIds(const std::vector<std::string>& value);

    /// <summary>
    /// 任务名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 测试计划Id
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PreTestCaseInfo getPreTestCaseInfo() const;
    bool preTestCaseInfoIsSet() const;
    void unsetpreTestCaseInfo();
    void setPreTestCaseInfo(const PreTestCaseInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ResourcePool getResourcePool() const;
    bool resourcePoolIsSet() const;
    void unsetresourcePool();
    void setResourcePool(const ResourcePool& value);

    /// <summary>
    /// 任务状态
    /// </summary>

    int32_t getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSubtaskId() const;
    bool subtaskIdIsSet() const;
    void unsetsubtaskId();
    void setSubtaskId(const std::string& value);

    /// <summary>
    /// 子任务总数
    /// </summary>

    int64_t getSubtaskTotal() const;
    bool subtaskTotalIsSet() const;
    void unsetsubtaskTotal();
    void setSubtaskTotal(int64_t value);

    /// <summary>
    /// 任务类型
    /// </summary>

    std::string getTaskTypeId() const;
    bool taskTypeIdIsSet() const;
    void unsettaskTypeId();
    void setTaskTypeId(const std::string& value);

    /// <summary>
    /// 测试用例列表
    /// </summary>

    std::vector<TestCaseBasicInfo>& getTestCases();
    bool testCasesIsSet() const;
    void unsettestCases();
    void setTestCases(const std::vector<TestCaseBasicInfo>& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getTestServiceId() const;
    bool testServiceIdIsSet() const;
    void unsettestServiceId();
    void setTestServiceId(const std::string& value);

    /// <summary>
    /// 测试套类型
    /// </summary>

    int32_t getTestSuiteType() const;
    bool testSuiteTypeIsSet() const;
    void unsettestSuiteType();
    void setTestSuiteType(int32_t value);

    /// <summary>
    /// 提示信息，用于任务操作过程中需要提供给前端的提示信息
    /// </summary>

    std::string getTip() const;
    bool tipIsSet() const;
    void unsettip();
    void setTip(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);

    /// <summary>
    /// 更新人
    /// </summary>

    std::string getUpdateUser() const;
    bool updateUserIsSet() const;
    void unsetupdateUser();
    void setUpdateUser(const std::string& value);

    /// <summary>
    /// 版本
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    std::string alertAction_;
    bool alertActionIsSet_;
    Object alertConfig_;
    bool alertConfigIsSet_;
    std::vector<BuildProduct> buildProducts_;
    bool buildProductsIsSet_;
    std::string casePackageEnvName_;
    bool casePackageEnvNameIsSet_;
    std::string casePackageId_;
    bool casePackageIdIsSet_;
    std::string casePackageName_;
    bool casePackageNameIsSet_;
    int32_t caseTotal_;
    bool caseTotalIsSet_;
    std::string clientType_;
    bool clientTypeIsSet_;
    CloudTestSuiteBasicInfo cloudTestSuiteBasicInfo_;
    bool cloudTestSuiteBasicInfoIsSet_;
    std::string comments_;
    bool commentsIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string createUser_;
    bool createUserIsSet_;
    int32_t envType_;
    bool envTypeIsSet_;
    std::string environmentGroupId_;
    bool environmentGroupIdIsSet_;
    ExecuteStrategiesVo executeStrategies_;
    bool executeStrategiesIsSet_;
    std::string executorType_;
    bool executorTypeIsSet_;
    std::vector<TaskExtParam> extParams_;
    bool extParamsIsSet_;
    std::string favorite_;
    bool favoriteIsSet_;
    std::string id_;
    bool idIsSet_;
    IpGroup ipGroup_;
    bool ipGroupIsSet_;
    std::string ipKey_;
    bool ipKeyIsSet_;
    int32_t isDebugTask_;
    bool isDebugTaskIsSet_;
    std::string label_;
    bool labelIsSet_;
    std::string labelName_;
    bool labelNameIsSet_;
    std::string labelType_;
    bool labelTypeIsSet_;
    int64_t lastStopTime_;
    bool lastStopTimeIsSet_;
    std::vector<std::string> locationIds_;
    bool locationIdsIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string planId_;
    bool planIdIsSet_;
    PreTestCaseInfo preTestCaseInfo_;
    bool preTestCaseInfoIsSet_;
    ResourcePool resourcePool_;
    bool resourcePoolIsSet_;
    int32_t state_;
    bool stateIsSet_;
    std::string subtaskId_;
    bool subtaskIdIsSet_;
    int64_t subtaskTotal_;
    bool subtaskTotalIsSet_;
    std::string taskTypeId_;
    bool taskTypeIdIsSet_;
    std::vector<TestCaseBasicInfo> testCases_;
    bool testCasesIsSet_;
    std::string testServiceId_;
    bool testServiceIdIsSet_;
    int32_t testSuiteType_;
    bool testSuiteTypeIsSet_;
    std::string tip_;
    bool tipIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    std::string updateUser_;
    bool updateUserIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TaskInfoV4VoReq_H_
