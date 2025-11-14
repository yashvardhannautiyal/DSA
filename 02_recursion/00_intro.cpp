//RECURSION = function calling itself, until specific condition is met (known as base condition).

#include<bits/stdc++.h>
using namespace std;

// void f(){
//     cout << 1;
//     f(); //function calling itself -> runs infinitely as there is no base condition which has to be met
//}

int f(int count){
    if(count == 3){ // base condition
        return;
    }
    cout << count;
    f(count++); //recursion function calling intself
}

int main(){
    int count = 0;
    f(count);
    return 0;
}