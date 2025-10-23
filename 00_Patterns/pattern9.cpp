//       *       
//      ***      
//     *****     
//    *******    
//   *********   
//   *********
//    ******* 
//     *****  
//      ***   
//       * 



#include<iostream>
using namespace std;

int upperPart(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){// space
            cout << " ";
        }
        for(int k=0; k<2*i+1; k++){ // stars
            cout << "*";
        }
        for(int l=0; l<n-i-1; l++){ // space
            cout << " ";
        }
        cout << "\n";
    }
}

int lowerPart(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){ // space
            cout << " ";
        }
        for(int k=0; k<2*n-(2*i+1); k++){
            cout << "*";
        }
        for(int l=0; l<i; l++){
            cout << " ";
        }
        cout << "\n";
    }
}

int main(){
    int n=5;
    upperPart(n);
    lowerPart(n);   
    
    return 0;
}