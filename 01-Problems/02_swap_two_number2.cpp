//Swap two numbers without using a temporary variable

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two number: " << endl;
    cin >> a >> b;

    cout << "Before swap a: " << a << " and b: " << b << endl;

    //let a = 10 and b = 20
    a = a + b; // a now becomes 30 (10 + 20)
    b = a - b; // b becomes 10 (30 - 20)
    a = a - b; // a becomes 20 (30 - 10)
    
    cout << "After swap a: " << a << " and b: " << b << endl;

    return 0;
}