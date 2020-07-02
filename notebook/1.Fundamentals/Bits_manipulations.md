# Bits manipulations

This page include some elegant ways you can use to implement binary strings.

**1. Check if a number is a power of 2.**
<details class="example"> <summary>Solution</summary>

**Typical solution**

```cpp
bool isPow2(int a) {
    if (a == 0) {return false;}
    else {
        while (a % 2 == 0) a /= 2;
        return (a == 1);
    }
}

```

**Using bits**

Let's try to visualize a power of 2 in binary. It would consist of exactly one "1" digit, so when you subtract 1 from it it would be equivelent to negating it. A negated binary when bitwised-and with the original binary it would give 0.

<center>

| \-           | 8    | 13   | 26    | 16    |
|:------------:|:----:|:----:|:-----:|:-----:|
| `a`            | 1000 | 1101 | 11010 | 10000 |
| `a-1`         | 0111 | 1100 | 11001 | 01111 |
| `a & (a-1)` | 0000 | 1100 | 11000 | 00000 |

</center>

```cpp
bool isPow2(int a) {
    return (a && !(a & (a-1)));
}
```
`a` checks if `a != 0`, `!(a & (a-1))` checks if `a-1` is a negation of `a`.


</details>

**2. Count # 1's in a binary**
<details class="example">
<summary>Solution</summary>

In the previous example we noticed a relation between `a`, and `a-1`. That is:

<center><b>
`a-1`⇔ flipping all digits of `a` until the first "1".
</b>

| `{a}2`       | 104     | 116     | 5   |
|:------------:|:-------:|:-------:|:---:|
| `a`            | 1101000 | 1110100 | 101 |
| `a-1`         | 1100111 | 1110011 | 100 |
| `a & (a-1)` | 1100000 | 1110000 | 100 |

</center>

Exploiting this observation, each time we bitwise-and `a`, `a-1` we make all digits until the first "1" zeroes.

```cpp
int countOnes(int a) {
    int count = 0;
    while (a) {
        a &= a-1;
        ++count;
    }
    return count;
}

```
</details>