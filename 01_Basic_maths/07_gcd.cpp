// GCD/HCF - Greatest common divisor/ Highest common factor
// 9 - 1,3,9   12- 1,2,6,12,3,4      GCD/HCF =  3

#include <bits/stdc++.h>
using namespace std;

int method1(int n1, int n2)
{ // TC = O(min(n1,n2)) - runs till n
    int gcd = 1;
    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int method2(int n1, int n2)
{ // better but for n1 = 11 and n2 = 13 runs till 11 to 1.  TC = O(min(n1, n2))
    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return i;
        }
    }
    return 1;
}

int euclidianMethod(int n1, int n2)
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;
    }
    if (n1 == 0)
        return n2;
    else
        return n1;
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << "GCD by method1: " << method1(n1, n2) << endl;
    cout << "GCD by method2: " << method2(n1, n2) << endl;
    cout << "GCD by euclideanMethod: " << euclidianMethod(n1, n2) << endl;

    return 0;
}
