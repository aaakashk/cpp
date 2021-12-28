#include <iostream>
using std::cout;
using std::endl;

class Complex {
    int real, imag;

   public:
    Complex(int x = 0, int y = 0) {
        real = x;
        imag = y;
    }
    Complex operator*(Complex B) {
        Complex A;
        A.real = this->real * B.real;
        A.imag = this->imag * B.imag;
        return A;
    }

    Complex operator*(int z) {
        Complex A;
        A.real = this->real * z;
        A.imag = this->imag * z;
        return A;
    }

    Complex operator+(Complex B) {
        Complex A;
        A.real = this->real + B.real;
        A.imag = this->imag + B.imag;
        return A;
    }

    Complex operator+(int z) {
        Complex A;
        A.real = this->real + z;
        A.imag = this->imag + z;
        return A;
    }

    Complex operator-(Complex B) {
        Complex A;
        A.real = this->real - B.real;
        A.imag = this->imag - B.imag;
        return A;
    }
    //friend function is needed when a non-object calls an operator
    friend Complex operator*(int z, Complex B);

    void display() {
        cout << real << " + i(" << imag << ")" << endl;
    }
};

Complex operator*(int z, Complex B) {
    Complex A;
    A.real = z * B.real;
    A.imag = z * B.imag;
    return A;
}

int main() {
    Complex A(1, 1), B(4, -2), C(5, 3), D(7, 2), E(6, 8), F(7, 2);
    A.display();
    cout << "B = ";
    B.display();
    cout << "C = ";
    C.display();
    cout << "D = ";
    D.display();
    cout << "E = ";
    E.display();
    A = B * C;
    A.display();
    A = A * 8;
    A.display();
    A = 8 * A;
    A.display();
    A = B + C + D - 5 * E + 8;
    A.display();
    F = F * 8;
    F.display();
}