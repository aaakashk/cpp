#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main() {
    int count = 0;
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ')
            i++;
        else {
            while (str[i] != ' ') {
                i++;
                if (i == str.length())
                    break;
            }
            count += 1;
        }
    }
    cout << "Number of words in the string is " << count;
}