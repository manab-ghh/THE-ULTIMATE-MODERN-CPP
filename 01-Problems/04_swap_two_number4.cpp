//Swap two numbers using STL swap function

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two number: " << endl;
    cin >> a >> b;

    cout << "Before swap a: " << a << " and b: " << b << endl;

    swap(a, b); //Using STL swap function
    
    cout << "After swap a: " << a << " and b: " << b << endl;

    return 0;
}