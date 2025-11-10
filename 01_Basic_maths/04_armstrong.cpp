//Armstrong number
// 371 = 3^3 + 7^3 + 1^3 = 371          -> armstrong number
// 35 = 3^3 + 5^3 = 134                 -> not armstrong number
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0;
    cin >> n;
    int dup = n;

    while(n>0){
        int lastN = n%10;
        sum = sum + (lastN * lastN * lastN);
        n = n/10;
    }

    if(dup == sum) cout << "true";
    else cout << "false";
}