#include <iostream>
#include <string>
using std::cout;
using std::string;

string reverse_word(string word) {
    string rev_word = "";
    for (int i = word.length() - 1; i >= 0; i--)
        rev_word.append(1, word[i]);
    rev_word.append(1, ' ');
    return rev_word;
}

string reverse_string(string str) {
    string reversed_string = "";
    for (int i = str.length(); i >= 0; i--)
        reversed_string.append(1, str[i]);
    return reversed_string;
}

int main() {
    string str, word = "", rev_word = "", reversed_string = "";
    cout << "Enter a string: \n";
    getline(std::cin, str);
    reversed_string = reverse_string(str);
    int i = 0;
    while (i < reversed_string.length()) {
        if (reversed_string[i] == ' ')
            i++;
        else {
            while (reversed_string[i] != ' ') {
                word.append(1, reversed_string[i]);
                i++;
                if (i == reversed_string.length())
                    break;
            }
            rev_word = reverse_word(word);
            cout << rev_word;
            word = "";
            rev_word = "";
        }
    }
}