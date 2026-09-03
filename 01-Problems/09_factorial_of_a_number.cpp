//Write a C++ program to find the factorial of a number using while loop.

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int fact = num;

    while (--num) {
        fact *= num;
    }

    cout << "Factorial of this number is: " << fact << endl;

    return 0;
}