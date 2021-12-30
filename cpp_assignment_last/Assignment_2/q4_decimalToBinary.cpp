#include <iostream>
using namespace std;

class Binary {
    int n;

   public:
    Binary() {
        n = 0;
    }

    Binary(int num) {
        int i = 1, j = n, binary = 0;
        n = num;
        for (j = n; j > 0; j = j / 2) {
            binary = binary + (n % 2) * i;
            i = i * 10;
            n = n / 2;
        }
        cout << "Binary number is: " << binary << endl;
    }

    ~Binary() {
        cout << "Destructor called.\n";
    }
};

int main() {
    Binary obj(9);
    return 0;
}
