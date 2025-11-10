//Reverse a number.
// NOTE : if a number has trailing zero, then its reverse will not include. Eg. reverse of "10400" will be "401" instead of "00401".
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, revN = 0;
    cout << "Enter number : ";
    cin >> n;
    
    while(n>0){
        int lastN = n%10;
        revN = (revN * 10) + lastN;
        n = n/10;
    }

    cout << "Reverse number : " << revN << endl;

    return 0;
}