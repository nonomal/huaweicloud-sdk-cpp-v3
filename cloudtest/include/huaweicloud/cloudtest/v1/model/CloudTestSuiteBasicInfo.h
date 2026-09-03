
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CloudTestSuiteBasicInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CloudTestSuiteBasicInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/CloudTestCaseOperationInfo.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CloudTestSuiteBasicInfo
    : public ModelBase
{
public:
    CloudTestSuiteBasicInfo();
    virtual ~CloudTestSuiteBasicInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CloudTestSuiteBasicInfo members

    /// <summary>
    /// 
    /// </summary>

    CloudTestCaseOperationInfo getCaseOperationInfo() const;
    bool caseOperationInfoIsSet() const;
    void unsetcaseOperationInfo();
    void setCaseOperationInfo(const CloudTestCaseOperationInfo& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getCreateUser() const;
    bool createUserIsSet() const;
    void unsetcreateUser();
    void setCreateUser(const std::string& value);

    /// <summary>
    /// 创建人ID
    /// </summary>

    std::string getCreateUserId() const;
    bool createUserIdIsSet() const;
    void unsetcreateUserId();
    void setCreateUserId(const std::string& value);

    /// <summary>
    /// 描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 数据类型：0为测试套，1为文件夹，cloudTest前台传入
    /// </summary>

    int32_t getDocType() const;
    bool docTypeIsSet() const;
    void unsetdocType();
    void setDocType(int32_t value);

    /// <summary>
    /// 测试套状态
    /// </summary>

    int32_t getExecuteStatus() const;
    bool executeStatusIsSet() const;
    void unsetexecuteStatus();
    void setExecuteStatus(int32_t value);

    /// <summary>
    /// 执行总次数
    /// </summary>

    int32_t getExecuteTimes() const;
    bool executeTimesIsSet() const;
    void unsetexecuteTimes();
    void setExecuteTimes(int32_t value);

    /// <summary>
    /// 执行类型：0为冒烟测试，1为定时执行
    /// </summary>

    int32_t getExecuteType() const;
    bool executeTypeIsSet() const;
    void unsetexecuteType();
    void setExecuteType(int32_t value);

    /// <summary>
    /// 执行方式：1为串行，2为并行，与echo的executeModel字段相同
    /// </summary>

    std::string getExecuteWay() const;
    bool executeWayIsSet() const;
    void unsetexecuteWay();
    void setExecuteWay(const std::string& value);

    /// <summary>
    /// 测试套超期状态
    /// </summary>

    int32_t getExpirationStatus() const;
    bool expirationStatusIsSet() const;
    void unsetexpirationStatus();
    void setExpirationStatus(int32_t value);

    /// <summary>
    /// 参数配置
    /// </summary>

    std::string getExtParam() const;
    bool extParamIsSet() const;
    void unsetextParam();
    void setExtParam(const std::string& value);

    /// <summary>
    /// 唯一ID，主键
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 测试计划Uri，TMSS需要此值
    /// </summary>

    std::string getIteratorVersionUri() const;
    bool iteratorVersionUriIsSet() const;
    void unsetiteratorVersionUri();
    void setIteratorVersionUri(const std::string& value);

    /// <summary>
    /// 模块Id
    /// </summary>

    std::string getModuleId() const;
    bool moduleIdIsSet() const;
    void unsetmoduleId();
    void setModuleId(const std::string& value);

    /// <summary>
    /// 模块名称
    /// </summary>

    std::string getModuleName() const;
    bool moduleNameIsSet() const;
    void unsetmoduleName();
    void setModuleName(const std::string& value);

    /// <summary>
    /// 测试套名称，与echo的name字段相同
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 目录Id
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 处理者ID
    /// </summary>

    std::string getOwnerId() const;
    bool ownerIdIsSet() const;
    void unsetownerId();
    void setOwnerId(const std::string& value);

    /// <summary>
    /// 测试计划id，可为空
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// 计划结束时间
    /// </summary>

    int64_t getPlanEndTimestamp() const;
    bool planEndTimestampIsSet() const;
    void unsetplanEndTimestamp();
    void setPlanEndTimestamp(int64_t value);

    /// <summary>
    /// 计划开始时间
    /// </summary>

    int64_t getPlanStartTimestamp() const;
    bool planStartTimestampIsSet() const;
    void unsetplanStartTimestamp();
    void setPlanStartTimestamp(int64_t value);

    /// <summary>
    /// 项目ID
    /// </summary>

    int64_t getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(int64_t value);

    /// <summary>
    /// 项目UUID，与echo的testServiceId字段相同
    /// </summary>

    std::string getProjectUUId() const;
    bool projectUUIdIsSet() const;
    void unsetprojectUUId();
    void setProjectUUId(const std::string& value);

    /// <summary>
    /// 版本号
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);

    /// <summary>
    /// 测试套执行结果
    /// </summary>

    int32_t getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(int32_t value);

    /// <summary>
    /// 测试套状态
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 标签
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 测试套id，更新时需要同时传id、testSuiteId，2个字段值相同，与echo的taskId字段相同
    /// </summary>

    std::string getTestSuiteId() const;
    bool testSuiteIdIsSet() const;
    void unsettestSuiteId();
    void setTestSuiteId(const std::string& value);

    /// <summary>
    /// 编号
    /// </summary>

    std::string getTestSuiteNumber() const;
    bool testSuiteNumberIsSet() const;
    void unsettestSuiteNumber();
    void setTestSuiteNumber(const std::string& value);

    /// <summary>
    /// 测试套类型：0为功能测试，1为接口测试，6为Pistar，cloudTest前台传入
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 更新人
    /// </summary>

    std::string getUpdateUser() const;
    bool updateUserIsSet() const;
    void unsetupdateUser();
    void setUpdateUser(const std::string& value);

    /// <summary>
    /// 更新人ID
    /// </summary>

    std::string getUpdateUserId() const;
    bool updateUserIdIsSet() const;
    void unsetupdateUserId();
    void setUpdateUserId(const std::string& value);


protected:
    CloudTestCaseOperationInfo caseOperationInfo_;
    bool caseOperationInfoIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string createUser_;
    bool createUserIsSet_;
    std::string createUserId_;
    bool createUserIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t docType_;
    bool docTypeIsSet_;
    int32_t executeStatus_;
    bool executeStatusIsSet_;
    int32_t executeTimes_;
    bool executeTimesIsSet_;
    int32_t executeType_;
    bool executeTypeIsSet_;
    std::string executeWay_;
    bool executeWayIsSet_;
    int32_t expirationStatus_;
    bool expirationStatusIsSet_;
    std::string extParam_;
    bool extParamIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string iteratorVersionUri_;
    bool iteratorVersionUriIsSet_;
    std::string moduleId_;
    bool moduleIdIsSet_;
    std::string moduleName_;
    bool moduleNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string ownerId_;
    bool ownerIdIsSet_;
    std::string planId_;
    bool planIdIsSet_;
    int64_t planEndTimestamp_;
    bool planEndTimestampIsSet_;
    int64_t planStartTimestamp_;
    bool planStartTimestampIsSet_;
    int64_t projectId_;
    bool projectIdIsSet_;
    std::string projectUUId_;
    bool projectUUIdIsSet_;
    std::string releaseDev_;
    bool releaseDevIsSet_;
    int32_t result_;
    bool resultIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string testSuiteId_;
    bool testSuiteIdIsSet_;
    std::string testSuiteNumber_;
    bool testSuiteNumberIsSet_;
    int32_t type_;
    bool typeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string updateUser_;
    bool updateUserIsSet_;
    std::string updateUserId_;
    bool updateUserIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CloudTestSuiteBasicInfo_H_
