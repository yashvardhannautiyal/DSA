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

1. Vectors <br>
vectors are dynamic array which means we can add or modify the vector dynamically as per the need.<br>
Syntax : `vector<data_type> vector_name;`

`vector<int> v;` : initalizes empty container - {} named v.

`v.push_back(1);` : pushes 1 to the back of the vector - {1} <br>
it takes an existing object and copies (or moves) it into the container.

`v.emplace_back(2);` :  similar to push_back but faster - {1, 2} <br>
constructs the object directly inside the vector — no copy or move.

` vector<int> v(5,100);` : initializes 5 elements with value 100 -> {100, 100, 100, 100, 100} <br>
  although we define the size of the vector, it is still dynamic and can grow beyond this size.

`vector<int> v3(5);` : initializes 5 elements with default value 0 -> {0, 0, 0, 0, 0}

`vector<int> v4(v2);` : copies v2 into v4.

Accessing elements of vector : `v2[2]` or `v2.at(2)`.





