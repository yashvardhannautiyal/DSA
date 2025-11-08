#include <bits/stdc++.h>
using namespace std;

// comp - self written comparitive function and it is a boolean function

// when writting comp - always assume 2 pairs and the return the boolean function
bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    else if (p1.second > p2.second)
        return false;
    // else they are same

    if (p1.first > p2.first)
        return true;
    return false;
}

void main()
{
    // 1. SORTING
    // ASCENDING ORDER
    // sorting array
    int a[] = {5, 7, 2, 1};
    sort(a, a + 4); // sort(start_pointer, end_pointer)

    // to sort particular part of array
    int a2[] = {10, 5, 3, 7, 2, 8};
    sort(a2 + 1, a2 + 5); // sorts from index 1 to index 4

    // sorting - list
    list<int> ls = {4, 3, 2, 1};
    sort(ls.begin(), ls.end()); // works with iterators of list too
    for (auto x : ls)
    {
        cout << x << " "; // 1 2 3 4
    }

    // DESCENDING ORDER

    sort(a, a + 4, greater<int>()); // using greater<int>() from <functional> header;   -> {7, 5, 2, 1}

    // MY WAY SORTING ORDER
    // sorting done according to the custom function provided

    pair<int, int> p_arr[] = {{1, 2}, {2, 1}, {4, 1}};

    // condition - sort it according to second element
    // if second element is same ->
    // then sort it according to first element but in descending order

    // according to condition - sorted array should be -> {{4,1}, {2,1}, {1,2}}

    // syntax - sort(start_pointer, end_pointer, custom_function_name);

    sort(p_arr, p_arr + 3, comp); // {{4,1}, {2,1}, {1,2}}


    
    // 2. BUILTIN FUNCTIONS
    // 32-bits sytem - 7 = 00000000000000000000000000000111
    int n = 7; //  binary of 7 -> 111 -> total set bits = 3
    // builtin_popcount
    cout << __builtin_popcount(n) << endl; // prints 3

    long long int num = 1468716541987;
    // __builtin_popcountll 
    cout << __builtin_popcountll(num) << endl; 


    // 3. PERMUTATIONS
    // starts permutations from the given string itself
    string s = "123";
     do{
        cout << s << endl;
     } while(next_permutation(s.begin(), s.end())); // prints all the permutations of string s = 123 132 213 231 312 321 and then returns false

     // 4. maximum element
     int max_el = *max_element(a, a+4); // returns pointer to the maximum element in the array a
}