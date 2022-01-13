#include <iostream>
using std::cout;

//class Apples;
//class Mangoes;
class Fruit {
   protected:
    int numberOfFruits;

   public:
    void print_total(Apples a, Mangoes m) {
        cout << "Total Fruits = " << a.numberOfApples + m.numberofMangoes;
    }
};

class Apples : public Fruit {
   public:
    int numberOfApples;
    void setApples(int numApple) { numberOfApples = numApple; }
    void print() { cout << "Apples = " << numberOfApples << "\n"; }
};

class Mangoes : protected Fruit {
   public:
    int numberOfMangoes;
    void setMangoes(int numMangoes) { numberOfMangoes = numMangoes; }
    void print(Apples a) {
        cout << "Mangoes = " << numberOfMangoes << "\n";
        cout << "Fruits = " << a.numberOfApples + numberOfMangoes << "\n";
    }
};

int main() {
    Apples apple;
    apple.setApples(10);
    apple.print();
    Mangoes mango;
    mango.setMangoes(5);
    mango.print(apple);
    apple.print_total(apple, mango);
}