# Hashing
- prestoring and pre-fetching

- hashing involves mapping data to a specific index in a hash table(an array of items) using hashing function.

- hash function can by anything you want.
example : arr[i] % 4 | arr[i] + 1 | etc.

- we can achieve all three operations - search, insert and delete in Big O(1) Time complexity.

### Hash array
- have values = 0 initially
- does pre-calculation (hash function)

### Max implementation
- main function  : upto size `arr[10^6]` can be declared

- globally : `arr[10^7]` size can be declared

- but if for example size `arr[10^10]` is given it will throw `segmentation fault` error


### Character hashing

#### ASCII values
- Americal Standard Code for Information and Interchange

- ASCII codes are used to represent alphanumeric data

- uppercase (A-Z) = 65 - 90
- loewrcase (a-z) = 97 - 122