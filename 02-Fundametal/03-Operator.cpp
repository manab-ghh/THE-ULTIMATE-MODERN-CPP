#include <iostream>
using namespace std;

int main() {
    //Arithmetic Operator.....
    int a = 15, b = 5, c = 4;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulus: " << a % c << endl;


    //Relational Operator.....
    cout << "Equal to: " << (a == b) << endl;
    cout << "Not Equal to: " << (a != b) << endl;
    cout << "Greater than: " << (a > b) << endl;
    cout << "Less than: " << (a < b) << endl;
    cout << "Greater than or equal to: " << (a >= b) << endl;
    cout << "Less than or equal to: " << (a <= b) << endl;


    //Logical Operator.....
    bool x = true, y = false;
    cout << "Logical AND: " << (x && y) << endl;
    cout << "Logical OR: " << (x || y) << endl;
    cout << "Logical NOT: " << (!x) << endl;

    //Bitwise Operator.....
    int p = 5, q = 3;
    cout << "Bitwise AND: " << (p & q) << endl;
    cout << "Bitwise OR: " << (p | q) << endl;
    cout << "Bitwise XOR: " << (p ^ q) << endl;
    cout << "Bitwise NOT: " << (~p) << endl;
    cout << "Left Shift: " << (p << 1) << endl;
    cout << "Right Shift: " << (p >> 1) << endl;

    //Unary Operator.....
    int num = 10;
    cout << "Unary Plus: " << (+num) << endl;
    cout << "Unary Minus: " << (-num) << endl;

    //Assignment Operator.....
    int m = 10;
    m += 5; // equivalent to m = m + 5
    cout << "Assignment Operator (+=): " << m << endl;
    m -= 3; // equivalent to m = m - 3      

    // equivalent to m = m * 2
    m *= 2;
    cout << "Assignment Operator (*=): " << m << endl;
    m /= 4; // equivalent to m = m / 4
    cout << "Assignment Operator (/=): " << m << endl;
    m %= 3; // equivalent to m = m % 3
    cout << "Assignment Operator (%=): " << m << endl;  

    return 0;
}