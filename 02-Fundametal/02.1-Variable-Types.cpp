#include <iostream>
using namespace std;

int main() {
    int age = 20;    // Integer variable
    cout << age << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    
    short a = 10;   // Short integer variable
    cout << a << endl;
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    
    long b = 10L;   // Long integer variable
    cout << b << endl;
    cout << "Size of long: " << sizeof(long) << " bytes" << endl;
    
    long long c = 10LL;  // Long long integer variable
    cout << c << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    
    unsigned int d = 10;  // Unsigned integer variable
    cout << d << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    
    float cgpa = 8.45f;  // Floating point variable
    cout << cgpa << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    
    double salary = 45000.75;   // Double precision floating point variable
    cout << salary << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    
    long double x = 3.14L;  // Long double precision floating point variable
    cout << x << endl;
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;

    
    char grade = 'A';   // Character variable
    cout << grade << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    
    wchar_t ch = L'A';  // Wide character variable
    cout << ch << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << endl;
    
    bool isStudent = true;   // Boolean varable
    cout << isStudent << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    

    return 0;
}