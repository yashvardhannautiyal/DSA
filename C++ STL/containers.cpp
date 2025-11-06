#include <bits/stdc++.h>
using namespace std;

// CONTAINERS IN C++ STL

// 1. VECTORS
void explainVectors()
{
    // syntax: vector<data_type> vector_name;

    vector<int> v;

    v.push_back(1);

    v.emplace_back(2);

    vector<pair<int, int>> vecPair;

    vecPair.push_back({1, 2});  // ({1,2})
    vecPair.emplace_back(3, 4); // it assumes it is in pair and directly places it in pair form -> ({1,2}, {3,4})

    vector<int> v2(5, 100); // initializes 5 elements with value 100 -> {100, 100, 100, 100, 100}

    vector<int> v3(5); // initializes 5 elements with default value 0 -> {0, 0, 0, 0, 0}

    vector<int> v4(v2); // copies v2 into v4 -> {100, 100, 100, 100, 100} it will be a copy of v2

    // accessing elements of vector
    cout << v2[2] << endl;
    ;                         // prints 100
    cout << v2.at(2) << endl; // prints 100

    vector<int> v = {10, 20, 30, 40};

    // printing vector
    // method_1
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // method_2 using auto keyword
    // auto is a keyword that automatically detects the data type of the variable
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    // deletion
    // {10,20,30,40}
    v.erase(v.begin() + 1); // erases 20
    // now v = {10,30,40}

    // to delete multiple elements from one position to other
    //  {10,20,30,40,50}
    v.erase(v.begin() + 2, v.begin() + 4); // erases 30,40 [start, end) : inclusive, exclusive

    // insertion
    vector<int> v2 = {50, 50};
    v2.insert(v2.begin(), 100);        // {100,50,50}
    v2.insert(v2.begin() + 1, 2, 200); // {100, 200, 200, 50, 50} - position, no. of occurances, value

    // inseting into another vector
    vector<int> v3(2, 900);                      // {900, 900}
    v2.insert(v2.begin(), v3.begin(), v3.end()); // {900, 900, 100, 200, 200, 50, 50}

    cout << v2.size() << endl; // size of vector

    v2.swap(v3); // swaps v2 and v3

    v2.clear(); // clears the vector v2

    cout << v2.empty() << endl; // checks if vector is empty or not, returns 1 if empty else 0
}

// 2. LISTS
void explainLists()
{
    list<int> ls;

    ls.push_back(2); //{2}

    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5, 2, 4}

    ls.emplace_front(7); // {7, 5, 2, 4}

    // rest same as vectors
    // begin(), end(), erase(), size(), clear(), empty(), swap(), rbegin(), rend()
}

// 3. DEQUE
void explainDeque()
{
    deque<int> dq;

    dq.push_back(1); // {1}

    dq.emplace_back(2); // {1,2}

    dq.push_front(4); // {4,1,2}

    dq.emplace_front(5); // {5,4,1,2}

    dq.pop_front(); // removes 5 -> {4,1,2}

    dq.pop_back(); // removes 2 -> {4,1}

    // rest same as vectors
    // begin(), end(), erase(), size(), clear(), empty(), swap(), rbegin(), rend()
}

// 4. STACK - LIFO (last in first out)
void explainStack()
{
    stack<int> st;
    st.push(1);    // {1}
    st.push(2);    // {2,1}
    st.push(3);    // {3,2,1}
    st.emplace(4); // {4,3,2,1}

    cout << st.top() << endl; // prints 4

    st.pop();                  // removes 4 -> {3,2,1}
    st.top();                  // now top is 3
    cout << st.size() << endl; // prints 3
    st.empty();                // returns 0 (false) as stack is not empty

    stack<int> st2;
    st.swap(st2); // swaps st and st2
}

int main()
{
    // CONTAINERS IN C++ STL
    // 1. VECTORS
    explainVectors();

    // 2. LISTS
    explainLists();

    // 3. DEQUE
    explainDeque();

    // 4. STACK
    explainStack();
    return 0;
}