#include <bits/stdc++.h>
using namespace std;

// functions
int sum(int a, int b)
{
    return a + b;
}

// pairs in C++
void explainPairs()
{
    // synatx: pair<data_type1, data_type2> pair_name;
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl; // 1 3

    // nested pair
    pair<int, pair<int, int>> l = {1, {3, 4}};
    cout << l.first << " " << l.second.first << " " << l.second.second << endl; // 1 3 4

    // array of pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 1}};
    cout << arr[1].second << endl; // 4
    cout << arr[0].first << endl;  // 1
    cout << arr[2].first << endl;  // 5
}


//CONTAINERS IN C++ STL

// 1. VECTORS
void explainVectors(){
    // syntax: vector<data_type> vector_name;

    vector<int> v; // initalizes empty container - {}

    v.push_back(1); // pushes 1 to the back of the vector - {1}
    // push_back() takes an existing object and copies (or moves) it into the container.

    v.emplace_back(2); // similar to push_back but faster - {1, 2}
    // emplace_back() constructs the object directly inside the vector — no copy or move.

    vector<pair<int, int>> vecPair;

    vecPair.push_back({1,2}); // ({1,2})
    vecPair.emplace_back(3,4); // it assumes it is in pair and directly places it in pair form -> ({1,2}, {3,4})

    // vector<int> vecName(Size, value);
    // although we define the size of the vector, it is still dynamic and can grow beyond this size

    vector<int> v2(5,100); // initializes 5 elements with value 100 -> {100, 100, 100, 100, 100}

    vector<int> v3(5); // initializes 5 elements with default value 0 -> {0, 0, 0, 0, 0}

    vector<int> v4(v2); // copies v2 into v4 -> {100, 100, 100, 100, 100} it will be a copy of v2
    
    // accessing elements of vector
    cout << v2[2] << endl;; // prints 100
    cout << v2.at(2) << endl; // prints 100
}

void explainIterators(){
    vector<int> v = {10, 20, 30, 40};
    // iterator is an object which points to a specific location in the container
    // syntax -> 
    // vector<int> :: iterator iterator_name = v.func();

    vector<int> :: iterator it = v.begin(); // points to first element of vector -> 10
    cout << *(it) << endl; // prints 10     | *(it) denotes value at iterator it

    it++; // points to next element of vector -> 20
    cout << *(it) << endl; // prints 20

    it = it+2; // points to 40
    cout << *(it) << endl; // prints 40

}
int main()
{
    int s = sum(1, 5);
    cout << s;
    explainPairs();
    explainVectors();
    return 0;
}