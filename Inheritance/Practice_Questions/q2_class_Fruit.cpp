#include <iostream>
using std::cout;

class Apples;
class Mangoes;
class Fruit {
   protected:
    int numberOfFruits;
};

class Apples : public Fruit {
   public:
    int numberOfApples;
    int getApples() { return numberOfFruits; }
    void setApples(int numApple) { numberOfApples = numApple; }
    void print() { cout << "Apples = " << numberOfApples << "\n"; }
};

class Mangoes : public Fruit {
   public:
    int numberOfMangoes;
    void setMangoes(int numMangoes) { numberOfMangoes = numMangoes; }
    void print() {
        cout << "Mangoes = " << numberOfMangoes << "\n";
    }
    void print_total(Apples a) {
        numberOfFruits = numberOfMangoes + a.numberOfApples;
        cout << "Fruits = " << numberOfFruits << "\n";
    }
};

int main() {
    Apples apple;
    apple.setApples(10);
    apple.print();
    Mangoes mango;
    mango.setMangoes(5);
    mango.print();
    mango.print_total(apple);
}