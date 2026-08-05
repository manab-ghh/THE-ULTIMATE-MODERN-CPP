#include <iostream>
using namespace std;

int main() {
    int day;
    cin >> day; //Input From User

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break; // break statement is used to exit the switch case after executing the matched case.
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;

        default:
            cout << "Invalid Input" << endl;
    }
    
    
    return 0;
}