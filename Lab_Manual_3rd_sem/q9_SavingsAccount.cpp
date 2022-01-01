#include <iostream>
using std::cin;
using std::cout;

class SavingsAccount {
   private:
    static int annualInterestRate;
    float savingsBalance;

   public:
    SavingsAccount(float bal) {
        savingsBalance = bal;
    }

    float calculateMonthlyInterest() {
        savingsBalance += (savingsBalance * annualInterestRate / 100.0) / 12;
        return savingsBalance;
    }

    static void modifyInterestRate() {
        annualInterestRate = 5;
    }
};

int SavingsAccount::annualInterestRate = 4;

int main() {
    SavingsAccount saver1(2000), saver2(3000);
    cout << "FOR 4 % INTEREST: " << std::endl;
    cout << "Balance for saver1 : " << saver1.calculateMonthlyInterest() << std::endl;
    cout << "Balance for saver2 : " << saver2.calculateMonthlyInterest() << std::endl;
    SavingsAccount::modifyInterestRate();
    cout << "FOR 5 % INTEREST: " << std::endl;
    cout << "Balance for saver1 : " << saver1.calculateMonthlyInterest() << std::endl;
    cout << "Balance for saver2 : " << saver2.calculateMonthlyInterest() << std::endl;
}