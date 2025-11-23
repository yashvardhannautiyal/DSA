# Recursion
- Recursion refers to when a function calls itself, until a specific condition is fulfilled. <br>
- Calling a function inside the function itself -> Recursive function

### Base condition 
- Base condition is the condition which ensures that the recursive function breaks when the condition is fulfilled. <br>
- If there is no base condition, the function will call itself infinitely.
- There can be single or multiple base conditions.

### Stack representation
 - The recursive call of function is stored in the stack memory. <br>
- As the function returns the value recusively the stack stores wand waits for the completion of execution of recursive function. <br> 
- As the recursive function returns value after meeting the final recursive function's base condition -> it pop outs the stored recursive function. <br>
- If no base condition exists; then the stack memory waits infinitely for the completion of execution infinitely.

### Recursion tree
- simpler way to show the flow of recursion.
- it shows the flow of recursive function from start to end.

### Head recursion
- The recursive call happens before any processing.

- That means: 
    - First make the recursive call,
    - Then do operations while returning.

- Eg: 
    `head(n - 1);       // Recursive call first` <br>
    `printf("%d ", n);  // Work after returning`


### Tail recursion
- Processing happens first, then the recursive call.
- That means:
    - Do your own work,
    - Then call the function again.
- Eg: `printf("%d ", n);   // Work first` <br>
`tail(n - 1);        // Recursive call after`


### Backtracking
- Backtracking in recursion is a technique where recursion is used to try all possible options, and whenever a chosen path fails, the function returns (backtracks) to the previous step and tries a different option.

- It is a combination of:
    - Recursive exploration
    - Undoing the previous step if it doesn’t lead to a valid solution

- How Backtracking Works in Recursion

    - Make a choice
    - Call the recursive function
    - If the current path becomes invalid:
        - Undo the last change (backtrack)
        - Try the next choice