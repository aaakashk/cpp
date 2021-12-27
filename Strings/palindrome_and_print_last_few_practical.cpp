#include <iostream>
using std::cout;

class StringFunc {
    std::string str1, str2;
    int key;

   public:
    void string_function(std::string str, int key) {
        for (int i = 0; i < str.length(); i++) {
            if (i >= key)
                cout << str[i];
        }
        cout << std::endl;
    }

    void string_function(std::string str) {
        int i, j;
        int flag = 0;
        int len = str.length();
        for (i = 0; i <= len / 2; i++) {
            if (str[i] != str[len - 1 - i]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "String is not palindrome.\n";
        else
            cout << "String is palindrome.\n";
    }
};

int main() {
    StringFunc s;
    int key;
    std::string str, str2;
    cout << "Enter a string: ";
    getline(std::cin, str);

    cout << "Enter the number from where to print: ";
    std::cin >> key;
    key = str.length() - key;
    s.string_function(str, key);
    cout << std::endl;

    cout << "Enter another string to check for palindrome: ";
    getline(std::cin.ignore(), str2);
    s.string_function(str2);
}