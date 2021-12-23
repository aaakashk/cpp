#include <iostream>
#include <string>
using std::cout;
using std::string;

int main(){
    string str;
    cout<<"Ener a string: \n";
    getline(std::cin, str);
    int i = 0;
    while (i < str.length())
    {
        if (/* condition */)
        {
            /* code */
        }
        
    }
}