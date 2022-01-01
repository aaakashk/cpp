#include <iostream>
using std::cin;
using std::cout;

class SavingsAccount {
   private:
    static int annualInterestRate;
    int savingsBalance;

   public:
    SavingsAccount(int bal) {
        savingsBalance = bal;
    }

    float calculateMonthlyInterest() {
        savingsBalance += (savingsBalance * annualInterestRate) / 12;
        return savingsBalance;
    }

    static void modifyInterestRate() {
        annualInterestRate = 5;
    }

    void displayBalance() {
        cout << "The balance is " << savingsBalance << std::endl;
    }
};

int SavingsAccount::annualInterestRate = 4;

int main() {
    SavingsAccount saver1(2000), saver2(3000);
    cout << "The balance with 4 percent interest is " << saver1.calculateMonthlyInterest() << std::endl;
    cout << "The balance with 4 percent interest is " << saver2.calculateMonthlyInterest() << std::endl;
    SavingsAccount::modifyInterestRate();
    cout << "The balance with 4 percent interest is " << saver1.calculateMonthlyInterest() << std::endl;
    cout << "The balance with 4 percent interest is " << saver2.calculateMonthlyInterest() << std::endl;
}