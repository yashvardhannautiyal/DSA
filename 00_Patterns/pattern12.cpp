// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int space = 2 * (n - 1);

    for (int i = 1; i <= n; i++)
    { // outer loop -> rows

        for (int j = 1; j <= i; j++)
        { // numbers
            cout << j;
        }

        for (int j = 1; j <= space; j++) 
        {//spcae
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {//numbers
            cout << j;
        }
        cout << endl;
        space = space - 2;
    }
}