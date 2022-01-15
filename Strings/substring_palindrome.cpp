#include <iostream>
using std::cout;
using std::string;

string reverseString(string str) {
    string rev_str = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        rev_str.append(1, str[i]);
    }
    return rev_str;
}

int main() {
    string str = "niki", rev_str = "", substring = "";

    int i = 0, j = 0;
    while (i < str.length()) {
        j = i + 1;
        while (str[j] != str[i]) {
            if (j == str.length())
                break;
            j++;
        }
        if (str[j] == str[i]) {
            substring = str.substr(i, j);
            rev_str = reverseString(substring);
        }

        if (rev_str == substring)
            cout << rev_str << "\n";
        rev_str = "";

        i++;
    }
}
