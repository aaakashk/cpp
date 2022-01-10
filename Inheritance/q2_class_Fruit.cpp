#include <iostream>
using std::cout;

class Fruit {
   protected:
    int numberOfFruits;

   public:
    Fruit() {
    }
    Fruit(int fruits) {
        numberOfFruits = fruits;
    }
    void print() { cout << "Fruits = " << numberOfFruits << "\n"; }
};

class Apples : protected Fruit {
   public:
    void setApples(int numApple) { numberOfFruits = numApple; }
    void print() { cout << "Apples = " << numberOfFruits << "\n"; }
};

class Mangoes : protected Fruit {
   public:
    void setMangoes(int numMangoes) { numberOfFruits = numMangoes; }
    void print() { cout << "Mangoes = " << numberOfFruits << "\n"; }
};

int main() {
    int total_fruits;
    cout << "Enter the total number of fruits: ";
    std::cin >> total_fruits;
    Fruit fruit(total_fruits);
    fruit.print();
    Apples apple;
    apple.setApples(10);
    apple.print();
    Mangoes mango;
    mango.setMangoes(5);
    mango.print();
}