#include <iostream>
using std::cout;

class DataAbstraction {
   private:
    int a;

   public:
    int b;
    DataAbstraction() {
        a = 9;
        b = 5;
    }
    void printA() {
        cout << "a = " << a << std::endl;
    }
};

int main() {
    DataAbstraction d;
    //display b
    cout << "b = " << d.b << std::endl;
    //display a
    //cannot access a using object d as d.a but
    //using member function printA()
    d.printA();
}