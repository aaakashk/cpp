//write a program in cpp to overload the operators +, ++ (pre and post) via friend function
//+, ++(pre and post) via member function
//-, --(pre and post) via friend function
#include <iostream>
using std::cout;

class FriendOperatorOverloading {
    int c;
    int value;

   public:
    FriendOperatorOverloading() {
        c = 3;
        value = 6;
    }
    FriendOperatorOverloading(int value) {
        this->value = value;
    }
    void show() {
        cout << "Count: " << c << std::endl;
    }
    friend void operator++(FriendOperatorOverloading &p);
    friend int operator++(FriendOperatorOverloading p, int);
    friend void operator+(FriendOperatorOverloading &p, FriendOperatorOverloading &q);
};

void operator++(FriendOperatorOverloading &p) {
    ++p.c;
}

int operator++(FriendOperatorOverloading p, int) {
    return p.c++;
}

void operator+(FriendOperatorOverloading &p, FriendOperatorOverloading &q) {
    int sum;
    sum = p.value + q.value;
    cout << "sum = " << sum << std::endl;
}

int main() {
    FriendOperatorOverloading a;
    ++a;
    a.show();

    cout << "Count: " << a++ << std::endl;

    a.show();
    FriendOperatorOverloading b(1);
    a + b;
    FriendOperatorOverloading another_object(3);
    another_object + b;
    another_object + a;
}