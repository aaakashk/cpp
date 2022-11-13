#include <iostream>
#include <string>

int main() {
    std::string str, new_str = "";
    std::cout << "Enter a string: \n";
    getline(std::cin, str);
    int i = 0;
    while (i < str.length()) {
        if (str[i] == ' ')
            i++;
        else {
            std::string word = "";
            while (str[i] != ' ') {
                word += str[i];
                i++;
                if (i == str.length())
                    break;
            }
            std::reverse(word.begin(), word.end());
            new_str += word + " ";
        }
    }
    new_str = new_str.substr(0, new_str.length() - 1);
    std::reverse(new_str.begin(), new_str.end());
    std::cout << new_str << "\n";
}