#include <iostream>
#include <string>
using std::cin;
using std::cout;

class Employee {
   private:
    std::string name, pan;
    float taxableIncome, tax;

   public:
    void InputInfo(int i) {
        cout << "Enter the employee" << i << " taxable income: ";
        cin >> taxableIncome;
        cout << "Enter the employee" << i << " name: ";
        std::getline(cin.ignore(), name);
        cout << "Enter the employee" << i << " personal account number: ";
        std::getline(cin, pan);
    }
    void TaxCalc() {
        if (taxableIncome < 250000)
            tax = 0;
        else if (taxableIncome >= 250000 && taxableIncome < 300000)
            tax = 0.1 * (taxableIncome - 250000);
        else if (taxableIncome >= 300000 && taxableIncome < 400000)
            tax = 5000 + 0.2 * (taxableIncome - 300000);
        else if (taxableIncome > 400000)
            tax = 25000 + 0.3 * (taxableIncome - 400000);
    }

    void display(int i) {
        cout << "The employee " << i << " name is " << name << std::endl;
        cout << "The employee " << i << " PAN is " << pan << std::endl;
        cout << "The employee " << i << " income is " << taxableIncome << std::endl;
        cout << "The employee " << i << " tax is " << tax << std::endl;
    }
};

int main() {
    Employee emp[3];
    for (int i = 0; i < 3; i++)
        emp[i].InputInfo(i);
    for (int i = 0; i < 3; i++) {
        emp[i].TaxCalc();
        emp[i].display(i);
    }
}