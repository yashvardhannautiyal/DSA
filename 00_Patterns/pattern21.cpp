// ****
// *  *
// *  *
// ****

#include<iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=0; i<n; i++){//rows
        for(int j=0; j<n; j++){//stars
        
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}