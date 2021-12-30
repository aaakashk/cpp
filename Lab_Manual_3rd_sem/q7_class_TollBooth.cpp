#include <iostream>
using std::cin;
using std::cout;

class TollBooth {
    unsigned int numberCars;
    double totalAmount;

   public:
    TollBooth() {
        numberCars = 0;
        totalAmount = 0.0;
    }

    void payingCar() {
        numberCars++;
        totalAmount += 0.5;
    }

    void nonPayingCar() {
        numberCars++;
    }

    void displaytotals() {
        cout << "The number of cars : " << numberCars << std::endl;
        cout << "The total amount of cash is : " << totalAmount << std::endl;
    }
};

int main() {
    TollBooth test;
    test.payingCar();
    test.displaytotals();
    test.payingCar();
    test.displaytotals();
    test.nonPayingCar();
    test.displaytotals();
}