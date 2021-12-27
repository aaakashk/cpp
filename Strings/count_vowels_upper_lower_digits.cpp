#include <iostream>
#include <string>
using std::cout;
using std::string;

int main() {
    int count_vowels = 0, count_upper = 0, count_lower = 0, count_digits = 0;
    string str;
    cout << "Enter a string with uppercase, lowercase, digits and vowels:\n";
    getline(std::cin, str);
    for (int i = 0; i < str.length(); i++) {
        //if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        switch (str[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                count_vowels++;
        }
        if (str[i] >= 'a' && str[i] <= 'z')
            count_lower++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            count_upper++;
        else if (str[i] >= '0' && str[i] <= '9')
            count_digits++;
    }
    cout << "Number of vowels:    " << count_vowels << "\n";
    cout << "Number of lowercase: " << count_lower << "\n";
    cout << "Number of uppercase: " << count_upper << "\n";
    cout << "Number of digits:    " << count_digits << "\n";
}