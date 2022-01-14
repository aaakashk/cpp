#include <iostream>
using std::cout;

class Base {
   public:
    Base() {
        cout << "Base called.\n";
    }
    Base(int x) {
        cout << x << "Base with int called.\n";
    }
};

class DerivedOne : public virtual Base {
   public:
    int x;
    DerivedOne() : x(110) { cout << x << "Derived One called.\n"; }
    DerivedOne(int x) : Base() {
        cout << "Derived One called.\n";
    }
};

class DerivedTwo : public virtual Base {
   public:
    //DerivedTwo() { cout << "Derived Two non parameterised called.\n"; }
    DerivedTwo(int x) : Base() {
        cout << "Derived Two called.\n";
    }
};

class Child : public DerivedOne, public DerivedTwo {
   public:
    Child(int x) : DerivedTwo(8), Base() {
        cout << "Child class called.\n";
    }
};

int main() {
    Child child(10);
}