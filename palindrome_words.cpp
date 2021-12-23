#include <iostream>
#include <string>
using std::cout;
using std::string;

string reverse_word(string word) {
    string rev_word = "";
    for (int i = word.length() - 1; i >= 0; i--)
        rev_word.append(1, word[i]);
    return rev_word;
}

int main() {
    string str, word = "", rev_word = "";
    int count = 0;
    cout << "Enter a string: ";
    getline(std::cin, str);
    for (int i = 0; i < str.length(); i++) {
        while (str[i] != ' ') {
            word.append(1, str[i]);
            i++;
            if (i == str.length())
                break;
        }
        rev_word = reverse_word(word);
        if (rev_word == word) {
            cout << word << " is palindrome.\n";
            count++;
        } else
            cout << word << " is not palindrome.\n";
        word = "";
        rev_word = "";
    }
    cout << "The number of palindrome words in this string are: " << count << std::endl;
    return 0;
}