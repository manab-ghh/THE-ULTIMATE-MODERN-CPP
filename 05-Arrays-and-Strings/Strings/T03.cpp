#include <iostream>
using namespace std;

int main() {
    char str[] = {'m', 'a', 'n', 'a', 'b', '\0'};

    str[2] = '\0'; //Null character is used to terminate the string
    cout << str << endl; //output: ma
    
    return 0;
}