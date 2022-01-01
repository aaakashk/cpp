#include <iostream>

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
        std::cout << "The number of cars : " << numberCars << std::endl;
        std::cout << "The total amount of cash is : " << totalAmount << std::endl;
    }
};

int main() {
    TollBooth test;
    char choice;
    do {
        std::cout << "Enter 1 for paying Car method.\n"
                     "Enter 2 for non paying Car.\n"
                     "Enter e to exit the program.\n";
        std::cin >> choice;
        switch (choice) {
            case '1':
                test.payingCar();
                test.displaytotals();
                break;
            case '2':
                test.nonPayingCar();
                test.displaytotals();
                break;
            case 'e':
                exit(1);
            default:
                std::cout << "Wrong choice. Enter again\n";
        }
    } while (1);
}