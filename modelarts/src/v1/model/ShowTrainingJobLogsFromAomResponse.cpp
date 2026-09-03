

#include "huaweicloud/modelarts/v1/model/ShowTrainingJobLogsFromAomResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowTrainingJobLogsFromAomResponse::ShowTrainingJobLogsFromAomResponse()
{
    startLine_ = "";
    startLineIsSet_ = false;
    endLine_ = "";
    endLineIsSet_ = false;
    lines_ = 0;
    linesIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
}

ShowTrainingJobLogsFromAomResponse::~ShowTrainingJobLogsFromAomResponse() = default;

void ShowTrainingJobLogsFromAomResponse::validate()
{
}

web::json::value ShowTrainingJobLogsFromAomResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startLineIsSet_) {
        val[utility::conversions::to_string_t("start_line")] = ModelBase::toJson(startLine_);
    }
    if(endLineIsSet_) {
        val[utility::conversions::to_string_t("end_line")] = ModelBase::toJson(endLine_);
    }
    if(linesIsSet_) {
        val[utility::conversions::to_string_t("lines")] = ModelBase::toJson(lines_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool ShowTrainingJobLogsFromAomResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_line"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_line"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}


std::string ShowTrainingJobLogsFromAomResponse::getStartLine() const
{
    return startLine_;
}

void ShowTrainingJobLogsFromAomResponse::setStartLine(const std::string& value)
{
    startLine_ = value;
    startLineIsSet_ = true;
}

bool ShowTrainingJobLogsFromAomResponse::startLineIsSet() const
{
    return startLineIsSet_;
}

void ShowTrainingJobLogsFromAomResponse::unsetstartLine()
{
    startLineIsSet_ = false;
}

std::string ShowTrainingJobLogsFromAomResponse::getEndLine() const
{
    return endLine_;
}

void ShowTrainingJobLogsFromAomResponse::setEndLine(const std::string& value)
{
    endLine_ = value;
    endLineIsSet_ = true;
}

bool ShowTrainingJobLogsFromAomResponse::endLineIsSet() const
{
    return endLineIsSet_;
}

void ShowTrainingJobLogsFromAomResponse::unsetendLine()
{
    endLineIsSet_ = false;
}

int32_t ShowTrainingJobLogsFromAomResponse::getLines() const
{
    return lines_;
}

void ShowTrainingJobLogsFromAomResponse::setLines(int32_t value)
{
    lines_ = value;
    linesIsSet_ = true;
}

bool ShowTrainingJobLogsFromAomResponse::linesIsSet() const
{
    return linesIsSet_;
}

void ShowTrainingJobLogsFromAomResponse::unsetlines()
{
    linesIsSet_ = false;
}

std::string ShowTrainingJobLogsFromAomResponse::getContent() const
{
    return content_;
}

void ShowTrainingJobLogsFromAomResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ShowTrainingJobLogsFromAomResponse::contentIsSet() const
{
    return contentIsSet_;
}

void ShowTrainingJobLogsFromAomResponse::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


