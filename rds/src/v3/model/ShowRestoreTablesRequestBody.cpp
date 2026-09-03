

#include "huaweicloud/rds/v3/model/ShowRestoreTablesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowRestoreTablesRequestBody::ShowRestoreTablesRequestBody()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    workflowName_ = "";
    workflowNameIsSet_ = false;
}

ShowRestoreTablesRequestBody::~ShowRestoreTablesRequestBody() = default;

void ShowRestoreTablesRequestBody::validate()
{
}

web::json::value ShowRestoreTablesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(workflowNameIsSet_) {
        val[utility::conversions::to_string_t("workflow_name")] = ModelBase::toJson(workflowName_);
    }

    return val;
}
bool ShowRestoreTablesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workflow_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowName(refVal);
        }
    }
    return ok;
}


std::string ShowRestoreTablesRequestBody::getWorkflowId() const
{
    return workflowId_;
}

void ShowRestoreTablesRequestBody::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ShowRestoreTablesRequestBody::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ShowRestoreTablesRequestBody::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string ShowRestoreTablesRequestBody::getWorkflowName() const
{
    return workflowName_;
}

void ShowRestoreTablesRequestBody::setWorkflowName(const std::string& value)
{
    workflowName_ = value;
    workflowNameIsSet_ = true;
}

bool ShowRestoreTablesRequestBody::workflowNameIsSet() const
{
    return workflowNameIsSet_;
}

void ShowRestoreTablesRequestBody::unsetworkflowName()
{
    workflowNameIsSet_ = false;
}

}
}
}
}
}


