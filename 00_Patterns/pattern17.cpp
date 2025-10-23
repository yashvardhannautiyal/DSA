//      A     
//     ABA    
//    ABCBA   
//   ABCDCBA  
//  ABCDEDCBA 

#include<iostream>
using namespace std;

int main(){
    int n=5;

    for(int i=0; i<n; i++){ //rows

        for(int j=0; j<=n-i-1; j++){ //space
            cout << " ";
        }

        char ch = 'A';
        int breakPoint = (2*i+1)/2;
        for(int k=1; k<= 2*i+1; k++){
            cout << ch;
            if(k<=breakPoint) ch++;
            else ch--;
        }

        for(int l=0; l<=n-i-1; l++){
            cout << " ";
        }
        cout << endl;
    }
}
