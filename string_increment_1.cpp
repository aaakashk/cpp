#include <iostream>
#include <string>
using std::cout;
using std::string;
//increments each alphabet of a word by its next alphabet
string increment_by_one(string word) {
    char ch;
    string new_word = "";
    for (int i = 0; i < word.length(); i++) {
        ch = char(word[i] + 1);
        new_word.append(1, ch);
    }
    return new_word;
}

int main() {
    string str, word = "";
    int i = 0, count = 0, p, q;
    cout << "Enter a string: ";
    getline(std::cin, str);
    cout << "Enter word numbers: ";
    std::cin >> p >> q;
    while (i < str.length()) {
        if (str[i] == ' ')
            i++;
        else {
            while (str[i] != ' ') {
                word.append(1, str[i]);
                i++;
                if (i == str.length())
                    break;
            }
            count += 1;
            if (count == p || count == q) {
                word = increment_by_one(word);
            }
            cout << word << " ";
            word = "";
        }
    }
    return 0;
}