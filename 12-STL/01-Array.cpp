#include <iostream>
#include <array>
using namespace std;

int main() {
    //int arr[4] = {5, 7, 8, 9}; //Normal integer array declaration

    /*
        **Basic Syntax:
                -- array<data_type, size> array_name;
                -- array<T, N> stores exactly N elements of type T

                -- array<int, 5> arr;

                    arr
                     ↓
                    [ ? ][ ? ][ ? ][ ? ][ ? ]
                      0    1    2    3    4
    */
   
    

    //**Initialization........

    /*-----------------Examples-------------------*/
    array<int, 4> arr = {5, 11, 8, 9}; //STL array declaration 4 size int type

    array<float, 10> ch; //array declaration size 10 type float

    array<char, 26> letters; //array declaration size 26 type char

    array<string, 5> names; //array declaration size 5 type string

    array<double, 4> values; //array declaration size 4 type double



    /*Method 1 — Direct initialization--------------*/
    array<int, 5> arr1 = {10, 20, 30, 40, 50};

    /*Method 2 — Without '=' -----------------------*/
    array<int, 5> arr2{10, 20, 30, 40, 50};

    /*Method 3 — Partial initialization-------------*/
    array<int, 5> arr3 = {10, 20}; //The remaining elements become zero: --> [10][20][0][0][0]

    /*Method 4 — Empty initialization---------------*/
    array<int, 5> arr4{}; //Resilt: --> [0][0][0][0][0]


    //**Accessing Elements.....................

    array<int, 5> a1 = {10, 20, 30, 40, 50};

    /*operator[]------------------------------------*/
    cout << a1[2]; //Output --> 30

    /*at() --> provides bounds checking-------------*/
    cout << "Value at 2 idx--> " << a1.at(2) << endl; //Output --> 30
    //cout << arr.at(10); //Invalid index: throws --> out_of_range

    /*
        | Feature                 | `[]`               | `at()`            |
        | ----------------------- | ------------------ | ----------------- |
        | Bounds checking         | ❌                 | ✅                 |----------------
        | Speed                   | Slightly faster    | Slight overhead   |                |
        | Invalid index           | Undefined behavior | Exception         |                |
        | Competitive programming | Very common        | Useful for safety |                |
                                                                                            |
                                                                                            |
                                                                                            |
                            vector<int> v = {10, 20, 30};<--------------------------------- 
                            cout << v[5];      // ❌ No bounds checking → undefined behavior
                            cout << v.at(5);   // ❌ Bounds checking → throws exception                                

    */

    /*front() --> Returns the first element----------*/
    cout << "Value at front--> " << a1.front() << endl; //Output --> 10

    /*back() --> Returns the last element------------*/
    cout << "Value at back--> " << a1.back() << endl; //Output --> 50

    /*size() --> Returns the number of elements------*/
    cout << "Size--> " << a1.size() << endl; //Output --> 5

    /*empty() --> Checks whether the array empty or not*/
    cout << "Check Empty-->" << a1.empty() << endl; //Output --> 0 because array is not empty

    /*fill() --> Sets every element to the same value-*/
    array<int, 5> a2;
    arr.fill(10); // --> [10][10][10][10][10]

    array<int, 5> a3 = {1, 2, 3, 4, 5};
    a3.fill(100); // --> [100][100][100][100][100]

    /*data() --> Returns a pointer to the underlying array*/
    int *n = a1.data();
    int *k = a1.data();

    cout << *n++ << endl; // value at idx 0 and increse the next address //Output --> 10
    cout << *n << endl;   // value at idx 1 //Output --> 20
    cout << *++n << endl; // address increse from 1 idx to 2 idx then print value at idx 2 //Output --> 30
    cout << k[2] << endl; // Output --> 30

    /*begin() --> Returns an iterator pointing to the first element*/
    auto it1 = a1.begin();
    cout << *it1 << endl; //Output --> 10

    /*end() --> Returns an iterator pointing after the last element*/
    auto it2 = a1.end();
        /*
            [10][20][30][40][50][END]
              ↑                   ↑
            begin()              end()
        */

    /*Iterating using begin() and end()*/
    for(auto it3 = a1.begin(); it3 != a1.end(); it3++) {
        cout << *it3 << " "; //Output --> 10 20 30 40 50
    }
    cout << endl;

    /*rbegin() --> Returns a reverse iterator pointing to the last element*/
    auto it4 = a1.rbegin();
    cout << *it4 << endl; //Output --> 50

    /*rend() --> Points before the first element when traversing in reverse*/
    auto it5 = a1.rend();

    /*cbegin(), cend(), crbegin() & crend() --> These return constant iterators and Constant reverse iterators*/
    auto it6 = a1.cbegin();
    auto it7 = a1.cend();
    auto it8 = a1.crbegin();
    auto it9 = a1.crend();

    /*swap() --> Swaps two arrays*/
    //Both arrays must have the same type and size***
    array<int, 3> x = {1, 2, 3};
    array<int, 3> y = {4, 5, 6};
    x.swap(y); //it can also write --> swap(x, y);
        /*
            x = [4, 5, 6]
            y = [1, 2, 3]
        */


    //**Comparing Arrays.................
    cout << (x == y) << endl; //Output --> 0 // Also --> ==, !=, <, >, <=, >=
    cout << (x != y) << endl; //Output --> 1
    cout << (x < y) << endl; //Output --> 0
    cout << (x <= y) << endl; //Output --> 0
    cout << (x > y) << endl; //Output --> 1
    cout << (x >= y) << endl; //Output --> 1
    

    /*get<> --> can accessed an element using get*/
    cout << get<1>(a1) << endl; //Output --> 20
        /*
            uses a compile-time index

            int i = 1;
            get<i>(arr);   // is not valid because i is not a compile-time constant

        */

    //**Algorithms..................................
    /*
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());

        find(arr.begin(), arr.end(), x);

        max_element(arr.begin(), arr.end());
        min_element(arr.begin(), arr.end());

        accumulate(arr.begin(), arr.end(), 0);
    */


    /*
        | Feature           | C Array | `std::array` |
        | ----------------- | ------: | -----------: |
        | Fixed size        |       ✅ |            ✅ |
        | STL container     |       ❌ |            ✅ |
        | `.size()`         |       ❌ |            ✅ |
        | `.at()`           |       ❌ |            ✅ |
        | `.front()`        |       ❌ |            ✅ |
        | `.back()`         |       ❌ |            ✅ |
        | `.fill()`         |       ❌ |            ✅ |
        | `.begin()`        |      ❌* |            ✅ |
        | `.end()`          |      ❌* |            ✅ |
        | `.data()`         |       ❌ |            ✅ |
        | Copy assignment   |       ❌ |            ✅ |
        | Comparison        | Limited |            ✅ |
        | Contiguous memory |       ✅ |            ✅ |
    */


    return 0;
}