#include<bits/stdc++.h>
using namespace std;


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



int main(){
    explainVectors();
    return 0;
}