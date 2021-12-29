#include <iostream>
using std::cin;
using std::cout;

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

    void display() {
        cout << h << ":" << m << ":" << s << std::endl;
    }

    Time add(Time t1, Time t2) {
        Time t3;
        t3.s = (t1.s + t2.s) % 60;
        t3.m = (t1.m + t2.m + (t1.s + t2.s) / 60) % 60;
        t3.h = (t1.h + t2.h + (t1.m + t2.m) / 60 + (t1.s + t2.s) / 3600) % 60;
        return t3;
    }
};

int main() {
    int hours, mins, secs;
    cout << "Enter the time values for time 1: ";
    cin >> hours >> mins >> secs;
    Time t1(hours, mins, secs);
    cout << "Enter the time values for time 2: ";
    cin >> hours >> mins >> secs;
    Time t2(hours, mins, secs);
    t1.display();
    t2.display();
    Time t3;
    t3 = t3.add(t1, t2);
    t3.display();
}