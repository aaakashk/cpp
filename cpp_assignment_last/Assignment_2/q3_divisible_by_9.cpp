#include <iostream>
using namespace std;

class Number {
    int start, end;

   public:
    Number(int a, int b) {
        start = a;
        end = b;
    }

    friend void printNumbers(Number);
};

int main() {
    Number n(100, 200);
    printNumbers(n);
    return 0;
}

void printNumbers(Number n) {
    int i, sum = 0, count = 0;
    for (i = n.start; i <= n.end; i++) {
        if (i % 9 == 0) {
            count++;
            sum = sum + i;
        }
    }
    cout << "Sum of all these integers is: " << sum << endl;
    cout << "Number of all these integers are:" << count << endl;
}
