// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *

#include<iostream>
using namespace std;

int main(){
    int n=5;
    int spaces = 2*n - 2;

    for(int i=1; i<=2*n-1; i++){//rows - will run till 9 (2*5-1 = 9)

        int stars = i;
        if(i>n) stars = 2*n-i; //for after the 5th row

        for(int j=1; j<=stars; j++){ //stars
            cout << "*";
        }
        for(int k=1; k<=spaces; k++){//spaces
            cout << " ";
        }
        for(int l=1; l<=stars; l++){//stars
            cout << "*";
        }
        cout << endl;
        if(i<n) spaces -= 2;
        else spaces +=2;
    }
}