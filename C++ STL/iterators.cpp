#include <bits/stdc++.h>
using namespace std;

// ITERATORS 
void explainIterators(){
    vector<int> v = {10, 20, 30, 40};

    vector<int> :: iterator it0 = v.begin(); // points to first element
    
    cout << *(it0) << endl; // prints 10      

    it0++; //  20
    cout << *(it0) << endl; //  20

    it0 = it0+2; //  40
    cout << *(it0) << endl; //  40

    vector<int> :: iterator it1 = v.end(); 
    it1--;


    // reverse end begin not used much but for knowledge purpose
    vector<int> :: reverse_iterator it2 = v.rend(); // reverse of the iterator + points to the end of the vector in reverse that is 10 here!

    vector<int> :: reverse_iterator it3 = v.rbegin(); //reverse of the iterator +  points to the first element of the reverse vector that is 40 here!

}

int main(){
    explainIterators();
    return 0;
}