#include <iostream>
using std::cout;

class Complex {
    int real, imag;

   public:
    Complex(int x = 0, int y = 0) {
        real = x;
        imag = y;
    }

    Complex operator+(Complex B) {
        Complex A;
        A.real = this->real + B.real;
        A.imag = this->imag + B.imag;
        return A;
    }

    Complex operator-(Complex B) {
        Complex A;
        A.real = this->real - B.real;
        A.imag = this->imag - B.imag;
        return A;
    }

    void operator==(Complex B) {
        if (this->real == B.real)
            cout << "Equal." << std::endl;
        else
            cout << "Not Equal." << std::endl;
    }

    void display() {
        cout << real << " + i(" << imag << ")" << std::endl;
    }
};

int main() {
    Complex A, B(2, 3), C(5, 1), D(2, 3);
    A.display();
    B.display();
    C.display();
    A = B + C;
    A.display();
    A = B - C;
    A.display();
    B == C;
    B == D;
}