#include <iostream>
using std::cout;
#define MAX_SIZE 100

class Electricity {
   public:
    int units;
    std::string name;
    void getData(int i) {
        cout << "Enter the user " << i + 1 << " name : ";
        getline(std::cin.ignore(), name);
        cout << "Enter the number of units of energy consumed: ";
        std::cin >> units;
    }

    float calcElecTax() {
        float total_amount;
        if (units <= 100)
            total_amount = (units * 0.60) + 50;
        else if (units > 100 && units <= 300)
            total_amount = 110 + (units - 100) * 0.80;
        else if (units > 300)
            total_amount = 330 + (units - 300) * 0.90;
        return total_amount;
    }

    void display(int i) {
        cout << "Name of user " << i + 1 << " is : " << name << std::endl;
        cout << "Their charges are " << calcElecTax() << std::endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of users: ";
    std::cin >> n;
    Electricity e[MAX_SIZE];
    for (int i = 0; i < n; i++)
        e[i].getData(i);
    cout << "-----OUTPUT-----" << std::endl;
    for (int i = 0; i < n; i++) {
        cout << "The name of the user is " << e[i].name;
        cout << ". Their charges are " << e[i].calcElecTax() << std::endl;
    }
}