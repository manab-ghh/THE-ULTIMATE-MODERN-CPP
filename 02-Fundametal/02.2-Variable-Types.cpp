#include <iostream>
using namespace std;

int globalVar = 100;
// Global variable 
//Any variable declared outside of all functions is a global variable. 
//It can be accessed from any function in the program.

int main() {

    int x = 10;   
    // Local variable 
    //Any variable declared inside a function is a local variable. 
    //It can only be accessed within that function.


    cout << "Global variable: " << globalVar << endl;
    cout << "Local variable: " << x << endl;

    return 0;
}