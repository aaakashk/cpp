#include <iostream>
using std::cin;
using std::cout;

class BankAccount {
    std::string depositorName;
    int accountNumber;
    int balance;
    std::string accountType;

   public:
    void get() {
        balance = 0;
        cout << "Enter the depositor's name: ";
        getline(cin, depositorName);
        cout << "Enter the depositor's account number: ";
        cin >> accountNumber;
        cout << "Enter the depositor's account type: ";
        getline(cin.ignore(), accountType);
    }

    void deposit() {
        int depositAmount;
        cout << "Enter the amount to deposit: ";
        cin >> depositAmount;
        balance += depositAmount;
        cout << "Successfully deposited amount: " << balance << std::endl;
    }

    void withdraw() {
        int withdrawAmount;
        cout << "Enter the amount to withdraw: ";
        cin >> withdrawAmount;
        if (withdrawAmount < balance) {
            balance -= withdrawAmount;
        }
        cout << "Successfully withdrawn amount: " << withdrawAmount << std::endl;
    }

    void displayNameAndBalance() {
        cout << "-------OUTPUT-------" << std::endl;
        cout << "Name of the depositor is " << depositorName << std::endl;
        cout << "Remaining balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount acc;
    acc.get();
    acc.deposit();
    acc.withdraw();
    acc.displayNameAndBalance();
}