//Count digits : given the number "n". Find the number of digits present in a number.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0;

    cout << "Enter a number : ";
    cin >> n;

    while(n>0){
        count = count + 1;
        n = n/10;
    }
    cout << "Number of digits in " << n << " is : " << count << endl;
    return 0;
}

// TC - O(log_10 (n)) 
// whenever number of iteration is based on division, the complexity is Big O of log n -> O(log_n ())