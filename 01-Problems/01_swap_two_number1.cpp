//Swap two numbers using a temporary variable

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two number: " << endl;
    cin >> a >> b;

    cout << "Before swap a: " << a << " and b: " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After swap a: " << a << " and b: " << b << endl;

    return 0;
}