# Elegant minimalist codes

## Booleans

* Use bitmasks as an array of booleans.

```cpp
    if (!k)                    // equiv to if (k == 0)
    if (k&1)                   // equiv to if (k % 2 == 1)
    while (k--)                 // equiv to for (int i = k; i > 0; i--) {}

    for ( ... ) {
        flag &= (condition);   // equiv to multiplication of couple of conditions
    }
    
    count += (condition);      // equiv to if (condition) ++count
```
## Others
```cpp
    1ll * r                    // equiv to (long long)(r)
    1 << 4                     // equiv to 2^4 (See also: Binary shift operator)
```