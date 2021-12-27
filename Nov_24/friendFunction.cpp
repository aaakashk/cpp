//demonstrate the use of friend function

#include <iostream>
using namespace std;
class ABC;
class PQR {
    int var_p;

   public:
    void getData() {
        cout << "Enter a number here: ";
        cin >> var_p;
    }
    friend void swap(PQR &, ABC &);
};

class ABC {
    int var_a;

   public:
    void getData() {
        cout << "Enter another number here: ";
        cin >> var_a;
    }
    friend void swap(PQR &, ABC &);
};
void swap(PQR &h, ABC &u) {
    int temp;
    cout << "INPUT:  " << h.var_p << "\t" << u.var_a << endl;
    temp = h.var_p;
    h.var_p = u.var_a;
    u.var_a = temp;
    cout << "OUTPUT: " << h.var_p << "\t" << u.var_a;
}
int main() {
    PQR object1;
    ABC object2;
    object1.getData();
    object2.getData();
    swap(object1, object2);
    return 0;
}