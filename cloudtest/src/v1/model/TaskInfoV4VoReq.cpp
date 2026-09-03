

#include "huaweicloud/cloudtest/v1/model/TaskInfoV4VoReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskInfoV4VoReq::TaskInfoV4VoReq()
{
    alertAction_ = "";
    alertActionIsSet_ = false;
    alertConfigIsSet_ = false;
    buildProductsIsSet_ = false;
    casePackageEnvName_ = "";
    casePackageEnvNameIsSet_ = false;
    casePackageId_ = "";
    casePackageIdIsSet_ = false;
    casePackageName_ = "";
    casePackageNameIsSet_ = false;
    caseTotal_ = 0;
    caseTotalIsSet_ = false;
    clientType_ = "";
    clientTypeIsSet_ = false;
    cloudTestSuiteBasicInfoIsSet_ = false;
    comments_ = "";
    commentsIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    createUser_ = "";
    createUserIsSet_ = false;
    envType_ = 0;
    envTypeIsSet_ = false;
    environmentGroupId_ = "";
    environmentGroupIdIsSet_ = false;
    executeStrategiesIsSet_ = false;
    executorType_ = "";
    executorTypeIsSet_ = false;
    extParamsIsSet_ = false;
    favorite_ = "";
    favoriteIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    ipGroupIsSet_ = false;
    ipKey_ = "";
    ipKeyIsSet_ = false;
    isDebugTask_ = 0;
    isDebugTaskIsSet_ = false;
    label_ = "";
    labelIsSet_ = false;
    labelName_ = "";
    labelNameIsSet_ = false;
    labelType_ = "";
    labelTypeIsSet_ = false;
    lastStopTime_ = 0L;
    lastStopTimeIsSet_ = false;
    locationIdsIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    preTestCaseInfoIsSet_ = false;
    resourcePoolIsSet_ = false;
    state_ = 0;
    stateIsSet_ = false;
    subtaskId_ = "";
    subtaskIdIsSet_ = false;
    subtaskTotal_ = 0L;
    subtaskTotalIsSet_ = false;
    taskTypeId_ = "";
    taskTypeIdIsSet_ = false;
    testCasesIsSet_ = false;
    testServiceId_ = "";
    testServiceIdIsSet_ = false;
    testSuiteType_ = 0;
    testSuiteTypeIsSet_ = false;
    tip_ = "";
    tipIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    updateUser_ = "";
    updateUserIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

TaskInfoV4VoReq::~TaskInfoV4VoReq() = default;

void TaskInfoV4VoReq::validate()
{
}

web::json::value TaskInfoV4VoReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertActionIsSet_) {
        val[utility::conversions::to_string_t("alert_action")] = ModelBase::toJson(alertAction_);
    }
    if(alertConfigIsSet_) {
        val[utility::conversions::to_string_t("alert_config")] = ModelBase::toJson(alertConfig_);
    }
    if(buildProductsIsSet_) {
        val[utility::conversions::to_string_t("build_products")] = ModelBase::toJson(buildProducts_);
    }
    if(casePackageEnvNameIsSet_) {
        val[utility::conversions::to_string_t("case_package_env_name")] = ModelBase::toJson(casePackageEnvName_);
    }
    if(casePackageIdIsSet_) {
        val[utility::conversions::to_string_t("case_package_id")] = ModelBase::toJson(casePackageId_);
    }
    if(casePackageNameIsSet_) {
        val[utility::conversions::to_string_t("case_package_name")] = ModelBase::toJson(casePackageName_);
    }
    if(caseTotalIsSet_) {
        val[utility::conversions::to_string_t("case_total")] = ModelBase::toJson(caseTotal_);
    }
    if(clientTypeIsSet_) {
        val[utility::conversions::to_string_t("client_type")] = ModelBase::toJson(clientType_);
    }
    if(cloudTestSuiteBasicInfoIsSet_) {
        val[utility::conversions::to_string_t("cloudTestSuite_basicInfo")] = ModelBase::toJson(cloudTestSuiteBasicInfo_);
    }
    if(commentsIsSet_) {
        val[utility::conversions::to_string_t("comments")] = ModelBase::toJson(comments_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createUserIsSet_) {
        val[utility::conversions::to_string_t("create_user")] = ModelBase::toJson(createUser_);
    }
    if(envTypeIsSet_) {
        val[utility::conversions::to_string_t("env_type")] = ModelBase::toJson(envType_);
    }
    if(environmentGroupIdIsSet_) {
        val[utility::conversions::to_string_t("environment_group_id")] = ModelBase::toJson(environmentGroupId_);
    }
    if(executeStrategiesIsSet_) {
        val[utility::conversions::to_string_t("execute_strategies")] = ModelBase::toJson(executeStrategies_);
    }
    if(executorTypeIsSet_) {
        val[utility::conversions::to_string_t("executor_type")] = ModelBase::toJson(executorType_);
    }
    if(extParamsIsSet_) {
        val[utility::conversions::to_string_t("ext_params")] = ModelBase::toJson(extParams_);
    }
    if(favoriteIsSet_) {
        val[utility::conversions::to_string_t("favorite")] = ModelBase::toJson(favorite_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ipGroupIsSet_) {
        val[utility::conversions::to_string_t("ipGroup")] = ModelBase::toJson(ipGroup_);
    }
    if(ipKeyIsSet_) {
        val[utility::conversions::to_string_t("ipKey")] = ModelBase::toJson(ipKey_);
    }
    if(isDebugTaskIsSet_) {
        val[utility::conversions::to_string_t("isDebugTask")] = ModelBase::toJson(isDebugTask_);
    }
    if(labelIsSet_) {
        val[utility::conversions::to_string_t("label")] = ModelBase::toJson(label_);
    }
    if(labelNameIsSet_) {
        val[utility::conversions::to_string_t("labelName")] = ModelBase::toJson(labelName_);
    }
    if(labelTypeIsSet_) {
        val[utility::conversions::to_string_t("labelType")] = ModelBase::toJson(labelType_);
    }
    if(lastStopTimeIsSet_) {
        val[utility::conversions::to_string_t("lastStopTime")] = ModelBase::toJson(lastStopTime_);
    }
    if(locationIdsIsSet_) {
        val[utility::conversions::to_string_t("location_ids")] = ModelBase::toJson(locationIds_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("planId")] = ModelBase::toJson(planId_);
    }
    if(preTestCaseInfoIsSet_) {
        val[utility::conversions::to_string_t("preTestCaseInfo")] = ModelBase::toJson(preTestCaseInfo_);
    }
    if(resourcePoolIsSet_) {
        val[utility::conversions::to_string_t("resourcePool")] = ModelBase::toJson(resourcePool_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(subtaskIdIsSet_) {
        val[utility::conversions::to_string_t("subtask_id")] = ModelBase::toJson(subtaskId_);
    }
    if(subtaskTotalIsSet_) {
        val[utility::conversions::to_string_t("subtaskTotal")] = ModelBase::toJson(subtaskTotal_);
    }
    if(taskTypeIdIsSet_) {
        val[utility::conversions::to_string_t("taskTypeId")] = ModelBase::toJson(taskTypeId_);
    }
    if(testCasesIsSet_) {
        val[utility::conversions::to_string_t("testCases")] = ModelBase::toJson(testCases_);
    }
    if(testServiceIdIsSet_) {
        val[utility::conversions::to_string_t("test_service_id")] = ModelBase::toJson(testServiceId_);
    }
    if(testSuiteTypeIsSet_) {
        val[utility::conversions::to_string_t("testSuiteType")] = ModelBase::toJson(testSuiteType_);
    }
    if(tipIsSet_) {
        val[utility::conversions::to_string_t("tip")] = ModelBase::toJson(tip_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateUserIsSet_) {
        val[utility::conversions::to_string_t("update_user")] = ModelBase::toJson(updateUser_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool TaskInfoV4VoReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alert_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alert_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alert_config"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlertConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_products"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_products"));
        if(!fieldValue.is_null())
        {
            std::vector<BuildProduct> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildProducts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_package_env_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_package_env_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCasePackageEnvName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCasePackageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_package_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_package_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCasePackageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloudTestSuite_basicInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloudTestSuite_basicInfo"));
        if(!fieldValue.is_null())
        {
            CloudTestSuiteBasicInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudTestSuiteBasicInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comments"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("env_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("env_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environment_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvironmentGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_strategies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_strategies"));
        if(!fieldValue.is_null())
        {
            ExecuteStrategiesVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteStrategies(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ext_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ext_params"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskExtParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("favorite"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("favorite"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFavorite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipGroup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipGroup"));
        if(!fieldValue.is_null())
        {
            IpGroup refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isDebugTask"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isDebugTask"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDebugTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("label"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("label"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labelName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labelName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labelType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labelType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastStopTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastStopTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastStopTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocationIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("planId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("planId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("preTestCaseInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("preTestCaseInfo"));
        if(!fieldValue.is_null())
        {
            PreTestCaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreTestCaseInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourcePool"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourcePool"));
        if(!fieldValue.is_null())
        {
            ResourcePool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourcePool(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtask_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtask_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtaskTotal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtaskTotal"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtaskTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taskTypeId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskTypeId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskTypeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testCases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCases"));
        if(!fieldValue.is_null())
        {
            std::vector<TestCaseBasicInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("test_service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testSuiteType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testSuiteType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestSuiteType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string TaskInfoV4VoReq::getAlertAction() const
{
    return alertAction_;
}

void TaskInfoV4VoReq::setAlertAction(const std::string& value)
{
    alertAction_ = value;
    alertActionIsSet_ = true;
}

bool TaskInfoV4VoReq::alertActionIsSet() const
{
    return alertActionIsSet_;
}

void TaskInfoV4VoReq::unsetalertAction()
{
    alertActionIsSet_ = false;
}

Object TaskInfoV4VoReq::getAlertConfig() const
{
    return alertConfig_;
}

void TaskInfoV4VoReq::setAlertConfig(const Object& value)
{
    alertConfig_ = value;
    alertConfigIsSet_ = true;
}

bool TaskInfoV4VoReq::alertConfigIsSet() const
{
    return alertConfigIsSet_;
}

void TaskInfoV4VoReq::unsetalertConfig()
{
    alertConfigIsSet_ = false;
}

std::vector<BuildProduct>& TaskInfoV4VoReq::getBuildProducts()
{
    return buildProducts_;
}

void TaskInfoV4VoReq::setBuildProducts(const std::vector<BuildProduct>& value)
{
    buildProducts_ = value;
    buildProductsIsSet_ = true;
}

bool TaskInfoV4VoReq::buildProductsIsSet() const
{
    return buildProductsIsSet_;
}

void TaskInfoV4VoReq::unsetbuildProducts()
{
    buildProductsIsSet_ = false;
}

std::string TaskInfoV4VoReq::getCasePackageEnvName() const
{
    return casePackageEnvName_;
}

void TaskInfoV4VoReq::setCasePackageEnvName(const std::string& value)
{
    casePackageEnvName_ = value;
    casePackageEnvNameIsSet_ = true;
}

bool TaskInfoV4VoReq::casePackageEnvNameIsSet() const
{
    return casePackageEnvNameIsSet_;
}

void TaskInfoV4VoReq::unsetcasePackageEnvName()
{
    casePackageEnvNameIsSet_ = false;
}

std::string TaskInfoV4VoReq::getCasePackageId() const
{
    return casePackageId_;
}

void TaskInfoV4VoReq::setCasePackageId(const std::string& value)
{
    casePackageId_ = value;
    casePackageIdIsSet_ = true;
}

bool TaskInfoV4VoReq::casePackageIdIsSet() const
{
    return casePackageIdIsSet_;
}

void TaskInfoV4VoReq::unsetcasePackageId()
{
    casePackageIdIsSet_ = false;
}

std::string TaskInfoV4VoReq::getCasePackageName() const
{
    return casePackageName_;
}

void TaskInfoV4VoReq::setCasePackageName(const std::string& value)
{
    casePackageName_ = value;
    casePackageNameIsSet_ = true;
}

bool TaskInfoV4VoReq::casePackageNameIsSet() const
{
    return casePackageNameIsSet_;
}

void TaskInfoV4VoReq::unsetcasePackageName()
{
    casePackageNameIsSet_ = false;
}

int32_t TaskInfoV4VoReq::getCaseTotal() const
{
    return caseTotal_;
}

void TaskInfoV4VoReq::setCaseTotal(int32_t value)
{
    caseTotal_ = value;
    caseTotalIsSet_ = true;
}

bool TaskInfoV4VoReq::caseTotalIsSet() const
{
    return caseTotalIsSet_;
}

void TaskInfoV4VoReq::unsetcaseTotal()
{
    caseTotalIsSet_ = false;
}

std::string TaskInfoV4VoReq::getClientType() const
{
    return clientType_;
}

void TaskInfoV4VoReq::setClientType(const std::string& value)
{
    clientType_ = value;
    clientTypeIsSet_ = true;
}

bool TaskInfoV4VoReq::clientTypeIsSet() const
{
    return clientTypeIsSet_;
}

void TaskInfoV4VoReq::unsetclientType()
{
    clientTypeIsSet_ = false;
}

CloudTestSuiteBasicInfo TaskInfoV4VoReq::getCloudTestSuiteBasicInfo() const
{
    return cloudTestSuiteBasicInfo_;
}

void TaskInfoV4VoReq::setCloudTestSuiteBasicInfo(const CloudTestSuiteBasicInfo& value)
{
    cloudTestSuiteBasicInfo_ = value;
    cloudTestSuiteBasicInfoIsSet_ = true;
}

bool TaskInfoV4VoReq::cloudTestSuiteBasicInfoIsSet() const
{
    return cloudTestSuiteBasicInfoIsSet_;
}

void TaskInfoV4VoReq::unsetcloudTestSuiteBasicInfo()
{
    cloudTestSuiteBasicInfoIsSet_ = false;
}

std::string TaskInfoV4VoReq::getComments() const
{
    return comments_;
}

void TaskInfoV4VoReq::setComments(const std::string& value)
{
    comments_ = value;
    commentsIsSet_ = true;
}

bool TaskInfoV4VoReq::commentsIsSet() const
{
    return commentsIsSet_;
}

void TaskInfoV4VoReq::unsetcomments()
{
    commentsIsSet_ = false;
}

utility::datetime TaskInfoV4VoReq::getCreateTime() const
{
    return createTime_;
}

void TaskInfoV4VoReq::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TaskInfoV4VoReq::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TaskInfoV4VoReq::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TaskInfoV4VoReq::getCreateUser() const
{
    return createUser_;
}

void TaskInfoV4VoReq::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool TaskInfoV4VoReq::createUserIsSet() const
{
    return createUserIsSet_;
}

void TaskInfoV4VoReq::unsetcreateUser()
{
    createUserIsSet_ = false;
}

int32_t TaskInfoV4VoReq::getEnvType() const
{
    return envType_;
}

void TaskInfoV4VoReq::setEnvType(int32_t value)
{
    envType_ = value;
    envTypeIsSet_ = true;
}

bool TaskInfoV4VoReq::envTypeIsSet() const
{
    return envTypeIsSet_;
}

void TaskInfoV4VoReq::unsetenvType()
{
    envTypeIsSet_ = false;
}

std::string TaskInfoV4VoReq::getEnvironmentGroupId() const
{
    return environmentGroupId_;
}

void TaskInfoV4VoReq::setEnvironmentGroupId(const std::string& value)
{
    environmentGroupId_ = value;
    environmentGroupIdIsSet_ = true;
}

bool TaskInfoV4VoReq::environmentGroupIdIsSet() const
{
    return environmentGroupIdIsSet_;
}

void TaskInfoV4VoReq::unsetenvironmentGroupId()
{
    environmentGroupIdIsSet_ = false;
}

ExecuteStrategiesVo TaskInfoV4VoReq::getExecuteStrategies() const
{
    return executeStrategies_;
}

void TaskInfoV4VoReq::setExecuteStrategies(const ExecuteStrategiesVo& value)
{
    executeStrategies_ = value;
    executeStrategiesIsSet_ = true;
}

bool TaskInfoV4VoReq::executeStrategiesIsSet() const
{
    return executeStrategiesIsSet_;
}

void TaskInfoV4VoReq::unsetexecuteStrategies()
{
    executeStrategiesIsSet_ = false;
}

std::string TaskInfoV4VoReq::getExecutorType() const
{
    return executorType_;
}

void TaskInfoV4VoReq::setExecutorType(const std::string& value)
{
    executorType_ = value;
    executorTypeIsSet_ = true;
}

bool TaskInfoV4VoReq::executorTypeIsSet() const
{
    return executorTypeIsSet_;
}

void TaskInfoV4VoReq::unsetexecutorType()
{
    executorTypeIsSet_ = false;
}

std::vector<TaskExtParam>& TaskInfoV4VoReq::getExtParams()
{
    return extParams_;
}

void TaskInfoV4VoReq::setExtParams(const std::vector<TaskExtParam>& value)
{
    extParams_ = value;
    extParamsIsSet_ = true;
}

bool TaskInfoV4VoReq::extParamsIsSet() const
{
    return extParamsIsSet_;
}

void TaskInfoV4VoReq::unsetextParams()
{
    extParamsIsSet_ = false;
}

std::string TaskInfoV4VoReq::getFavorite() const
{
    return favorite_;
}

void TaskInfoV4VoReq::setFavorite(const std::string& value)
{
    favorite_ = value;
    favoriteIsSet_ = true;
}

bool TaskInfoV4VoReq::favoriteIsSet() const
{
    return favoriteIsSet_;
}

void TaskInfoV4VoReq::unsetfavorite()
{
    favoriteIsSet_ = false;
}

std::string TaskInfoV4VoReq::getId() const
{
    return id_;
}

void TaskInfoV4VoReq::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TaskInfoV4VoReq::idIsSet() const
{
    return idIsSet_;
}

void TaskInfoV4VoReq::unsetid()
{
    idIsSet_ = false;
}

IpGroup TaskInfoV4VoReq::getIpGroup() const
{
    return ipGroup_;
}

void TaskInfoV4VoReq::setIpGroup(const IpGroup& value)
{
    ipGroup_ = value;
    ipGroupIsSet_ = true;
}

bool TaskInfoV4VoReq::ipGroupIsSet() const
{
    return ipGroupIsSet_;
}

void TaskInfoV4VoReq::unsetipGroup()
{
    ipGroupIsSet_ = false;
}

std::string TaskInfoV4VoReq::getIpKey() const
{
    return ipKey_;
}

void TaskInfoV4VoReq::setIpKey(const std::string& value)
{
    ipKey_ = value;
    ipKeyIsSet_ = true;
}

bool TaskInfoV4VoReq::ipKeyIsSet() const
{
    return ipKeyIsSet_;
}

void TaskInfoV4VoReq::unsetipKey()
{
    ipKeyIsSet_ = false;
}

int32_t TaskInfoV4VoReq::getIsDebugTask() const
{
    return isDebugTask_;
}

void TaskInfoV4VoReq::setIsDebugTask(int32_t value)
{
    isDebugTask_ = value;
    isDebugTaskIsSet_ = true;
}

bool TaskInfoV4VoReq::isDebugTaskIsSet() const
{
    return isDebugTaskIsSet_;
}

void TaskInfoV4VoReq::unsetisDebugTask()
{
    isDebugTaskIsSet_ = false;
}

std::string TaskInfoV4VoReq::getLabel() const
{
    return label_;
}

void TaskInfoV4VoReq::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool TaskInfoV4VoReq::labelIsSet() const
{
    return labelIsSet_;
}

void TaskInfoV4VoReq::unsetlabel()
{
    labelIsSet_ = false;
}

std::string TaskInfoV4VoReq::getLabelName() const
{
    return labelName_;
}

void TaskInfoV4VoReq::setLabelName(const std::string& value)
{
    labelName_ = value;
    labelNameIsSet_ = true;
}

bool TaskInfoV4VoReq::labelNameIsSet() const
{
    return labelNameIsSet_;
}

void TaskInfoV4VoReq::unsetlabelName()
{
    labelNameIsSet_ = false;
}

std::string TaskInfoV4VoReq::getLabelType() const
{
    return labelType_;
}

void TaskInfoV4VoReq::setLabelType(const std::string& value)
{
    labelType_ = value;
    labelTypeIsSet_ = true;
}

bool TaskInfoV4VoReq::labelTypeIsSet() const
{
    return labelTypeIsSet_;
}

void TaskInfoV4VoReq::unsetlabelType()
{
    labelTypeIsSet_ = false;
}

int64_t TaskInfoV4VoReq::getLastStopTime() const
{
    return lastStopTime_;
}

void TaskInfoV4VoReq::setLastStopTime(int64_t value)
{
    lastStopTime_ = value;
    lastStopTimeIsSet_ = true;
}

bool TaskInfoV4VoReq::lastStopTimeIsSet() const
{
    return lastStopTimeIsSet_;
}

void TaskInfoV4VoReq::unsetlastStopTime()
{
    lastStopTimeIsSet_ = false;
}

std::vector<std::string>& TaskInfoV4VoReq::getLocationIds()
{
    return locationIds_;
}

void TaskInfoV4VoReq::setLocationIds(const std::vector<std::string>& value)
{
    locationIds_ = value;
    locationIdsIsSet_ = true;
}

bool TaskInfoV4VoReq::locationIdsIsSet() const
{
    return locationIdsIsSet_;
}

void TaskInfoV4VoReq::unsetlocationIds()
{
    locationIdsIsSet_ = false;
}

std::string TaskInfoV4VoReq::getName() const
{
    return name_;
}

void TaskInfoV4VoReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TaskInfoV4VoReq::nameIsSet() const
{
    return nameIsSet_;
}

void TaskInfoV4VoReq::unsetname()
{
    nameIsSet_ = false;
}

std::string TaskInfoV4VoReq::getPlanId() const
{
    return planId_;
}

void TaskInfoV4VoReq::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool TaskInfoV4VoReq::planIdIsSet() const
{
    return planIdIsSet_;
}

void TaskInfoV4VoReq::unsetplanId()
{
    planIdIsSet_ = false;
}

PreTestCaseInfo TaskInfoV4VoReq::getPreTestCaseInfo() const
{
    return preTestCaseInfo_;
}

void TaskInfoV4VoReq::setPreTestCaseInfo(const PreTestCaseInfo& value)
{
    preTestCaseInfo_ = value;
    preTestCaseInfoIsSet_ = true;
}

bool TaskInfoV4VoReq::preTestCaseInfoIsSet() const
{
    return preTestCaseInfoIsSet_;
}

void TaskInfoV4VoReq::unsetpreTestCaseInfo()
{
    preTestCaseInfoIsSet_ = false;
}

ResourcePool TaskInfoV4VoReq::getResourcePool() const
{
    return resourcePool_;
}

void TaskInfoV4VoReq::setResourcePool(const ResourcePool& value)
{
    resourcePool_ = value;
    resourcePoolIsSet_ = true;
}

bool TaskInfoV4VoReq::resourcePoolIsSet() const
{
    return resourcePoolIsSet_;
}

void TaskInfoV4VoReq::unsetresourcePool()
{
    resourcePoolIsSet_ = false;
}

int32_t TaskInfoV4VoReq::getState() const
{
    return state_;
}

void TaskInfoV4VoReq::setState(int32_t value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TaskInfoV4VoReq::stateIsSet() const
{
    return stateIsSet_;
}

void TaskInfoV4VoReq::unsetstate()
{
    stateIsSet_ = false;
}

std::string TaskInfoV4VoReq::getSubtaskId() const
{
    return subtaskId_;
}

void TaskInfoV4VoReq::setSubtaskId(const std::string& value)
{
    subtaskId_ = value;
    subtaskIdIsSet_ = true;
}

bool TaskInfoV4VoReq::subtaskIdIsSet() const
{
    return subtaskIdIsSet_;
}

void TaskInfoV4VoReq::unsetsubtaskId()
{
    subtaskIdIsSet_ = false;
}

int64_t TaskInfoV4VoReq::getSubtaskTotal() const
{
    return subtaskTotal_;
}

void TaskInfoV4VoReq::setSubtaskTotal(int64_t value)
{
    subtaskTotal_ = value;
    subtaskTotalIsSet_ = true;
}

bool TaskInfoV4VoReq::subtaskTotalIsSet() const
{
    return subtaskTotalIsSet_;
}

void TaskInfoV4VoReq::unsetsubtaskTotal()
{
    subtaskTotalIsSet_ = false;
}

std::string TaskInfoV4VoReq::getTaskTypeId() const
{
    return taskTypeId_;
}

void TaskInfoV4VoReq::setTaskTypeId(const std::string& value)
{
    taskTypeId_ = value;
    taskTypeIdIsSet_ = true;
}

bool TaskInfoV4VoReq::taskTypeIdIsSet() const
{
    return taskTypeIdIsSet_;
}

void TaskInfoV4VoReq::unsettaskTypeId()
{
    taskTypeIdIsSet_ = false;
}

std::vector<TestCaseBasicInfo>& TaskInfoV4VoReq::getTestCases()
{
    return testCases_;
}

void TaskInfoV4VoReq::setTestCases(const std::vector<TestCaseBasicInfo>& value)
{
    testCases_ = value;
    testCasesIsSet_ = true;
}

bool TaskInfoV4VoReq::testCasesIsSet() const
{
    return testCasesIsSet_;
}

void TaskInfoV4VoReq::unsettestCases()
{
    testCasesIsSet_ = false;
}

std::string TaskInfoV4VoReq::getTestServiceId() const
{
    return testServiceId_;
}

void TaskInfoV4VoReq::setTestServiceId(const std::string& value)
{
    testServiceId_ = value;
    testServiceIdIsSet_ = true;
}

bool TaskInfoV4VoReq::testServiceIdIsSet() const
{
    return testServiceIdIsSet_;
}

void TaskInfoV4VoReq::unsettestServiceId()
{
    testServiceIdIsSet_ = false;
}

int32_t TaskInfoV4VoReq::getTestSuiteType() const
{
    return testSuiteType_;
}

void TaskInfoV4VoReq::setTestSuiteType(int32_t value)
{
    testSuiteType_ = value;
    testSuiteTypeIsSet_ = true;
}

bool TaskInfoV4VoReq::testSuiteTypeIsSet() const
{
    return testSuiteTypeIsSet_;
}

void TaskInfoV4VoReq::unsettestSuiteType()
{
    testSuiteTypeIsSet_ = false;
}

std::string TaskInfoV4VoReq::getTip() const
{
    return tip_;
}

void TaskInfoV4VoReq::setTip(const std::string& value)
{
    tip_ = value;
    tipIsSet_ = true;
}

bool TaskInfoV4VoReq::tipIsSet() const
{
    return tipIsSet_;
}

void TaskInfoV4VoReq::unsettip()
{
    tipIsSet_ = false;
}

utility::datetime TaskInfoV4VoReq::getUpdateTime() const
{
    return updateTime_;
}

void TaskInfoV4VoReq::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TaskInfoV4VoReq::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TaskInfoV4VoReq::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string TaskInfoV4VoReq::getUpdateUser() const
{
    return updateUser_;
}

void TaskInfoV4VoReq::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool TaskInfoV4VoReq::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void TaskInfoV4VoReq::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

std::string TaskInfoV4VoReq::getVersion() const
{
    return version_;
}

void TaskInfoV4VoReq::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool TaskInfoV4VoReq::versionIsSet() const
{
    return versionIsSet_;
}

void TaskInfoV4VoReq::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


