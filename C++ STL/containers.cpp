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
// stack have time complexity big O(1) for push(), pop(), top()
// that means these operations are done in constant time
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

// 5. QUEUE - FIFO (first in first out)
// complexity is big O(1) and is constant in time
void explainQueue()
{
    queue<int> q;

    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.emplace(4); // {1,2,4}

    q.back() += 5; // now back is 8 -> {1,2,9}

    cout << q.back() << endl; // prints 9

    cout << q.front() << endl; // prints 1

    q.pop(); // removes 1 -> {2,9}

    cout << q.front() << endl; // prints 2
}

// 6. PRIORITY QUEUE
// priority queue as the name suggests it is queued based on priority
// the largest element is given highest priority and stays at the top either it is integer, character or any other data type
// time complexity for push() - log(n)
// pop() - log(n)
// top() - O(1)

void explainPQ()
{
    // MAX HEAP : it shows the largest element on the top
    priority_queue<int> pq;

    pq.push(5);     // {5}
    pq.push(2);     // {5,2}
    pq.push(8);     // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top() << endl; // prints 10

    pq.pop(); // removes 10 -> {8,5,2}

    // similar functions push(), pop(), size(), empty(), swap()

    // MIN HEAP : it shows the smallest element on the top

    priority_queue<int, vector<int>, greater<int>> pq2;

    pq2.push(5);   // {5}
    pq2.push(2);   // {2,5}
    pq2.push(8);   // {2,5,8}
    pq.emplace(1); // {1,2,5,8}

    cout << pq2.top() << endl; // prints 1
}

// 7. SETS
// sets are containers that store elements in sorted + unique order
// if we insert duplicate elements, then also only one instance will be stored
// it is implemented using balanced binary search tree (BST)
// complexity for insertion, deletion, search is O(log n) as it is implemented using balanced BST (binary search tree)
void explainSets()
{
    set<int> st;

    st.insert(1);  // {1}
    st.emplace(2); // {1,2}
    st.insert(3);  // {1,2,3}
    st.insert(4);  // {1,2,3,4}

    st.insert(2); // {1,2} - 2 will not be inserted again as set only stores unique elements

    // functions: begin(), end(), rbegin(), rend(), size(), clear(), empty(), erase()

    auto it = st.find(3); // returns iterator as address to the element 3

    auto it = st.find(6); // returns iterator as address st.end() as 6 is not present in set

    int cnt = st.count(1); // returns 1 if present else 0

    // deletion
    st.erase(2); // removes 2 and maintains the sorted order -> {1,3,4} // takes O(log n) time

    auto it = st.find(3);
    st.erase(it); // removes 3 using iterator -> {1,4} takes constant time O(1)

    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // removes from [2 to 4) (excluding 4) -> {1,4,5}

    // lower bound and upper bound
    //  {1,2,3,4,5}
    auto it = st.lower_bound(3); // it points to 3 // returns iterator to 1st element which is >= 3

    auto it = st.upper_bound(5); // it points to st.end() // returns iterator to 1st element which is > 5
}

// 8. MULTI SETS
// multi sets are similar to sets but they allow duplicate elements
// the elements are stored in sorted order
// if we insert duplicate elements, then all instances will be stored
void explainMultiSets()
{
    multiset<int> ms;

    ms.insert(1);  // {1}
    ms.insert(1);  // {1,1}
    ms.insert(1);  // {1,1,1}
    ms.emplace(2); // {1,1,1,2}
    ms.insert(2);  // {1,1,1,2,2}
    ms.insert(3);  // {1,1,1,2,2,3}

    // functions: begin(), end(), rbegin(), rend(), size(), clear(), empty(), erase()

    auto it = ms.find(2); // returns iterator to the first occurrence of 2

    int cnt = ms.count(2); // returns 2 as there are two instances of 2

    // deletion
    ms.erase(2); // removes all instances of 2 -> {1,1,1,3}

    auto it = ms.find(1);
    ms.erase(it); // removes only one instance of 1 using iterator -> {1,1,3}

    ms.erase(ms.find(1), ms.find(3)); // removes from [1 to 3) (excluding 3) -> {3}
}

