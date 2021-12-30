#include <iostream>
using namespace std;

class Time {
    int h, m, s;

   public:
    Time() {
        h = 0;
        m = 0;
        s = 0;
    }

    Time(int hh, int mm, int ss) {
        h = hh;
        m = mm;
        s = ss;
    }

    void add(Time x) {
        s = s + x.s;
        if (s > 59) {
            s = s - 60;
            m++;
        }
        m = m + x.m;
        if (m > 59) {
            m = m - 60;
            h++;
        }
        h = h + x.h;
    }

    void display() {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main() {
    Time a(5, 40, 50), b(02, 50, 12);
    a.add(b);
    a.display();
}
