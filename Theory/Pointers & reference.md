Computer memory consists of:
  1. Value
  1. Address
  1. Variable.

Imagine a variable as a container or a conveyor of a content (i.e: value) with its position in a memory (i.e: address).

Hence each variable holds 2 important information.

  | Reference '&'  | Pointer '\*' |
  | ------------- | ------------- |
  | Gets the address of a variable | Gets the value that the address is saving |

```cpp
int &x = y;                   // Assign the value that address of x holds
                              // to the value of y, (no memory is allocated)

cout << &x;                   // returns the address of x

int *x = &y;                  // x holds the address of y
cout << *x;                   // returns the value of address x

// *(&x) = x

int add(int *x, int *y) {     // x, y must be addresses
  *x += 2;                    // Any change in x will be affected globaly
  return *x+*y;               
}

int add(int &x, int &y) {     // x, y are just variables
  x += 2;                     // Any change in x will be affected globaly
  return x+y;
}

```
