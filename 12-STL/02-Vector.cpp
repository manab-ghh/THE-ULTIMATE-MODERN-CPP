/*
    | Feature                     | Array     | Vector  |
    | --------------------------- | --------- | ------- |
    | Size                        | Fixed     | Dynamic |
    | Resize                      | Difficult | Easy    |
    | Random access               | O(1)      | O(1)    |
    | `push_back()`               | ❌        | ✅       |
    | `pop_back()`                | ❌        | ✅       |
    | Contiguous memory           | ✅        | ✅       |
    | STL algorithms              | ✅        | ✅       |
    | Automatic memory management | Limited   | ✅       |
*/

#include <iostream>
#include <vector> //Require for using Vector
using namespace std;

/*
    **Example:
                vector<int> a;
                vector<double> b;
                vector<char> c;
                vector<string> d;
                vector<bool> e;
                vector<pair<int, int>> vp;
                vector<vector<int>> matrix;
                vector<MyClass> objects;
*/


int main() {
    //vector<int> v = {10, 20, 30, 40}; //Diclaration
    /*
        Index:     0     1     2     3
                   ↓     ↓     ↓     ↓
        Memory:   [10]  [20]  [30]  [40]
    */

    vector<int> a = {10, 20, 30, 40};
    vector<int> b(a.begin(), a.end()); //Copy a to b
    vector<int> c(a); // Copy a to c

    //*sixe()---------------------------
    cout << a.size() << endl;

    //*capacity()-----------------------
    cout << a.capacity() << endl;

    /*
        | `size()`                                | `capacity()`                                      |
        | --------------------------------------- | ------------------------------------------------- |
        | Number of actual elements               | Allocated storage available                       |
        | Changes when elements are added/removed | Usually changes when reallocation occurs          |
        | Tells you how many elements exist       | Tells you how much storage is currently available |
        | `size <= capacity`                      | Always `capacity >= size`                         |
        | `resize()` changes it                   | `reserve()` can change it                         |
    */

    /*
        -- As it is STL array...
            [], at(), front(), back(), begin(), end(), rbegin(), rend()
            cbegin(), cend(), crbegin(), crend(), empty()
    */

    //*push_back()---------------------
    a.push_back(50); //Push element at the end

    //*pop_back()----------------------
    a.pop_back(); //Pop element at the end

    //*insert()------------------------
    a.insert(a.begin() + 2, 70); 

    return 0;
}