#include "pch.h"
#ifndef __POWER__POINT__IMPL__CPP__
#define __POWER__POINT__IMPL__CPP__

#include <string>

#include "ETypes.h"

// Paragraph
PowerPoint::Paragraph::Paragraph(const std::string& paragraph, Color color, Color backgroundColor, const size_t size) :
	m_paragraph{ paragraph },
	m_data(color, backgroundColor, size)
{
}

void PowerPoint::Paragraph::SetSize(const size_t size) {
	m_data.size = size;
}

inline size_t PowerPoint::Paragraph::GetSize() noexcept {
	return m_data.size;
}

void PowerPoint::Paragraph::SetBorderSize(const size_t size) {
	m_data.borderSize = size;
}

inline size_t PowerPoint::Paragraph::GetBorderSize() noexcept {
	return m_data.borderSize;
}

void PowerPoint::Paragraph::SetColor(const Color color) {
	m_data.color = color;
}

inline Color PowerPoint::Paragraph::GetColor() noexcept {
	return m_data.color;
}

void PowerPoint::Paragraph::SetBackgroundColor(const Color color) {
	m_data.backgroundColor = color;
}

inline Color PowerPoint::Paragraph::GetBackgroundColor() noexcept {
	return m_data.backgroundColor;
}

PowerPoint::Paragraph::~Paragraph() {

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

inline size_t PowerPoint::Shape::GetSize() noexcept {
	return m_data.size;
}

void PowerPoint::Shape::SetBorderSize(const size_t size) {
	m_data.borderSize = size;
}

inline size_t PowerPoint::Shape::GetBorderSize() noexcept {
	return m_data.borderSize;
}

void PowerPoint::Shape::SetColor(const Color color) {
	m_data.color = color;
}

inline Color PowerPoint::Shape::GetColor() noexcept {
	return m_data.color;
}

void PowerPoint::Shape::SetBackgroundColor(const Color color) {
	m_data.backgroundColor = color;
}

inline Color PowerPoint::Shape::GetBackgroundColor() noexcept {
	return m_data.backgroundColor;
}

void PowerPoint::Shape::DrawMe() {
}

PowerPoint::Shape::~Shape() {
}

// Rectangle

PowerPoint::Rectangle::Rectangle(const Shapes& shape, Color color, Color backgroundColor, const size_t size) : 
	Shape(shape, color, backgroundColor, size) {

}

void PowerPoint::Rectangle::DrawMe() {

}

PowerPoint::Square::Square(const Shapes& shape, Color color, Color backgroundColor, const size_t size) :
	Shape(shape, color, backgroundColor, size) {

}

void PowerPoint::Square::DrawMe() {

}

PowerPoint::Triangle::Triangle(const Shapes& shape, Color color, Color backgroundColor, const size_t size) :
	Shape(shape, color, backgroundColor, size) {

}

void PowerPoint::Triangle::DrawMe() {

}

PowerPoint::Circle::Circle(const Shapes& shape, Color color, Color backgroundColor, const size_t size) :
	Shape(shape, color, backgroundColor, size) {

}

void PowerPoint::Circle::DrawMe() {
	
}

#endif // #ifndef __POWER__POINT__IMPL__CPP__