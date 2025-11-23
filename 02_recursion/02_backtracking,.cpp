#include<bits/stdc++.h>
using namespace std;

//Q-1. Print linearly from 1 to N by backtracking
void func(int i, int n){
    // base condition
    if(i < 1) return;

    //recursive function call

    func(i-1, n); // func(2,3) -> func(1,3) -> func(0,3) (returns and go to previous recursive function again)

    cout << i << endl; // 1 2 3
}

//Q-2. Print from N to 1 by backtracking
void func2(int i, int n){
    //base condition
    if(i > n) return;

    func2(i+1, n); // func(2, 3) -> func(3,3) -> func(4,3) (returns and go to previous recursive function again)

    cout << i << endl;// 3 -> 2 -> 1
}

int main(){
    int n; // n -> 3
    cin >> n;
    func(n, n); // func(3,3)
    func2(1, n); //func(1,3)
}