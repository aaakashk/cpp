#include <iostream>
#include <string>
using std::cin;
using std::cout;

class Employee {
   private:
    std::string name, pan;
    float taxableIncome, tax;

   public:
    void InputInfo() {
        cout << "Enter the employee's name: ";
        std::getline(cin, name);
        cout << "Enter the employee's personal account number: ";
        std::getline(cin, pan);
        cout << "Enter the employee's taxable income: ";
        cin >> taxableIncome;
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

    void display() {
        cout << "The employee's name is " << name << std::endl;
        cout << "The employee's PAN is " << pan << std::endl;
        cout << "The employee's income is " << taxableIncome << std::endl;
        cout << "The employee's tax is " << tax << std::endl;
    }
};

int main() {
    Employee emp;
    emp.InputInfo();
    emp.TaxCalc();
    emp.display();
}