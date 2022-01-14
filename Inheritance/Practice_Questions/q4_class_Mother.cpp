#include <iostream>

class Mother {
   public:
    void display() {
        std::cout << "This is the Mother class.\n";
    }
};

class Daughter : public Mother {
   public:
    void display() {
        std::cout << "This is the Daughter class.\n";
    }
};

int main() {
    Daughter d;
    d.Mother::display();
    d.display();
}