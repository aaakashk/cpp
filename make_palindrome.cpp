#include <iostream>

// int reverse_num(int num) {
//     int d = 0, rev_num = 0;
//     while (num != 0) {
//         d = num % 10;
//         rev_num = rev_num * 10 + d;
//         num = num / 10;
//     }
//     return rev_num;
// }

// int main() {
//     int num = 0;
//     std::cout << "Enter a number: ";
//     std::cin >> num;
//     int sum = num, rev_num = 0;

//     do {
//         num = sum;
//         rev_num = reverse_num(sum);
//         sum = sum + rev_num;
//     } while (num != rev_num);
//     std::cout << "Palindrome number : " << num;
// }

//RECURSIVE METHOD

int palin(int num) {
    int d = 0, dup_num = num, rev_num = 0;
    while (dup_num != 0) {
        d = dup_num % 10;
        rev_num = rev_num * 10 + d;
        dup_num /= 10;
    }
    if (num == rev_num)
        return num;
    return palin(num + rev_num);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Palindrome: " << palin(num);
}
