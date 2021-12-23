#include <iostream>
using std::cout;

class EvenString {
    std::string str;

   public:
    EvenString() {
        cout << "Enter a string: ";
        getline(std::cin, str);
    }
    friend void even_places(EvenString s);
};

void even_places(EvenString s) {
    for (int i = 0; i < s.str.length(); i++) {
        if (i % 2 != 0)
            cout << s.str[i];
    }
}

int main() {
    EvenString s;
    even_places(s);
}