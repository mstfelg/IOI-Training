Computer memory consists of:

  1. Value
  1. Address
  1. Variable.

Imagine a variable as a container or a conveyor of a content (i.e: value) with its position in a memory (i.e: address).
Or more simply, each value is stored in an address in memory, this address can be long and unpractical to use, so variable is just another name given to that location.

```cpp
int var = 5; // Value 5 is stored in the 
             // memory location 2686778. 
             // var is just the name given to that location.
```

Hence each variable holds 2 important information.

  | Reference '&'  | Dereference '\*' |
  | ------------- | ------------- |
  | Given a variable        | Given an address
  | Returns the address of a variable | Returns the value that the address is storing |
  
  **Pointer**: a special variable that stores an address of another variable rather than a value.
  
  Note: The * sign when declaring a pointer is not a dereference operator. It is just a similar notation that creates a pointer.


```cpp
//*(&x) = x, reference and dereference operators cancel each others

// pc is an address, c is a value. Remember that *(an address) = value.
int *pc, c;

// Suppose, you want pointer pc to point to the address of c. Then,
pc = &c;
// Or
*pc = c;

int &x = y;                   // Assign the value that address of x holds
                              // to the value of y, (no memory is allocated)

cout << &x;                   // returns the address of x

int *x = &y;                  // x holds the address of y
cout << *x;                   // returns the value of address x


int add(int *x, int *y) {     // x, y must be addresses
  *x += 2;                    // Any change in x will be affected globaly
  return *x+*y;               
}

int add(int &x, int &y) {     // x, y are just variables
  x += 2;                     // Any change in x will be affected globaly
  return x+y;
}

```
