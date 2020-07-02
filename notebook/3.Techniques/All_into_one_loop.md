# All into one loop

This technique is commonly used to minimize the complexity of nested loops. Usually helpful when dealing with max, min values in a string or an array.

Be greedy with your memory resources, only save variables and arrays when you'll use them, in other words, think of there's a way to minimize the number of for loops into only one for loop

<b> Example1: given a string, return the size of the <u> longest substring of equal chars </u> in it. </b>
<details open class="example">
  <summary>Solution:</summary>

```cpp
    int conChar(string s) {
        int countMax = 1, count = 1;

        // Pass through each char of s
        for (int i = 0; i < s.size()-1; i++) {
            
            // If you find two consecutives chars equal, start counting
            if (s[i] == s[i+1]) {
                count++;

                // * Set countMax to whatever number bigger than him
                countMax = max(countMax, count);
            }

            // Reset the counter whenever the chars differ
            else count = 1;
        }
        return countMax;
    }
```
</details>

With time and practice these solutions become typical.

## Problems

1. <a href = "https://github.com/mstfelq/IOI-Training/blob/master/.Notebook/3.Techniques/All_into_one_loop/Longest_increasing_subsequence.cpp">Longest increasing subsequence</a>
1. <a href = "https://github.com/mstfelq/IOI-Training/blob/master/.Notebook/3.Techniques/All_into_one_loop/Flipped01.cpp"> Flipped 01 </a>.
1. <a href = "https://github.com/mstfelq/IOI-Training/blob/master/.Notebook/3.Techniques/All_into_one_loop/Set_records.cpp"> Set records </a>.
1. Maximal contiguous sum.

## See also
* [Dynamic programming](https://en.wikipedia.org/wiki/Dynamic_programming).