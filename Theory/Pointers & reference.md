Computer memory consists of:
  1. Value
  1. Address
  1. Variable.

Imagine a variable as a container or a conveyor of a content (i.e: value) with its position (i.e: address). Hence each variable holds 2 important information.
We use reference '&' to get the address that this variable holds, and a pointer '*' to get the value that this variable holds.
Note that there's difference in use when defining a variable or using it on a variable.

```cpp
int &x = y; // x holds the value of y
cout << &x; // returns the address of x?
```

```cpp
int *x = &y; // x holds the address of y
cout << *x; // returns the value of address x?
```
