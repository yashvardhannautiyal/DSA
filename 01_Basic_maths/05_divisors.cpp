// Print all divisors of a number.
// 36 = 1, 2, 3, 4, 6, 9, 12, 18, 36
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    // method 1 
    // TC = O(n) as loop runs till n

    // for(int i=1; i<=n; i++){
    //     if(n%i == 0){
    //         cout << i << " ";
    //     }
    // }

    // method 2
    vector<int> v;
    for(int i = 1; i*i <= n; i++){ // i <= sprt(n) -> i*i <= n    
        if(n%i == 0){ 
            v.push_back(i); //1,2,3,4,6
        //else if    
        if((n/i) != i){ // avoid printing 6 twice
            v.push_back(n/i); 
        }
        }
        
    }
    sort(v.begin(), v.end());

    for(auto it : v) cout << it << " ";
}