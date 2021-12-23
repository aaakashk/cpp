#include <iostream>
#include <string>
using std::cout;
using std::string;

int main() {
    string str, upper = "", lower = "", digits = "", special_characters = "", arranged_string = "";
    cout << "Enter a string: \n";
    getline(std::cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9')
            digits.append(1, str[i]);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            upper.append(1, str[i]);
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower.append(1, str[i]);
        else
            special_characters.append(1, str[i]);
    }
    arranged_string = digits + upper + lower + special_characters;
    cout << "Arranged string: \n";
    cout << arranged_string;
}
