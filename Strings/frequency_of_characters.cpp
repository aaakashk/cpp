#include <iostream>
#include <string>
using std::cout;
using std::string;

int main() {
    string str, new_str = "";
    cout << "Enter a string: \n";
    getline(std::cin, str);
    // int count = 0;
    // int i = 0;

    // while (i < str.length()) {
    //     int j = 0;
    //     while (j < str.length()) {
    //         if (str[i] == str[j])
    //             count++;
    //         j++;
    //     }
    //     cout << str[i] << " = " << count;
    //     count = 0;
    //     i++;

    //}

    for (int i = 0; i < str.length(); i++) {
        int j = 0;
        while (j < str.length()) {
            if (j == i)
                j += 1;
            else if (str[i] != str[j])
                j++;
            else if (str[i] == str[j])
                j += 1;
            else
                new_str += str[i];
        }
    }
    cout << "new: " << new_str;
}