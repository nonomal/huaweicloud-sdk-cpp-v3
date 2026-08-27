

#include "huaweicloud/modelarts/v1/model/ResourceFlavorXpu.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceFlavorXpu::ResourceFlavorXpu()
{
    type_ = "";
    typeIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
    memory_ = "";
    memoryIsSet_ = false;
    card_ = "";
    cardIsSet_ = false;
    chip_ = "";
    chipIsSet_ = false;
}

ResourceFlavorXpu::~ResourceFlavorXpu() = default;

void ResourceFlavorXpu::validate()
{
}

web::json::value ResourceFlavorXpu::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(memoryIsSet_) {
        val[utility::conversions::to_string_t("memory")] = ModelBase::toJson(memory_);
    }
    if(cardIsSet_) {
        val[utility::conversions::to_string_t("card")] = ModelBase::toJson(card_);
    }
    if(chipIsSet_) {
        val[utility::conversions::to_string_t("chip")] = ModelBase::toJson(chip_);
    }

    return val;
}
bool ResourceFlavorXpu::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("card"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCard(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChip(refVal);
        }
    }
    return ok;
}


std::string ResourceFlavorXpu::getType() const
{
    return type_;
}

void ResourceFlavorXpu::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ResourceFlavorXpu::typeIsSet() const
{
    return typeIsSet_;
}

void ResourceFlavorXpu::unsettype()
{
    typeIsSet_ = false;
}

std::string ResourceFlavorXpu::getSize() const
{
    return size_;
}

void ResourceFlavorXpu::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ResourceFlavorXpu::sizeIsSet() const
{
    return sizeIsSet_;
}

void ResourceFlavorXpu::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ResourceFlavorXpu::getMemory() const
{
    return memory_;
}

void ResourceFlavorXpu::setMemory(const std::string& value)
{
    memory_ = value;
    memoryIsSet_ = true;
}

bool ResourceFlavorXpu::memoryIsSet() const
{
    return memoryIsSet_;
}

void ResourceFlavorXpu::unsetmemory()
{
    memoryIsSet_ = false;
}

std::string ResourceFlavorXpu::getCard() const
{
    return card_;
}

void ResourceFlavorXpu::setCard(const std::string& value)
{
    card_ = value;
    cardIsSet_ = true;
}

bool ResourceFlavorXpu::cardIsSet() const
{
    return cardIsSet_;
}

void ResourceFlavorXpu::unsetcard()
{
    cardIsSet_ = false;
}

std::string ResourceFlavorXpu::getChip() const
{
    return chip_;
}

void ResourceFlavorXpu::setChip(const std::string& value)
{
    chip_ = value;
    chipIsSet_ = true;
}

bool ResourceFlavorXpu::chipIsSet() const
{
    return chipIsSet_;
}

void ResourceFlavorXpu::unsetchip()
{
    chipIsSet_ = false;
}

}
}
}
}
}