// 9. Unordered SETS
// unordered sets are similar to sets but they do not store elements in sorted order
// store only unique elements
// complexity for insertion, deletion, search is O(1) on average case and O(n) in worst case
// lower bound and upper bound functions are not applicable for unordered sets
void explainUnorderedSets()
{
    unordered_set<int> us;

    us.insert(1);  // {1}
    us.emplace(2); // {1,2}
    us.insert(3);  // {1,2,3}
    us.insert(4);  // {1,2,3,4}

    us.insert(2); // {1,2} - 2 will not be inserted again as unordered set only stores unique elements

    // functions: begin(), end(), size(), clear(), empty(), erase()
}

// 10. MAPS
// maps are associative containers that store elements in key-value pairs
// keys are unique and are used to access the corresponding values
// elements stored can be same for some other key
// maps are implemented using balanced binary search tree (BST)
// stores value in sorted order of keys
void explainMaps()
{

    // syntax: map<key_data_type, value_data_type> map_name;
    // key and value can be of any data type
    map<int, int> mpp; // key and value both are of int data type

    map<int, pair<int, int>> mpp2; // key is of int data type and value is of pair<int,int> data type

    map<pair<int, int>, int> mpp3; // key is of pair<int,int> data type and value is of int data type

    mpp[1] = 2;        // inserts key 1 with value 2 -> {1:2}
    mpp.emplace(3, 4); // inserts key 3 with value 4 -> {1:2, 3:4}

    mpp.insert({2, 6}); // inserts key 2 with value 6 -> {1:2, 2:6, 3:4}

    mpp[2, 3] = 10; // inserts key as pair {2,3} with value 10 -> {{2,3}:10, 1:2, 2:6, 3:4}

    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // prints key and value pairs
    }

    // functions: begin(), end(), rbegin(), rend(), size(), clear(), empty(), erase()

    auto it = mpp.find(3); // returns iterator to the key 3
}

// 11. MULTI MAPS

// multi maps are similar to maps but they allow duplicate keys
// implemented using balanced binary search tree (BST)
// stores elements in sorted order of keys
void explainMultiMaps()
{

    multimap<int, int> mp;

    mp.insert({1, 2}); // {1:2}
    mp.insert({1, 3}); // {1:2, 1:3}
    mp.emplace(2, 4);  // {1:2, 1:3, 2:4}

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // prints key and value pairs
    }

    // functions: begin(), end(), rbegin(), rend(), size(), clear(), empty(), erase()
}

// 12. Unordered MAPS
// unordered maps are similar to maps but they do not store elements in sorted order of keys
// implemented using hash tables
// complexity for insertion, deletion, search is O(1) and works on constant time on average case and O(n) in worst case
void explainUnorderedMaps()
{

    unordered_map<int, int> ump;

    ump[1] = 2;         // {1:2}
    ump.emplace(3, 4);  // {1:2, 3:4}
    ump.insert({2, 6}); // {1:2, 2:6, 3:4}

    for (auto it = ump.begin(); it != ump.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // prints key and value pairs
    }

    // functions: begin(), end(), size(), clear(), empty(), erase()
}

int main()
{
    // CONTAINERS IN C++ STL
    // 1. VECTORS
    explainVectors();

    // 2. LISTS
    explainLists();

    // 3. DEQUE - double ended queue
    explainDeque();

    // 4. STACK - LIFO
    explainStack();

    // 5. QUEUE - FIFO
    explainQueue();

    // 6. PRIORITY QUEUE
    explainPQ();

    // 7. SETS
    explainSets();

    // 8. MULTI SETS
    explainMultiSets();

    // 9. Unordered SETS
    explainUnorderedSets();

    // 10. MAPS
    explainMaps();

    // 11. MULTI MAPS
    explainMultiMaps();

    // 12. Unordered MAPS
    explainUnorderedMaps();
    return 0;
}