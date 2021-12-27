//demonstrate default arguments
#include <iostream>
using namespace std;

int add(int x, int y, int z = 5) {
    cout << "z = " << z << " and Sum = ";
    return x + y + z;
}
int main() {
    cout << add(6, 1) << endl;     //no value passed, so default argument will be used
    cout << add(6, 1, 8) << endl;  //value passed, so default arguments will be overridden
    return 0;
}