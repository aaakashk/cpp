#include <iostream>
using std::cout;

class Shape {
   protected:
    float width, height;

   public:
    Shape(float w, float h) : width(w), height(h) {}
};

class Triangle : protected Shape {
    float base;

   public:
    Triangle(float b, float w, float h) : Shape(w, h), base(b) {}

    void area() {
        cout << "The area of triangle is " << height * base / 2 << "\n";
    }
};

class Rectangle : protected Shape {
    float length;

   public:
    Rectangle(float len, float w, float h) : Shape(w, h), length(len) {}

    void area() {
        cout << "The area of the rectangle is " << length * width << "\n";
    }
};

int main() {
    Triangle triangle(3.0f, 0.0f, 12.0f);
    Rectangle rectangle(6.0f, 5.0f, 0.0f);
    triangle.area();
    rectangle.area();
}