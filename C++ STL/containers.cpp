#include<bits/stdc++.h>
using namespace std;


//CONTAINERS IN C++ STL

// 1. VECTORS
void explainVectors(){
    // syntax: vector<data_type> vector_name;

    vector<int> v;

    v.push_back(1); 

    v.emplace_back(2); 

    vector<pair<int, int>> vecPair;

    vecPair.push_back({1,2}); // ({1,2})
    vecPair.emplace_back(3,4); // it assumes it is in pair and directly places it in pair form -> ({1,2}, {3,4})

    

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