/*Write a C++ program to check the grade of a student based on 
marks obtained in an exam. The program should take the marks 
as input and output the corresponding grade according to the 
following criteria:
 
Marks >= 90: Grade A
Marks >= 80 and < 90: Grade B
Marks >= 70 and < 80: Grade C */

    

#include <iostream>
using namespace std;

int main() {
    int marks = 70;

    if (marks > 90)
        cout << "Grade: A" << endl;
    else if (marks > 80)
        cout << "Grade: B" << endl;
    else if (marks > 70)
        cout << "Grade: C" << endl;
    else if (marks > 60)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;
        
    return 0;
}