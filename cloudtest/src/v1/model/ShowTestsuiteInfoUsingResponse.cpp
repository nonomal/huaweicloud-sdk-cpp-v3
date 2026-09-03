

#include "huaweicloud/cloudtest/v1/model/ShowTestsuiteInfoUsingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowTestsuiteInfoUsingResponse::ShowTestsuiteInfoUsingResponse()
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
    testCaseAlertGroupsIsSet_ = false;
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

ShowTestsuiteInfoUsingResponse::~ShowTestsuiteInfoUsingResponse() = default;

void ShowTestsuiteInfoUsingResponse::validate()
{
}

web::json::value ShowTestsuiteInfoUsingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(alertActionIsSet_) {
        val[utility::conversions::to_string_t("alertAction")] = ModelBase::toJson(alertAction_);
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
        val[utility::conversions::to_string_t("executeStrategies")] = ModelBase::toJson(executeStrategies_);
    }
    if(executorTypeIsSet_) {
        val[utility::conversions::to_string_t("executor_type")] = ModelBase::toJson(executorType_);
    }
    if(extParamsIsSet_) {
        val[utility::conversions::to_string_t("extParams")] = ModelBase::toJson(extParams_);
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
    if(testCaseAlertGroupsIsSet_) {
        val[utility::conversions::to_string_t("testCaseAlertGroups")] = ModelBase::toJson(testCaseAlertGroups_);
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
bool ShowTestsuiteInfoUsingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alertAction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alertAction"));
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
            AlertConfigVo refVal;
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
    if(val.has_field(utility::conversions::to_string_t("executeStrategies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executeStrategies"));
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
    if(val.has_field(utility::conversions::to_string_t("extParams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extParams"));
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
    if(val.has_field(utility::conversions::to_string_t("testCaseAlertGroups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testCaseAlertGroups"));
        if(!fieldValue.is_null())
        {
            std::vector<TestCaseTemplateVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseAlertGroups(refVal);
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


std::string ShowTestsuiteInfoUsingResponse::getAlertAction() const
{
    return alertAction_;
}

void ShowTestsuiteInfoUsingResponse::setAlertAction(const std::string& value)
{
    alertAction_ = value;
    alertActionIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::alertActionIsSet() const
{
    return alertActionIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetalertAction()
{
    alertActionIsSet_ = false;
}

AlertConfigVo ShowTestsuiteInfoUsingResponse::getAlertConfig() const
{
    return alertConfig_;
}

void ShowTestsuiteInfoUsingResponse::setAlertConfig(const AlertConfigVo& value)
{
    alertConfig_ = value;
    alertConfigIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::alertConfigIsSet() const
{
    return alertConfigIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetalertConfig()
{
    alertConfigIsSet_ = false;
}

std::vector<BuildProduct>& ShowTestsuiteInfoUsingResponse::getBuildProducts()
{
    return buildProducts_;
}

void ShowTestsuiteInfoUsingResponse::setBuildProducts(const std::vector<BuildProduct>& value)
{
    buildProducts_ = value;
    buildProductsIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::buildProductsIsSet() const
{
    return buildProductsIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetbuildProducts()
{
    buildProductsIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getCasePackageEnvName() const
{
    return casePackageEnvName_;
}

void ShowTestsuiteInfoUsingResponse::setCasePackageEnvName(const std::string& value)
{
    casePackageEnvName_ = value;
    casePackageEnvNameIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::casePackageEnvNameIsSet() const
{
    return casePackageEnvNameIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetcasePackageEnvName()
{
    casePackageEnvNameIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getCasePackageId() const
{
    return casePackageId_;
}

void ShowTestsuiteInfoUsingResponse::setCasePackageId(const std::string& value)
{
    casePackageId_ = value;
    casePackageIdIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::casePackageIdIsSet() const
{
    return casePackageIdIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetcasePackageId()
{
    casePackageIdIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getCasePackageName() const
{
    return casePackageName_;
}

void ShowTestsuiteInfoUsingResponse::setCasePackageName(const std::string& value)
{
    casePackageName_ = value;
    casePackageNameIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::casePackageNameIsSet() const
{
    return casePackageNameIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetcasePackageName()
{
    casePackageNameIsSet_ = false;
}

int32_t ShowTestsuiteInfoUsingResponse::getCaseTotal() const
{
    return caseTotal_;
}

void ShowTestsuiteInfoUsingResponse::setCaseTotal(int32_t value)
{
    caseTotal_ = value;
    caseTotalIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::caseTotalIsSet() const
{
    return caseTotalIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetcaseTotal()
{
    caseTotalIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getClientType() const
{
    return clientType_;
}

void ShowTestsuiteInfoUsingResponse::setClientType(const std::string& value)
{
    clientType_ = value;
    clientTypeIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::clientTypeIsSet() const
{
    return clientTypeIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetclientType()
{
    clientTypeIsSet_ = false;
}

CloudTestSuiteBasicInfo ShowTestsuiteInfoUsingResponse::getCloudTestSuiteBasicInfo() const
{
    return cloudTestSuiteBasicInfo_;
}

void ShowTestsuiteInfoUsingResponse::setCloudTestSuiteBasicInfo(const CloudTestSuiteBasicInfo& value)
{
    cloudTestSuiteBasicInfo_ = value;
    cloudTestSuiteBasicInfoIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::cloudTestSuiteBasicInfoIsSet() const
{
    return cloudTestSuiteBasicInfoIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetcloudTestSuiteBasicInfo()
{
    cloudTestSuiteBasicInfoIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getComments() const
{
    return comments_;
}

void ShowTestsuiteInfoUsingResponse::setComments(const std::string& value)
{
    comments_ = value;
    commentsIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::commentsIsSet() const
{
    return commentsIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetcomments()
{
    commentsIsSet_ = false;
}

utility::datetime ShowTestsuiteInfoUsingResponse::getCreateTime() const
{
    return createTime_;
}

void ShowTestsuiteInfoUsingResponse::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getCreateUser() const
{
    return createUser_;
}

void ShowTestsuiteInfoUsingResponse::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::createUserIsSet() const
{
    return createUserIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetcreateUser()
{
    createUserIsSet_ = false;
}

int32_t ShowTestsuiteInfoUsingResponse::getEnvType() const
{
    return envType_;
}

void ShowTestsuiteInfoUsingResponse::setEnvType(int32_t value)
{
    envType_ = value;
    envTypeIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::envTypeIsSet() const
{
    return envTypeIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetenvType()
{
    envTypeIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getEnvironmentGroupId() const
{
    return environmentGroupId_;
}

void ShowTestsuiteInfoUsingResponse::setEnvironmentGroupId(const std::string& value)
{
    environmentGroupId_ = value;
    environmentGroupIdIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::environmentGroupIdIsSet() const
{
    return environmentGroupIdIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetenvironmentGroupId()
{
    environmentGroupIdIsSet_ = false;
}

ExecuteStrategiesVo ShowTestsuiteInfoUsingResponse::getExecuteStrategies() const
{
    return executeStrategies_;
}

void ShowTestsuiteInfoUsingResponse::setExecuteStrategies(const ExecuteStrategiesVo& value)
{
    executeStrategies_ = value;
    executeStrategiesIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::executeStrategiesIsSet() const
{
    return executeStrategiesIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetexecuteStrategies()
{
    executeStrategiesIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getExecutorType() const
{
    return executorType_;
}

void ShowTestsuiteInfoUsingResponse::setExecutorType(const std::string& value)
{
    executorType_ = value;
    executorTypeIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::executorTypeIsSet() const
{
    return executorTypeIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetexecutorType()
{
    executorTypeIsSet_ = false;
}

std::vector<TaskExtParam>& ShowTestsuiteInfoUsingResponse::getExtParams()
{
    return extParams_;
}

void ShowTestsuiteInfoUsingResponse::setExtParams(const std::vector<TaskExtParam>& value)
{
    extParams_ = value;
    extParamsIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::extParamsIsSet() const
{
    return extParamsIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetextParams()
{
    extParamsIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getFavorite() const
{
    return favorite_;
}

void ShowTestsuiteInfoUsingResponse::setFavorite(const std::string& value)
{
    favorite_ = value;
    favoriteIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::favoriteIsSet() const
{
    return favoriteIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetfavorite()
{
    favoriteIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getId() const
{
    return id_;
}

void ShowTestsuiteInfoUsingResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetid()
{
    idIsSet_ = false;
}

IpGroup ShowTestsuiteInfoUsingResponse::getIpGroup() const
{
    return ipGroup_;
}

void ShowTestsuiteInfoUsingResponse::setIpGroup(const IpGroup& value)
{
    ipGroup_ = value;
    ipGroupIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::ipGroupIsSet() const
{
    return ipGroupIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetipGroup()
{
    ipGroupIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getIpKey() const
{
    return ipKey_;
}

void ShowTestsuiteInfoUsingResponse::setIpKey(const std::string& value)
{
    ipKey_ = value;
    ipKeyIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::ipKeyIsSet() const
{
    return ipKeyIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetipKey()
{
    ipKeyIsSet_ = false;
}

int32_t ShowTestsuiteInfoUsingResponse::getIsDebugTask() const
{
    return isDebugTask_;
}

void ShowTestsuiteInfoUsingResponse::setIsDebugTask(int32_t value)
{
    isDebugTask_ = value;
    isDebugTaskIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::isDebugTaskIsSet() const
{
    return isDebugTaskIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetisDebugTask()
{
    isDebugTaskIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getLabel() const
{
    return label_;
}

void ShowTestsuiteInfoUsingResponse::setLabel(const std::string& value)
{
    label_ = value;
    labelIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::labelIsSet() const
{
    return labelIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetlabel()
{
    labelIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getLabelName() const
{
    return labelName_;
}

void ShowTestsuiteInfoUsingResponse::setLabelName(const std::string& value)
{
    labelName_ = value;
    labelNameIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::labelNameIsSet() const
{
    return labelNameIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetlabelName()
{
    labelNameIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getLabelType() const
{
    return labelType_;
}

void ShowTestsuiteInfoUsingResponse::setLabelType(const std::string& value)
{
    labelType_ = value;
    labelTypeIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::labelTypeIsSet() const
{
    return labelTypeIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetlabelType()
{
    labelTypeIsSet_ = false;
}

int64_t ShowTestsuiteInfoUsingResponse::getLastStopTime() const
{
    return lastStopTime_;
}

void ShowTestsuiteInfoUsingResponse::setLastStopTime(int64_t value)
{
    lastStopTime_ = value;
    lastStopTimeIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::lastStopTimeIsSet() const
{
    return lastStopTimeIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetlastStopTime()
{
    lastStopTimeIsSet_ = false;
}

std::vector<std::string>& ShowTestsuiteInfoUsingResponse::getLocationIds()
{
    return locationIds_;
}

void ShowTestsuiteInfoUsingResponse::setLocationIds(const std::vector<std::string>& value)
{
    locationIds_ = value;
    locationIdsIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::locationIdsIsSet() const
{
    return locationIdsIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetlocationIds()
{
    locationIdsIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getName() const
{
    return name_;
}

void ShowTestsuiteInfoUsingResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getPlanId() const
{
    return planId_;
}

void ShowTestsuiteInfoUsingResponse::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::planIdIsSet() const
{
    return planIdIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetplanId()
{
    planIdIsSet_ = false;
}

PreTestCaseInfo ShowTestsuiteInfoUsingResponse::getPreTestCaseInfo() const
{
    return preTestCaseInfo_;
}

void ShowTestsuiteInfoUsingResponse::setPreTestCaseInfo(const PreTestCaseInfo& value)
{
    preTestCaseInfo_ = value;
    preTestCaseInfoIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::preTestCaseInfoIsSet() const
{
    return preTestCaseInfoIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetpreTestCaseInfo()
{
    preTestCaseInfoIsSet_ = false;
}

ResourcePool ShowTestsuiteInfoUsingResponse::getResourcePool() const
{
    return resourcePool_;
}

void ShowTestsuiteInfoUsingResponse::setResourcePool(const ResourcePool& value)
{
    resourcePool_ = value;
    resourcePoolIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::resourcePoolIsSet() const
{
    return resourcePoolIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetresourcePool()
{
    resourcePoolIsSet_ = false;
}

int32_t ShowTestsuiteInfoUsingResponse::getState() const
{
    return state_;
}

void ShowTestsuiteInfoUsingResponse::setState(int32_t value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getSubtaskId() const
{
    return subtaskId_;
}

void ShowTestsuiteInfoUsingResponse::setSubtaskId(const std::string& value)
{
    subtaskId_ = value;
    subtaskIdIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::subtaskIdIsSet() const
{
    return subtaskIdIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetsubtaskId()
{
    subtaskIdIsSet_ = false;
}

int64_t ShowTestsuiteInfoUsingResponse::getSubtaskTotal() const
{
    return subtaskTotal_;
}

void ShowTestsuiteInfoUsingResponse::setSubtaskTotal(int64_t value)
{
    subtaskTotal_ = value;
    subtaskTotalIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::subtaskTotalIsSet() const
{
    return subtaskTotalIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetsubtaskTotal()
{
    subtaskTotalIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getTaskTypeId() const
{
    return taskTypeId_;
}

void ShowTestsuiteInfoUsingResponse::setTaskTypeId(const std::string& value)
{
    taskTypeId_ = value;
    taskTypeIdIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::taskTypeIdIsSet() const
{
    return taskTypeIdIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsettaskTypeId()
{
    taskTypeIdIsSet_ = false;
}

std::vector<TestCaseTemplateVo>& ShowTestsuiteInfoUsingResponse::getTestCaseAlertGroups()
{
    return testCaseAlertGroups_;
}

void ShowTestsuiteInfoUsingResponse::setTestCaseAlertGroups(const std::vector<TestCaseTemplateVo>& value)
{
    testCaseAlertGroups_ = value;
    testCaseAlertGroupsIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::testCaseAlertGroupsIsSet() const
{
    return testCaseAlertGroupsIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsettestCaseAlertGroups()
{
    testCaseAlertGroupsIsSet_ = false;
}

std::vector<TestCaseBasicInfo>& ShowTestsuiteInfoUsingResponse::getTestCases()
{
    return testCases_;
}

void ShowTestsuiteInfoUsingResponse::setTestCases(const std::vector<TestCaseBasicInfo>& value)
{
    testCases_ = value;
    testCasesIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::testCasesIsSet() const
{
    return testCasesIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsettestCases()
{
    testCasesIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getTestServiceId() const
{
    return testServiceId_;
}

void ShowTestsuiteInfoUsingResponse::setTestServiceId(const std::string& value)
{
    testServiceId_ = value;
    testServiceIdIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::testServiceIdIsSet() const
{
    return testServiceIdIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsettestServiceId()
{
    testServiceIdIsSet_ = false;
}

int32_t ShowTestsuiteInfoUsingResponse::getTestSuiteType() const
{
    return testSuiteType_;
}

void ShowTestsuiteInfoUsingResponse::setTestSuiteType(int32_t value)
{
    testSuiteType_ = value;
    testSuiteTypeIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::testSuiteTypeIsSet() const
{
    return testSuiteTypeIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsettestSuiteType()
{
    testSuiteTypeIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getTip() const
{
    return tip_;
}

void ShowTestsuiteInfoUsingResponse::setTip(const std::string& value)
{
    tip_ = value;
    tipIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::tipIsSet() const
{
    return tipIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsettip()
{
    tipIsSet_ = false;
}

utility::datetime ShowTestsuiteInfoUsingResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowTestsuiteInfoUsingResponse::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getUpdateUser() const
{
    return updateUser_;
}

void ShowTestsuiteInfoUsingResponse::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

std::string ShowTestsuiteInfoUsingResponse::getVersion() const
{
    return version_;
}

void ShowTestsuiteInfoUsingResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowTestsuiteInfoUsingResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowTestsuiteInfoUsingResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


