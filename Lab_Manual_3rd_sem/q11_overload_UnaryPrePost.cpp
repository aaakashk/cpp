//without friend function
// #include <iostream>
// using std::cout;

// class Overload {
//     int c;

//    public:
//     Overload(int c = 0) {
//         this->c = c;
//     }

//     void operator-() {
//         c = -c;
//     }

//     void operator++() {
//         ++c;
//     }

//     void operator++(int) {
//         c++;
//     }

//     void operator--() {
//         --c;
//     }

//     void operator--(int) {
//         c--;
//     }

//     void display() {
//         cout << "c = " << c << std::endl;
//     }
// };

// int main() {
//     Overload object(3);
//     object.display();
//     -object;
//     object.display();
//     ++object;
//     object.display();
//     object++;
//     object.display();
//     --object;
//     object.display();
//     object--;
//     object.display();
// }

//with friend function
#include <iostream>
using std::cout;

class Overload {
    int c;

   public:
    Overload(int c = 0) {
        this->c = c;
    }

    void display() {
        cout << "c = " << c << std::endl;
    }

    friend void operator-(Overload &p);
    friend void operator++(Overload &p);
    friend void operator++(Overload &p, int);
    friend void operator--(Overload &p);
    friend void operator--(Overload &p, int);
};

void operator-(Overload &p) {
    p.c = -p.c;
}

void operator++(Overload &p) {
    ++p.c;
}

void operator++(Overload &p, int) {
    p.c++;
}

void operator--(Overload &p) {
    --p.c;
}

void operator--(Overload &p, int) {
    p.c--;
}

int main() {
    Overload object(3);
    object.display();
    -object;
    object.display();
    ++object;
    object.display();
    object++;
    object.display();
    --object;
    object.display();
    object--;
    object.display();
}