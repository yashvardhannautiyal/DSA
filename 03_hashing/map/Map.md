# Map

- part of collection framework
- it is an interface itself, not part of colletion interface(set, list, queue)

## Components

Key, Value, Pairs (key-value)

- key : unique
- value : can be duplicate

## Types

- HashMap
- TreeMap

### HashMap

- Stores key-value pairs using hashing for fast access, insertion, and deletion.
- unordered

Syntax:

        // Create a HashMap
        HashMap<String, Integer> hashMap = new HashMap<>();

        // Add elements to the HashMap
        hashMap.put("John", 25);
        hashMap.put("Jane", 30);
        hashMap.put("Jim", 35);
        

### TreeMap

- Stores key-value pairs in sorted order using natural ordering or a custom comparator.
- sorted

Syntax:

        // Create a TreeMap of Strings (keys) and Integers
        // (values)
        TreeMap<String, Integer> tm = new TreeMap<>();
