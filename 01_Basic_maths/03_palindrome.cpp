// Check if a number is Palindrome or not.
// Palindrome -> are number for which reverse is same as original. Eg. 121 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, revN = 0;
    cin >> n;
    int dup = n;

    while(n>0){
        int lastN = n%10;
        revN = (revN * 10) + lastN;
        n = n/10;
    }

    if(revN == dup) cout << "true";
    else cout << "false";

}