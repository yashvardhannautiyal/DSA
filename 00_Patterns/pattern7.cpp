//       *       
//      ***      
//     *****     
//    *******    
//   *********   
//  ***********  
// *************

#include<iostream>
using namespace std;

int main(){
    int n=7;
    for(int i=0; i<n; i++){ // i=0; i<7; true
        for(int j=0; j<n-i-1; j++){// j=0; j<7-0-1 = 6; true  | 6 spaces print
            cout << " ";
        }
        for(int k=0; k<2*i+1; k++){// k=0; k<2*0+1 = 1 | 1 start print
            cout << "*";
        }
        for(int l=0; l<n-i-1; l++){// l=0; l<7-0-2 = 6 | 6 stars print
            cout << " ";
        }
        cout << " \n";
    }
    return 0;
}