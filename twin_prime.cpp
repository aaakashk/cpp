#include <iostream>
using std::cin;
using std::cout;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    for (int i = 2; i < num1; i++) {
        if ((num1 % i == 0) && (num1 != 2 || num1 != 3)) {
            cout << num1 << " is not a prime number.\n";
            exit(0);
        }
    }
    for (int i = 2; i < num2; i++) {
        if ((num2 % i == 0) && (num2 != 2 || num2 != 3)) {
            cout << num2 << " is not a prime number.\n";
            exit(0);
        }
    }

    if (abs(num2 - num1) == 2)
        cout << "twin prime\n";
    else
        cout << "not a twin prime\n";
    return 0;
}
