#include<iostream>
using namespace std;

int main(){
    int n = 5;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i+1; j++){  // 5-1+1 = 5* |  5-2+1 = 4* | 5-3+1 = 3* | 5-4+1 = 2* | 5-5+1 = 1*
                cout << "*";
            }
            cout << " \n";
        }

        return 0;
}

//        *****
//        ****
//        ***
//        **
//        *
