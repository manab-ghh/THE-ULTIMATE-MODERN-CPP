#include <iostream>
using namespace std;

int main() {
    int x = 10;    // normal variable 
    int *ptr = &x; // pointer variable
    int &ref = x;  // reference variable

    const int MAX = 100; // constant variable
    auto num = 50;  // auto variable
    constexpr int SIZE = 5; // constexpr variable

    cout << *ptr << endl;
    cout << ref << endl;
    cout << MAX << endl;
    cout << num << endl;
    cout << SIZE << endl;
    
    return 0;
}