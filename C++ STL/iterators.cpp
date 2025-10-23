#include <bits/stdc++.h>
using namespace std;

// ITERATORS 
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

    vector<int> :: iterator it = v.end(); // points to the element right after the last element of the vector
    it--; // now it points to the last element of the vector

}

int main(){
    explainIterators();
    return 0;
}