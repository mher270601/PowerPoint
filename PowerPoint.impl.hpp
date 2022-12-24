#ifndef __POWER__POINT__IMPL__CPP__
#define __POWER__POINT__IMPL__CPP__

#include <iostream>
#include <string>
#include <vector>

#include "ETypes.hpp"

// Text
PowerPoint::Text::Text(const std::string& paragraph, Color color, Color backgroundColor, const size_t size) :
	m_text{ paragraph },
	m_data(color, backgroundColor, size)
{
}

void PowerPoint::Text::SetSize(const size_t size) {
	m_data.size = size;
}

void PowerPoint::Text::SetBorderSize(const size_t size) {
	m_data.borderSize = size;
}

void PowerPoint::Text::SetColor(const Color color) {
	m_data.color = color;
}

void PowerPoint::Text::SetBackgroundColor(const Color color) {
	m_data.backgroundColor = color;
}

void PowerPoint::Text::PrintMe() const noexcept {
	std::cout << m_text << std::endl;
}

PowerPoint::Text::~Text() {

}
// Shape
PowerPoint::Shape::Shape(const Shapes& shape, Color color, Color backgroundColor, const size_t size) :
	m_shape{ shape },
	m_data(color, backgroundColor, size)
{
}

void PowerPoint::Shape::SetSize(const size_t size) {
	m_data.size = size;
}

//inline size_t PowerPoint::Shape::GetSize() noexcept {
//	return m_data.size;
//}

void PowerPoint::Shape::SetBorderSize(const size_t size) {
	m_data.borderSize = size;
}

//inline size_t PowerPoint::Shape::GetBorderSize() noexcept {
//	return m_data.borderSize;
//}

void PowerPoint::Shape::SetColor(const Color color) {
	m_data.color = color;
}

//inline Color PowerPoint::Shape::GetColor() noexcept {
//	return m_data.color;
//}

void PowerPoint::Shape::SetBackgroundColor(const Color color) {
	m_data.backgroundColor = color;
}

//inline Color PowerPoint::Shape::GetBackgroundColor() noexcept {
//	return m_data.backgroundColor;
//}

void PowerPoint::Shape::PrintMe() const noexcept {

}

PowerPoint::Shape::~Shape() {
}

// Rectangle

PowerPoint::Rectangle::Rectangle(Color color, Color backgroundColor, const size_t size) :
	Shape(Shapes::Rectangle, color, backgroundColor, size) {

}

void PowerPoint::Rectangle::PrintMe() const noexcept {

}

PowerPoint::Square::Square(Color color, Color backgroundColor, const size_t size) :
	Shape(Shapes::Square, color, backgroundColor, size) {

}

void PowerPoint::Square::PrintMe() const noexcept {

}

PowerPoint::Triangle::Triangle(Color color, Color backgroundColor, const size_t size) :
	Shape(Shapes::Triangle, color, backgroundColor, size) {

}

void PowerPoint::Triangle::PrintMe() const noexcept {

}

PowerPoint::Circle::Circle(Color color, Color backgroundColor, const size_t size) :
	Shape(Shapes::Circle, color, backgroundColor, size) {

}

void PowerPoint::Circle::PrintMe() const noexcept {

}

void PowerPoint::Group::SetSize(const size_t size) {
	for (const auto& item : m_groupItems) {
		item->SetSize(size);
	}
}
void PowerPoint::Group::SetBorderSize(const size_t borderSize) {
	for (const auto& item : m_groupItems) {
		item->SetBorderSize(borderSize);
	}
}
void PowerPoint::Group::SetColor(const Color color) {
	for (const auto& item : m_groupItems) {
		item->SetColor(color);
	}
}
void PowerPoint::Group::SetBackgroundColor(const Color backgroundColor) {
	for (const auto& item : m_groupItems) {
		item->SetBackgroundColor(backgroundColor);
	}
}

void PowerPoint::Group::AddGroup(const IObjectPtr& groupItem) {
	m_groupItems.push_back(groupItem);
}

void PowerPoint::Group::PrintMe() const noexcept {
	for(const auto& item : m_groupItems){
		item->PrintMe();
	}
}

PowerPoint::Group::~Group() {
}


void PowerPoint::Slide::SetSize(const size_t size) {
	for (const auto& item : m_slide) {
		item->SetSize(size);
	}
}
void PowerPoint::Slide::SetBorderSize(const size_t borderSize) {
	for (const auto& item : m_slide) {
		item->SetBorderSize(borderSize);
	}
}
void PowerPoint::Slide::SetColor(const Color color) {
	for (const auto& item : m_slide) {
		item->SetColor(color);
	}
}
void PowerPoint::Slide::SetBackgroundColor(const Color backgroundColor) {
	for (const auto& item : m_slide) {
		item->SetBackgroundColor(backgroundColor);
	}
}

void PowerPoint::Slide::AddObject(IObjectPtr object) {
	m_slide.push_back(object);
}

void PowerPoint::Slide::PrintMe() const noexcept {
	for (const auto& item : m_slide) {
		item->PrintMe();
	}
}

PowerPoint::Slide::~Slide() {
	//for (auto& elem : m_slide) {
	//	delete elem;
	//}
}

//void PowerPoint::GroupItem::SetSize(const size_t size) {
//	for (const auto& item : m_group) {
//		item->SetSize(size);
//	}
//}
//void PowerPoint::GroupItem::SetBorderSize(const size_t borderSize) {
//	for (const auto& item : m_group) {
//		item->SetBorderSize(borderSize);
//	}
//}
//void PowerPoint::GroupItem::SetColor(const Color color) {
//	for (const auto& item : m_group) {
//		item->SetColor(color);
//	}
//}
//void PowerPoint::GroupItem::SetBackgroundColor(const Color backgroundColor) {
//	for (const auto& item : m_group) {
//		item->SetBackgroundColor(backgroundColor);
//	}
//}
//
//void PowerPoint::GroupItem::AddObject(ItemPtr object) {
//	m_group.push_back(object);
//}
//
//void PowerPoint::GroupItem::PrintMe() const noexcept {
//	for (const auto& item : m_group) {
//		item->PrintMe();
//	}
//}

void PowerPoint::Group::MoveRight(const size_t plusX) {
	//m_coords.x += plusX;
}

void PowerPoint::Group::MoveLeft(const size_t minusX) {
	//m_coords.x -= minusX;
}

void PowerPoint::Group::MoveTop(const size_t plusY) {
	//m_coords.y += plusY;
}

void PowerPoint::Group::MoveBottom(const size_t minusY) {
	//m_coords.y -= minusY;
}

#endif // #ifndef __POWER__POINT__IMPL__CPP__
