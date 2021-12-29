#include <iostream>
using std::cin;
using std::cout;

class Area {
    float area;
    int side;
    int length, breadth;
    float base, height;

   public:
    float calculateArea(int side) {
        return side * side;
    }

    float calculateArea(int length, int breadth) {
        return length * breadth;
    }

    float calculateArea(float base, float height) {
        return (base * height) / 2;
    }
};

int main() {
    int side, length, breadth;
    float base, height;
    cout << "Enter the side of the sqaure: ";
    cin >> side;
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;

    //sq is an object for sqaure, r is for rectangle, t for triangle
    Area sq, r, t;

    cout << "The area of the square is " << sq.calculateArea(side) << std::endl;
    cout << "The area of the rectangle is " << sq.calculateArea(length, breadth) << std::endl;
    cout << "The area of the triangle is " << sq.calculateArea(base, height) << std::endl;
}