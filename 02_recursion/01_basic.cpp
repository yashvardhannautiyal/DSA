#include<bits/stdc++.h>
using namespace std;

//Q-1. Print name n times using recursion
// void func(int i,  int times){
//     if(i > times) return;
//     cout << "Yash" << endl;
//     func(i+1, times);
// }

//Q-2. Print number from 1 to n. 
void func2(int i, int num){
    if(i > num) return;
    cout << i << endl;
    func2(i+1, num);
}

int main(){
    //A-1.
    // int times;
    // cout << "Enter number of times you want to print : ";
    // cin >> times;
    // func(1, times);

    //A-2.
    int num;
    cout << "Enter the last number you want to print : ";
    cin >> num;
    func2(1, num);
    
    return 0;
}