#include<bits/stdc++.h>
using namespace std;

void upperPart(int n){
    for(int i=1; i<=n; i++){
        //spaces
        for(int j=i; j<n; j++){
            cout << " ";
        }
        //number - increasing
        for(int j = i; j <= 2*i-1; j++){
            cout << j;
        }

        //number - decreasing
        for(int j=2*i-2; j >= i; j--){
            cout << j;
        }
        cout << endl;
    }
    
}

void lowerPart(int n){
    for(int i=n-1; i>=1; i--){
        //spaces
        for (int j = n; j>i; j--)
        {
            cout << " ";
        }

        //number - increasing
        for(int j = i; j<=2*i-1; j++){
            cout << j;
        }

        //number - decreasing
        for(int j = 2*i-2; j>=i; j--){
            cout << j;
        }
        cout << endl;
    }
}

int main(){
    int n = 5;
    upperPart(n);
    lowerPart(n);
    return 0;
}

