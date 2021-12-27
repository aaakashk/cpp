#include <iostream>
#include <string>
using std::cout;
using std::string;

int main() {
    string str;
    int i = 0, count = 1, p, q;
    cout << "Enter a string: ";
    getline(std::cin, str);
    cout << "Enter word numbers: ";
    std::cin >> p >> q;
    while (i < str.length()) {
        if (str[i] == ' ') {
            cout << str[i];
            i++;
        } else {
            while (str[i] != ' ') {
                if (count == p || count == q)
                    cout << char(str[i] + 1);
                else
                    cout << str[i];
                i++;

                if (i == str.length())
                    break;
            }
            count += 1;
        }
    }
    return 0;
}
