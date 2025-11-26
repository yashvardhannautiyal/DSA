#include<bits/stdc++.h>
using namespace std;

// sum of n numbers
int func(int n){
    if(n == 0){ return 0;}

    return n + func(n-1); // 3 + func(2) -> 2 + func(1) -> 1 + func(0) {returns 0}
}


// factorial
int fact(int n){
    if(n == 0) { return 1;}

    return n*fact(n-1);
}
int main(){
    int n = 4;
    cout << "Sum of " << n << " numbers : " << func(n) << endl;
    cout << "Factorial of " << n << " number : " << fact(n) << endl;
}