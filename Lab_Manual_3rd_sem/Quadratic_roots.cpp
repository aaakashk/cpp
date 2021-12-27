#include <cmath>
#include <iostream>
using std::cout;

class Quadratic {
    int a, b, c;
    double D;

   public:
    Quadratic(int a = 0, int b = 0, int c = 0) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void discriminant() {
        D = b * b - 4 * a * c;
        if (D >= 0) {
            double root_1 = (-b + sqrt(D)) / 2;
            double root_2 = (-b - sqrt(D)) / 2;
            cout << "The roots are " << root_1 << " and " << root_2 << std::endl;

        } else
            cout << "No real roots.\n";
    }
};

int main() {
    int a, b, c;
    cout << "Enter the coefficients of the quadratic equation: ";
    std::cin >> a >> b >> c;
    Quadratic root(a, b, c);
    cout << "Equation: " << a << "x^2 + " << b << "x + " << c << " = 0" << std::endl;
    root.discriminant();
}