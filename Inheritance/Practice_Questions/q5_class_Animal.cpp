#include <iostream>

class Animal {
   protected:
    int age;
    std::string name;

   public:
    void setAge(int a) { age = a; }
    void setName(std::string n) { name = n; }
};

class Zebra : public Animal {
    std::string color, origin;

   public:
    Zebra(std::string c, std::string og) : color(c), origin(og) {}
    void printMessage() {
        std::cout << "The name of the animal is " << name << ".\n"
                  << "The age of Zebra is " << age << ".\n"
                  << "The place of origin of the Zebra is " << origin << ".\n"
                  << "The color of the Zebra is " << color << ".\n";
    }
};

class Dolphin : public Animal {
    std::string color, origin;

   public:
    Dolphin(std::string c, std::string og) : color(c), origin(og) {}
    void printMessage() {
        std::cout << "The name of the animal is " << name << ".\n"
                  << "The age of Dolphin is " << age << ".\n"
                  << "The place of origin of the Dolphin is " << origin << ".\n"
                  << "The color of the Dolphin is " << color << ".\n";
    }
};

int main() {
    Zebra z("Black and White", "Africa");
    Dolphin d("Blue and White", "Pacific Ocean");
    z.setName("Zebra");
    z.setAge(13);
    z.printMessage();
    std::cout << "--------------------------------------------\n";
    d.setName("Dolphin");
    d.setAge(11);
    d.printMessage();
}