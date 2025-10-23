// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include<iostream>
using namespace std;
void upperPart(int n){
    int spaces=0;
    for(int i=0; i<n; i++){ //rows
        for(int j=1; j<= n-i; j++){ //stars
            cout << "*";
        }
        for(int k=0; k<spaces; k++){//space
            cout << " ";
        }
        
        for(int l=1; l<=n-i; l++){//stars
            cout << "*";
        }
        spaces += 2;
        cout << endl;
    }
}

void lowerPart(int n){
    int spaces = 8;

    for(int i=1; i<=n; i++){//rows
        for(int j=1; j<= i; j++){//stars
            cout << "*";
        }
        for(int k=0; k<spaces; k++){//spaces
            cout << " ";
        }
        for(int l=1; l<=i; l++){//stars
            cout << "*";
        }
        spaces -=2;
        cout << endl;
    }
}

int main(){
    int n=5;

    upperPart(n);
    lowerPart(n);
    
}