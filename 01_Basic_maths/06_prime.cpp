// Prime number check
// Number having exactly "2 factors" - 1 and itself.

#include <bits/stdc++.h>
using namespace std;

void method1(int n) // TC = O(n) - higher time complexity
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;
}


void method2(int n) // TC = O(sqrt(n)) - lower time complexity
{
    int count = 0;
    for(int i=1; i*i <= n; i++){
        if(n%i == 0){
            count++;

            if((n/i) != i){ // to avoid including the mid term twice
            count++;
        }
        }
        
    }
    if(count == 2) cout << "true" << endl;
    else cout << "false" << endl;
}

int main()
{
    int n;
    cin >> n;

    method1(n);
    method2(n);
    return 0;
}