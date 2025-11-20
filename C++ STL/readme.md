# C++ STL

STL (Standard Template Library) is a powerful library in C++ that provides:

- Predefined generic classes and functions,

- Implementations of common data structures (like vectors, lists, stacks, queues, maps, etc.),

- Efficient algorithms for sorting, searching, etc.,

- And iterators to traverse data.

## Basic structure

- `#include<bits/stdc++.h>` <br>
  `stdc.h` library contains all the required libraries that are used in C++ like math.h, string.h, etc. so we don't need to individually include them all one by one.

- `using namespace std` <br>
  `namespace` - is a container that groups identifiers such as variables, functions, classes, objects. <br>
  `std` - short for standard inside which all the standard library features (cout, cin, vector, string) are defined.

Also if we don't use " using namespace std; " then we have to manually add " std:: " before each standard line of code.

## 4 main components

STL is made up of 4 main components :

- Containers
- Algorithms
- Iterators
- Functions

## Pairs in STL

Pair is a collection from `<utility>` header file that holds two values of same or different data types.

Syntax : `synatx: pair<data_type1, data_type2> pair_name;`

## Containers

Container is a data structure that stores a collection of elements.
These include : Vectors, Lists, Deque, Stack, Queue, Priority Queue, Sets, Multi sets, Unordered sets, Maps, Multi maps, Unordered maps, 

1. Vectors <br>
   vectors are dynamic array which means we can add or modify the vector dynamically as per the need.<br>
   Syntax : `vector<data_type> vector_name;`

    `vector<int> v;` : initalizes empty container - {} named v.

    `v.push_back(1);` : pushes 1 to the back of the vector - {1} <br>
    it takes an existing object and copies (or moves) it into the container.

    `v.emplace_back(2);` : similar to push_back but faster - {1, 2} <br>
    constructs the object directly inside the vector — no copy or move.

    `vector<int> v(5,100);` : initializes 5 elements with value 100 -> {100, 100, 100, 100, 100} <br>
    although we define the size of the vector, it is still dynamic and can grow beyond this size.

    `vector<int> v3(5);` : initializes 5 elements with default value 0 -> {0, 0, 0, 0, 0}

    `vector<int> v4(v2);` : copies v2 into v4.

    Accessing elements of vector : `v2[2]` or `v2.at(2)`.

  <br>

2. LISTS <br>
    lists are implemented using doubly linked list.<br>
    Syntax : `list<int> ls;`

    `ls.push_front(2)` : insert an element at the front of the list. <br>
    takes an existing object and copies or moves it into the list. <br>

    `ls.emplace_front(2)` : insert element at the front.

    rest functions same as vectors : 
    `begin(), end(), erase(), size(), clear(), empty(), swap(), rbegin(), rend() `

<br>

3. DEQUE <br>
    deque - double ended queue <br>
    it has complexity of O(1) for insertion and deletion at both ends <br>
    in comparision of vector which has O(n) complexity for insertion and deletion at front deque is more efficient

    Syntax : `deque<int> dq;`

    `dq.pop_front();` : removes 5 -> {4,1,2}

    `dq.pop_back();` : removes 2 -> {4,1}

    rest functions same as vectors : 
    `push_back(), push_front(), emplace_back(), emplace_front(), begin(), end(), erase(), size(), clear(), empty(), swap(), rbegin(), rend() `


4. STACK <br>
  LIFO (last in first out). <br>
  stack have time complexity big O(1) for push(), pop(), top(); that means these operations are done in constant time. <br>
  Syntax : `stack<int> st;` <br>
  Functions : `push(), emplace(), pop(), empty(), swap()`


5.  QUEUE <br>
  FIFO (first in first out) <br>
  complexity is big O(1) and is constant in time.<br>
  Syntax : `queue<int> q;` <br>
  Functions : `push(), emplace(), back(), front() `

  6. PRIORITY QUEUE <br>
 priority queue as the name suggests it is queued based on priority <br>
  the largest element is given highest priority and stays at the top either it is integer, character or any other data type <br>
 time complexity: 
 push() - log(n)<br> 
 pop() - log(n) <br>
 top() - O(1)
 <br>
 MAX HEAP : it shows the largest element on the top <br>
 Syntax : `priority_queue<int> pq;` <br>
 MIN HEAP : it shows the smallest element on the top <br>
`priority_queue<int, vector<int>, greater<int>> pq2;`
<br>
Functions : similar functions `push(), pop(), size(), empty(), swap() `

 
 7. SETS <br>
sets are containers that store elements in sorted + unique order <br>
if we insert duplicate elements, then also only one instance will be stored <br>
it is implemented using balanced binary search tree (BST) <br>
complexity for insertion, deletion, search is O(log n) as it is implemented using balanced BST (binary search tree)
<br>
Syntax : `set<int> st;` <br>
Functions: `insert(), emplace(), find(), count(), erase(), lower_bound(), upper_bound()`  
<br>

8. MULTI SETS <br>
multi sets are similar to sets but they allow duplicate elements <br>
the elements are stored in sorted order <br>
if we insert duplicate elements, then all instances will be stored <br>
Syntax : `multiset<int> ms;`
Functions : same as sets <br>

9. Unordered SETS <br>
unordered sets are similar to sets but they do not store elements in sorted order <br>
store only unique elements <br>
complexity for insertion, deletion, search is O(1) on average case and O(n) in worst case <br>
lower bound and upper bound functions are not applicable for unordered sets <br>
Syntax : ` unordered_set<int> us; `<br>
Functions : same as sets <br>


10. MAPS <br>
maps are associative containers that store elements in key-value pairs <br>
keys are unique and are used to access the corresponding values. Elements stored can be same for some other key <br>
maps are implemented using balanced binary search tree (BST). Stores value in sorted order of keys <br>
Syntax :  `map<key_data_type, value_data_type> map_name;`  key and value can be of any data type <br>
Functions : `begin(), end(), rbegin(), rend(), size(), clear(), empty(), erase()`
<br>


11. MULTI MAPS <br>
multi maps are similar to maps but they allow duplicate keys. Implemented using balanced binary search tree (BST). Stores elements in sorted order of keys <br>
Syntax : `multimap<int, int> mp;`<br>
Functions : `begin(), end(), rbegin(), rend(), size(), clear(), empty(), erase(), insert(), emplace()` <br>


12. Unordered MAPS<b>
unordered maps are similar to maps but they do not store elements in sorted order of keys <br>
implemented using hash tables. Complexity for insertion, deletion, search is O(1) and works on constant time on average case and O(n) in worst case <br>
Syntax : `unordered_map<int, int> ump;` <br>
Functions : `inset(), emplace(), begin(), end(), size(), clear(), empty(), erase()`



    



# Iterators

Iterator is an object which points to a specific location in the container. <br>
syntax : `vector<int> :: iterator iterator_name = v.func();`

`vector<int> :: iterator it = v.begin();` : points to first element of vector.

`*(it)` : denotes value at iterator it and prints the value.

`it++` : points to next element of vector.

`vector<int> :: iterator it = v.end();` : points to the element right after the last element of the vector. <br>
`it--` now it points to the last element of the vector.

