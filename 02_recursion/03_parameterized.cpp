//parameters are passed as result in the recursive function call
#include<bits/stdc++.h>
using namespace std;

//Q: Sum of first N numbers
void func(int n, int sum){
    if(n < 1){
         cout << sum;
        return; }

        func(n-1, sum+n); // f(3, 4) -> f(2, 7) -> f(1, 9) -> f(0, 10)

}

int main(){
    int n;
    int sum = 0;
    cin >> n;
    func(n, sum); // func(4,0)
}