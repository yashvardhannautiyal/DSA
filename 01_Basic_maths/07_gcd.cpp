// GCD/HCF - Greatest common divisor/ Highest common factor
// 9 - 1,3,9   12- 1,2,6,12,3,4      GCD/HCF =  3

// #include<bits/stdc++.h>
// using namespace std;

// int method1(int n1, int n2){  // TC = O(min(n1, n2)) - worst case runs till n.
//     int gcd = 1;
//     for(int i=1; i<= min(n1, n2); i++)
// {
// if(n1%i == 0 && n2%i == 0){
//     gcd = i;
//     break;
// }
// }
// return gcd;
// }


// int method2(int n1, int n2){   // TC = O(min(n1, n2)) - worst case as it runs till 1.
//     int gcd = 1;
//     for(int i = min(n1, n2); i>=1; i++){
//         if(n1%i == 0 && n2%i == 0){
//             gcd = i;
//         }

//     }
//     return gcd;

// }

// int main(){
//     int n1 = 9, n2 = 12;
//     // cin >> n1;
//     // cin >> n2;

//    cout << "GCD : " << method1(n1,n2);
//     cout << "GCD : " << method2(n1,n2);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int method1(int n1, int n2) {
    int gcd = 1;
    for (int i = 1; i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int method2(int n1, int n2) {
    for (int i = min(n1, n2); i >= 1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            return i; // directly return the GCD
        }
    }
    return 1; // fallback
}


int main() {
    int n1, n2;
    cin >> n1 >> n2;

    cout << "GCD by method1: " << method1(n1, n2) << endl;
    cout << "GCD by method2: " << method2(n1, n2) << endl;

    return 0;
}
