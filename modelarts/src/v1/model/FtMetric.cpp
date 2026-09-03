

#include "huaweicloud/modelarts/v1/model/FtMetric.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




FtMetric::FtMetric()
{
    nameCn_ = "";
    nameCnIsSet_ = false;
    nameEn_ = "";
    nameEnIsSet_ = false;
    desEn_ = "";
    desEnIsSet_ = false;
    desCn_ = "";
    desCnIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    group_ = "";
    groupIsSet_ = false;
    groupByIsSet_ = false;
    xAxis_ = "";
    xAxisIsSet_ = false;
    tagsIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
    dataIsSet_ = false;
}

FtMetric::~FtMetric() = default;

void FtMetric::validate()
{
}

web::json::value FtMetric::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameCnIsSet_) {
        val[utility::conversions::to_string_t("name_cn")] = ModelBase::toJson(nameCn_);
    }
    if(nameEnIsSet_) {
        val[utility::conversions::to_string_t("name_en")] = ModelBase::toJson(nameEn_);
    }
    if(desEnIsSet_) {
        val[utility::conversions::to_string_t("des_en")] = ModelBase::toJson(desEn_);
    }
    if(desCnIsSet_) {
        val[utility::conversions::to_string_t("des_cn")] = ModelBase::toJson(desCn_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(groupIsSet_) {
        val[utility::conversions::to_string_t("group")] = ModelBase::toJson(group_);
    }
    if(groupByIsSet_) {
        val[utility::conversions::to_string_t("group_by")] = ModelBase::toJson(groupBy_);
    }
    if(xAxisIsSet_) {
        val[utility::conversions::to_string_t("x_axis")] = ModelBase::toJson(xAxis_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool FtMetric::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("des_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("des_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("des_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("des_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_by"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("x_axis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("x_axis"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAxis(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


std::string FtMetric::getNameCn() const
{
    return nameCn_;
}

void FtMetric::setNameCn(const std::string& value)
{
    nameCn_ = value;
    nameCnIsSet_ = true;
}

bool FtMetric::nameCnIsSet() const
{
    return nameCnIsSet_;
}

void FtMetric::unsetnameCn()
{
    nameCnIsSet_ = false;
}

std::string FtMetric::getNameEn() const
{
    return nameEn_;
}

void FtMetric::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool FtMetric::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void FtMetric::unsetnameEn()
{
    nameEnIsSet_ = false;
}

std::string FtMetric::getDesEn() const
{
    return desEn_;
}

void FtMetric::setDesEn(const std::string& value)
{
    desEn_ = value;
    desEnIsSet_ = true;
}

bool FtMetric::desEnIsSet() const
{
    return desEnIsSet_;
}

void FtMetric::unsetdesEn()
{
    desEnIsSet_ = false;
}

std::string FtMetric::getDesCn() const
{
    return desCn_;
}

void FtMetric::setDesCn(const std::string& value)
{
    desCn_ = value;
    desCnIsSet_ = true;
}

bool FtMetric::desCnIsSet() const
{
    return desCnIsSet_;
}

void FtMetric::unsetdesCn()
{
    desCnIsSet_ = false;
}

std::string FtMetric::getType() const
{
    return type_;
}

void FtMetric::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool FtMetric::typeIsSet() const
{
    return typeIsSet_;
}

void FtMetric::unsettype()
{
    typeIsSet_ = false;
}

std::string FtMetric::getGroup() const
{
    return group_;
}

void FtMetric::setGroup(const std::string& value)
{
    group_ = value;
    groupIsSet_ = true;
}

bool FtMetric::groupIsSet() const
{
    return groupIsSet_;
}

void FtMetric::unsetgroup()
{
    groupIsSet_ = false;
}

std::vector<std::string>& FtMetric::getGroupBy()
{
    return groupBy_;
}

void FtMetric::setGroupBy(const std::vector<std::string>& value)
{
    groupBy_ = value;
    groupByIsSet_ = true;
}

bool FtMetric::groupByIsSet() const
{
    return groupByIsSet_;
}

void FtMetric::unsetgroupBy()
{
    groupByIsSet_ = false;
}

std::string FtMetric::getXAxis() const
{
    return xAxis_;
}

void FtMetric::setXAxis(const std::string& value)
{
    xAxis_ = value;
    xAxisIsSet_ = true;
}

bool FtMetric::xAxisIsSet() const
{
    return xAxisIsSet_;
}

void FtMetric::unsetxAxis()
{
    xAxisIsSet_ = false;
}

std::vector<std::string>& FtMetric::getTags()
{
    return tags_;
}

void FtMetric::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool FtMetric::tagsIsSet() const
{
    return tagsIsSet_;
}

void FtMetric::unsettags()
{
    tagsIsSet_ = false;
}

std::string FtMetric::getUnit() const
{
    return unit_;
}

void FtMetric::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool FtMetric::unitIsSet() const
{
    return unitIsSet_;
}

void FtMetric::unsetunit()
{
    unitIsSet_ = false;
}

Object FtMetric::getData() const
{
    return data_;
}

void FtMetric::setData(const Object& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool FtMetric::dataIsSet() const
{
    return dataIsSet_;
}

void FtMetric::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


