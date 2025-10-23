#include <bits/stdc++.h>
using namespace std;

// pairs in C++
// pair is a collection from <utility> header file that holds two values of same or different data types

int main()
{
    // synatx: pair<data_type1, data_type2> pair_name;
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl; // 1 3

    // nested pair
    pair<int, pair<int, int>> l = {1, {3, 4}};
    cout << l.first << " " << l.second.first << " " << l.second.second << endl; // 1 3 4

    // array of pairs
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 1}};
    cout << arr[1].second << endl; // 4
    cout << arr[0].first << endl;  // 1
    cout << arr[2].first << endl;  // 5

    return 0;
}