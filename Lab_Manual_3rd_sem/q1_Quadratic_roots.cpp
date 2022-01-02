#include <cmath>
#include <iostream>
using std::cout;

class Quadratic {
    float a, b, c;
    float D;

   public:
    Quadratic(float a, float b, float c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void discriminant() {
        D = b * b - 4 * a * c;

        if (D < 0)
            cout << "No real roots.\n";
        else {
            float root_1 = (-b + sqrt(D)) / 2;
            float root_2 = (-b - sqrt(D)) / 2;
            cout << "The roots are " << root_1 << " and " << root_2 << std::endl;
        }
    }
};

int main() {
    float a, b, c;
    cout << "Enter the coefficients of the quadratic equation: ";
    std::cin >> a >> b >> c;
    Quadratic root(a, b, c);
    cout << "Equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
    root.discriminant();
}