

#include "huaweicloud/cloudtest/v1/model/CloudTestSuiteBasicInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CloudTestSuiteBasicInfo::CloudTestSuiteBasicInfo()
{
    caseOperationInfoIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    createUser_ = "";
    createUserIsSet_ = false;
    createUserId_ = "";
    createUserIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    docType_ = 0;
    docTypeIsSet_ = false;
    executeStatus_ = 0;
    executeStatusIsSet_ = false;
    executeTimes_ = 0;
    executeTimesIsSet_ = false;
    executeType_ = 0;
    executeTypeIsSet_ = false;
    executeWay_ = "";
    executeWayIsSet_ = false;
    expirationStatus_ = 0;
    expirationStatusIsSet_ = false;
    extParam_ = "";
    extParamIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    iteratorVersionUri_ = "";
    iteratorVersionUriIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    ownerId_ = "";
    ownerIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    planEndTimestamp_ = 0L;
    planEndTimestampIsSet_ = false;
    planStartTimestamp_ = 0L;
    planStartTimestampIsSet_ = false;
    projectId_ = 0L;
    projectIdIsSet_ = false;
    projectUUId_ = "";
    projectUUIdIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    result_ = 0;
    resultIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    tagsIsSet_ = false;
    testSuiteId_ = "";
    testSuiteIdIsSet_ = false;
    testSuiteNumber_ = "";
    testSuiteNumberIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    updateUser_ = "";
    updateUserIsSet_ = false;
    updateUserId_ = "";
    updateUserIdIsSet_ = false;
}

CloudTestSuiteBasicInfo::~CloudTestSuiteBasicInfo() = default;

void CloudTestSuiteBasicInfo::validate()
{
}

web::json::value CloudTestSuiteBasicInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseOperationInfoIsSet_) {
        val[utility::conversions::to_string_t("caseOperationInfo")] = ModelBase::toJson(caseOperationInfo_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(createUserIsSet_) {
        val[utility::conversions::to_string_t("create_user")] = ModelBase::toJson(createUser_);
    }
    if(createUserIdIsSet_) {
        val[utility::conversions::to_string_t("create_user_id")] = ModelBase::toJson(createUserId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(docTypeIsSet_) {
        val[utility::conversions::to_string_t("doc_type")] = ModelBase::toJson(docType_);
    }
    if(executeStatusIsSet_) {
        val[utility::conversions::to_string_t("execute_status")] = ModelBase::toJson(executeStatus_);
    }
    if(executeTimesIsSet_) {
        val[utility::conversions::to_string_t("execute_times")] = ModelBase::toJson(executeTimes_);
    }
    if(executeTypeIsSet_) {
        val[utility::conversions::to_string_t("execute_type")] = ModelBase::toJson(executeType_);
    }
    if(executeWayIsSet_) {
        val[utility::conversions::to_string_t("execute_way")] = ModelBase::toJson(executeWay_);
    }
    if(expirationStatusIsSet_) {
        val[utility::conversions::to_string_t("expiration_status")] = ModelBase::toJson(expirationStatus_);
    }
    if(extParamIsSet_) {
        val[utility::conversions::to_string_t("extParam")] = ModelBase::toJson(extParam_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(iteratorVersionUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_version_uri")] = ModelBase::toJson(iteratorVersionUri_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("moduleId")] = ModelBase::toJson(moduleId_);
    }
    if(moduleNameIsSet_) {
        val[utility::conversions::to_string_t("moduleName")] = ModelBase::toJson(moduleName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("nodeId")] = ModelBase::toJson(nodeId_);
    }
    if(ownerIdIsSet_) {
        val[utility::conversions::to_string_t("ownerId")] = ModelBase::toJson(ownerId_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("planId")] = ModelBase::toJson(planId_);
    }
    if(planEndTimestampIsSet_) {
        val[utility::conversions::to_string_t("plan_end_timestamp")] = ModelBase::toJson(planEndTimestamp_);
    }
    if(planStartTimestampIsSet_) {
        val[utility::conversions::to_string_t("plan_start_timestamp")] = ModelBase::toJson(planStartTimestamp_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(projectUUIdIsSet_) {
        val[utility::conversions::to_string_t("projectUUId")] = ModelBase::toJson(projectUUId_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("releaseDev")] = ModelBase::toJson(releaseDev_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(testSuiteIdIsSet_) {
        val[utility::conversions::to_string_t("testSuiteId")] = ModelBase::toJson(testSuiteId_);
    }
    if(testSuiteNumberIsSet_) {
        val[utility::conversions::to_string_t("testSuiteNumber")] = ModelBase::toJson(testSuiteNumber_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(updateUserIsSet_) {
        val[utility::conversions::to_string_t("update_user")] = ModelBase::toJson(updateUser_);
    }
    if(updateUserIdIsSet_) {
        val[utility::conversions::to_string_t("update_user_id")] = ModelBase::toJson(updateUserId_);
    }

    return val;
}
bool CloudTestSuiteBasicInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("caseOperationInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("caseOperationInfo"));
        if(!fieldValue.is_null())
        {
            CloudTestCaseOperationInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseOperationInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("create_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("doc_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("doc_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_way"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_way"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteWay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extParam"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtParam(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("iterator_version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("moduleId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("moduleId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("moduleName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("moduleName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nodeId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ownerId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownerId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plan_end_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_start_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_start_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectUUId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectUUId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUUId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("releaseDev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("releaseDev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testSuiteId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testSuiteId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestSuiteId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testSuiteNumber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testSuiteNumber"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestSuiteNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("update_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUserId(refVal);
        }
    }
    return ok;
}


CloudTestCaseOperationInfo CloudTestSuiteBasicInfo::getCaseOperationInfo() const
{
    return caseOperationInfo_;
}

void CloudTestSuiteBasicInfo::setCaseOperationInfo(const CloudTestCaseOperationInfo& value)
{
    caseOperationInfo_ = value;
    caseOperationInfoIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::caseOperationInfoIsSet() const
{
    return caseOperationInfoIsSet_;
}

void CloudTestSuiteBasicInfo::unsetcaseOperationInfo()
{
    caseOperationInfoIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getCreateTime() const
{
    return createTime_;
}

void CloudTestSuiteBasicInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CloudTestSuiteBasicInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getCreateUser() const
{
    return createUser_;
}

void CloudTestSuiteBasicInfo::setCreateUser(const std::string& value)
{
    createUser_ = value;
    createUserIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::createUserIsSet() const
{
    return createUserIsSet_;
}

void CloudTestSuiteBasicInfo::unsetcreateUser()
{
    createUserIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getCreateUserId() const
{
    return createUserId_;
}

void CloudTestSuiteBasicInfo::setCreateUserId(const std::string& value)
{
    createUserId_ = value;
    createUserIdIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::createUserIdIsSet() const
{
    return createUserIdIsSet_;
}

void CloudTestSuiteBasicInfo::unsetcreateUserId()
{
    createUserIdIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getDescription() const
{
    return description_;
}

void CloudTestSuiteBasicInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CloudTestSuiteBasicInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t CloudTestSuiteBasicInfo::getDocType() const
{
    return docType_;
}

void CloudTestSuiteBasicInfo::setDocType(int32_t value)
{
    docType_ = value;
    docTypeIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::docTypeIsSet() const
{
    return docTypeIsSet_;
}

void CloudTestSuiteBasicInfo::unsetdocType()
{
    docTypeIsSet_ = false;
}

int32_t CloudTestSuiteBasicInfo::getExecuteStatus() const
{
    return executeStatus_;
}

void CloudTestSuiteBasicInfo::setExecuteStatus(int32_t value)
{
    executeStatus_ = value;
    executeStatusIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::executeStatusIsSet() const
{
    return executeStatusIsSet_;
}

void CloudTestSuiteBasicInfo::unsetexecuteStatus()
{
    executeStatusIsSet_ = false;
}

int32_t CloudTestSuiteBasicInfo::getExecuteTimes() const
{
    return executeTimes_;
}

void CloudTestSuiteBasicInfo::setExecuteTimes(int32_t value)
{
    executeTimes_ = value;
    executeTimesIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::executeTimesIsSet() const
{
    return executeTimesIsSet_;
}

void CloudTestSuiteBasicInfo::unsetexecuteTimes()
{
    executeTimesIsSet_ = false;
}

int32_t CloudTestSuiteBasicInfo::getExecuteType() const
{
    return executeType_;
}

void CloudTestSuiteBasicInfo::setExecuteType(int32_t value)
{
    executeType_ = value;
    executeTypeIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::executeTypeIsSet() const
{
    return executeTypeIsSet_;
}

void CloudTestSuiteBasicInfo::unsetexecuteType()
{
    executeTypeIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getExecuteWay() const
{
    return executeWay_;
}

void CloudTestSuiteBasicInfo::setExecuteWay(const std::string& value)
{
    executeWay_ = value;
    executeWayIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::executeWayIsSet() const
{
    return executeWayIsSet_;
}

void CloudTestSuiteBasicInfo::unsetexecuteWay()
{
    executeWayIsSet_ = false;
}

int32_t CloudTestSuiteBasicInfo::getExpirationStatus() const
{
    return expirationStatus_;
}

void CloudTestSuiteBasicInfo::setExpirationStatus(int32_t value)
{
    expirationStatus_ = value;
    expirationStatusIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::expirationStatusIsSet() const
{
    return expirationStatusIsSet_;
}

void CloudTestSuiteBasicInfo::unsetexpirationStatus()
{
    expirationStatusIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getExtParam() const
{
    return extParam_;
}

void CloudTestSuiteBasicInfo::setExtParam(const std::string& value)
{
    extParam_ = value;
    extParamIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::extParamIsSet() const
{
    return extParamIsSet_;
}

void CloudTestSuiteBasicInfo::unsetextParam()
{
    extParamIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getId() const
{
    return id_;
}

void CloudTestSuiteBasicInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::idIsSet() const
{
    return idIsSet_;
}

void CloudTestSuiteBasicInfo::unsetid()
{
    idIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getIteratorVersionUri() const
{
    return iteratorVersionUri_;
}

void CloudTestSuiteBasicInfo::setIteratorVersionUri(const std::string& value)
{
    iteratorVersionUri_ = value;
    iteratorVersionUriIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::iteratorVersionUriIsSet() const
{
    return iteratorVersionUriIsSet_;
}

void CloudTestSuiteBasicInfo::unsetiteratorVersionUri()
{
    iteratorVersionUriIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getModuleId() const
{
    return moduleId_;
}

void CloudTestSuiteBasicInfo::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void CloudTestSuiteBasicInfo::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getModuleName() const
{
    return moduleName_;
}

void CloudTestSuiteBasicInfo::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void CloudTestSuiteBasicInfo::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getName() const
{
    return name_;
}

void CloudTestSuiteBasicInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::nameIsSet() const
{
    return nameIsSet_;
}

void CloudTestSuiteBasicInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getNodeId() const
{
    return nodeId_;
}

void CloudTestSuiteBasicInfo::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void CloudTestSuiteBasicInfo::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getOwnerId() const
{
    return ownerId_;
}

void CloudTestSuiteBasicInfo::setOwnerId(const std::string& value)
{
    ownerId_ = value;
    ownerIdIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::ownerIdIsSet() const
{
    return ownerIdIsSet_;
}

void CloudTestSuiteBasicInfo::unsetownerId()
{
    ownerIdIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getPlanId() const
{
    return planId_;
}

void CloudTestSuiteBasicInfo::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::planIdIsSet() const
{
    return planIdIsSet_;
}

void CloudTestSuiteBasicInfo::unsetplanId()
{
    planIdIsSet_ = false;
}

int64_t CloudTestSuiteBasicInfo::getPlanEndTimestamp() const
{
    return planEndTimestamp_;
}

void CloudTestSuiteBasicInfo::setPlanEndTimestamp(int64_t value)
{
    planEndTimestamp_ = value;
    planEndTimestampIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::planEndTimestampIsSet() const
{
    return planEndTimestampIsSet_;
}

void CloudTestSuiteBasicInfo::unsetplanEndTimestamp()
{
    planEndTimestampIsSet_ = false;
}

int64_t CloudTestSuiteBasicInfo::getPlanStartTimestamp() const
{
    return planStartTimestamp_;
}

void CloudTestSuiteBasicInfo::setPlanStartTimestamp(int64_t value)
{
    planStartTimestamp_ = value;
    planStartTimestampIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::planStartTimestampIsSet() const
{
    return planStartTimestampIsSet_;
}

void CloudTestSuiteBasicInfo::unsetplanStartTimestamp()
{
    planStartTimestampIsSet_ = false;
}

int64_t CloudTestSuiteBasicInfo::getProjectId() const
{
    return projectId_;
}

void CloudTestSuiteBasicInfo::setProjectId(int64_t value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CloudTestSuiteBasicInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getProjectUUId() const
{
    return projectUUId_;
}

void CloudTestSuiteBasicInfo::setProjectUUId(const std::string& value)
{
    projectUUId_ = value;
    projectUUIdIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::projectUUIdIsSet() const
{
    return projectUUIdIsSet_;
}

void CloudTestSuiteBasicInfo::unsetprojectUUId()
{
    projectUUIdIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getReleaseDev() const
{
    return releaseDev_;
}

void CloudTestSuiteBasicInfo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void CloudTestSuiteBasicInfo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

int32_t CloudTestSuiteBasicInfo::getResult() const
{
    return result_;
}

void CloudTestSuiteBasicInfo::setResult(int32_t value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::resultIsSet() const
{
    return resultIsSet_;
}

void CloudTestSuiteBasicInfo::unsetresult()
{
    resultIsSet_ = false;
}

int32_t CloudTestSuiteBasicInfo::getStatus() const
{
    return status_;
}

void CloudTestSuiteBasicInfo::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::statusIsSet() const
{
    return statusIsSet_;
}

void CloudTestSuiteBasicInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& CloudTestSuiteBasicInfo::getTags()
{
    return tags_;
}

void CloudTestSuiteBasicInfo::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void CloudTestSuiteBasicInfo::unsettags()
{
    tagsIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getTestSuiteId() const
{
    return testSuiteId_;
}

void CloudTestSuiteBasicInfo::setTestSuiteId(const std::string& value)
{
    testSuiteId_ = value;
    testSuiteIdIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::testSuiteIdIsSet() const
{
    return testSuiteIdIsSet_;
}

void CloudTestSuiteBasicInfo::unsettestSuiteId()
{
    testSuiteIdIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getTestSuiteNumber() const
{
    return testSuiteNumber_;
}

void CloudTestSuiteBasicInfo::setTestSuiteNumber(const std::string& value)
{
    testSuiteNumber_ = value;
    testSuiteNumberIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::testSuiteNumberIsSet() const
{
    return testSuiteNumberIsSet_;
}

void CloudTestSuiteBasicInfo::unsettestSuiteNumber()
{
    testSuiteNumberIsSet_ = false;
}

int32_t CloudTestSuiteBasicInfo::getType() const
{
    return type_;
}

void CloudTestSuiteBasicInfo::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::typeIsSet() const
{
    return typeIsSet_;
}

void CloudTestSuiteBasicInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getUpdateTime() const
{
    return updateTime_;
}

void CloudTestSuiteBasicInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CloudTestSuiteBasicInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getUpdateUser() const
{
    return updateUser_;
}

void CloudTestSuiteBasicInfo::setUpdateUser(const std::string& value)
{
    updateUser_ = value;
    updateUserIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::updateUserIsSet() const
{
    return updateUserIsSet_;
}

void CloudTestSuiteBasicInfo::unsetupdateUser()
{
    updateUserIsSet_ = false;
}

std::string CloudTestSuiteBasicInfo::getUpdateUserId() const
{
    return updateUserId_;
}

void CloudTestSuiteBasicInfo::setUpdateUserId(const std::string& value)
{
    updateUserId_ = value;
    updateUserIdIsSet_ = true;
}

bool CloudTestSuiteBasicInfo::updateUserIdIsSet() const
{
    return updateUserIdIsSet_;
}

void CloudTestSuiteBasicInfo::unsetupdateUserId()
{
    updateUserIdIsSet_ = false;
}

}
}
}
}
}


