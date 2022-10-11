#ifndef __POWER__POINT__H__
#define __POWER__POINT__H__

#include <string>

#include "ETypes.h"

namespace PowerPoint {

    class ItemsActions { // Interface - abstract class
    public:
        ItemsActions() = default;
        virtual ~ItemsActions() = default;

        void virtual SetSize(const size_t) = 0;
        size_t virtual GetSize() noexcept = 0;
        void virtual SetBorderSize(const size_t) = 0;
        size_t virtual GetBorderSize() noexcept = 0;
        void virtual SetColor(const Color) = 0;
        Color virtual GetColor() noexcept = 0;
        void virtual SetBackgroundColor(const Color) = 0;
        Color virtual GetBackgroundColor() noexcept = 0;
    private:

    }; // ItemsActions


    class Paragraph : public ItemsActions {
    public:
        Paragraph(const std::string&, Color, Color, const size_t);

        void SetSize(const size_t) override;
        size_t GetSize() noexcept override;
        void SetBorderSize(const size_t) override;
        size_t GetBorderSize() noexcept override;
        void SetColor(const Color) override;
        Color GetColor() noexcept override;
        void SetBackgroundColor(const Color) override;
        Color GetBackgroundColor() noexcept override;

        ~Paragraph();
    private:
        std::string m_paragraph{ "" };
        ItemData m_data;

    }; // Paragraph

    class Shape : virtual public ItemsActions {
    public:
        Shape(const Shapes&, Color, Color, const size_t);

        void SetSize(const size_t) override;
        size_t GetSize() noexcept override;
        void SetBorderSize(const size_t) override;
        size_t GetBorderSize() noexcept override;
        void SetColor(const Color) override;
        Color GetColor() noexcept override;
        void SetBackgroundColor(const Color) override;
        Color GetBackgroundColor() noexcept override;
        virtual void DrawMe();

        virtual ~Shape();
    protected:
        Shapes m_shape;
        ItemData m_data;
    }; // Shape

    class Rectangle : public Shape {
    public:
        Rectangle(const Shapes&, Color, Color, const size_t);
        void DrawMe() override;
    private:
    };

    class Square : public Shape {
    public:
        Square(const Shapes&, Color, Color, const size_t);
        void DrawMe() override;
    private:
    };

    class Triangle : public Shape {
    public:
        Triangle(const Shapes&, Color, Color, const size_t);
        void DrawMe() override;
    private:
    };

    class Circle : public Shape {
    public:
        Circle(const Shapes&, Color, Color, const size_t);
        void DrawMe() override;
    private:
    };

} // PowerPoint namespace

#include "PowerPoint.impl.h"

//class PowerPoint { // Interface - abstract class
//public:
//    PowerPoint() = default;
//    // Window model
//    void virtual SetWindowWidth(const size_t) = 0;
//    void virtual SetWindowHeight(const size_t) = 0;
//    void virtual SetWindowBackgroundColor(const Color) = 0;
//    // Paragraph model
//    void virtual SetParagraph(const std::string&) = 0;
//    void virtual SetParagraphSize(const size_t) = 0;
//    void virtual SetParagraphColor(const Color) = 0;
//    // Shape model
//    void virtual CreateShape(const Shapes) = 0;
//    void virtual SetShapeSize(const size_t) = 0;
//    void virtual SetShapeColor(const Color) = 0;
//    void virtual SetShapeBackgroungColor(const Color) = 0;
//
//    //PowerPoint(const PowerPoint&); // Copy-init
//    //PowerPoint& operator=(const PowerPoint&); // Copy-assign
//    ~PowerPoint() = default;
//private:
//
//}; // PowerPoint
//
//class PowerPoint_Impl : public PowerPoint {
//public:
//    PowerPoint_Impl() : PowerPoint() {}
//
//    void SetWindowWidth(const size_t);
//    void SetWindowHeight(const size_t);
//    void SetWindowBackgroundColor(const Color);
//    // Paragraph model
//    void SetParagraph(const std::string&);
//    void SetParagraphSize(const size_t);
//    void SetParagraphColor(const Color);
//    // Shape model
//    void CreateShape(const Shapes);
//    void SetShapeSize(const size_t);
//    void SetShapeColor(const Color);
//    void SetShapeBackgroungColor(const Color);
//
//private:
//    size_t m_windowWidth{ 100 };
//    size_t m_windowHeight{ 40 };
//    Color m_windowBackgroundColor{ Color::White };
//
//};
//#include "dllmain.impl.cpp"

#endif // __POWER__POINT__H__
