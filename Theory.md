# Complexity Issues
  * It's better to use printf, scanf; with the code:
     ```cpp
      ios::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);
     ```
  * Avoid nested loops as possible.
  * Be greedy with your memory resources, only save variables and arrays when you'll use them.
     * Example:
          ```cpp
          // Count maximum number of equal consecutive chars in a string
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
        Notice that in the previous example you didn't have to record all of length of consecutive chars, just define one variable max, and just update it whenever you see something bigger than it.
 # Coding aesthetics
 Keeping an organized beautiful code is a good programmming habit, which saves you a lot of time while debugging.
  1. Header comment
```cpp
    /*
    Title           :   Hello, World!
    Author          :   ALELQ, MUSTAFA
    Date            :   23 June, 2019
    Description     :   Cout, printf commands
    */
```
  1. Partition your code into multiple stages or sections then comment above each section, you can add an output text at the end of each section of the code to debug more quickly.
  1. Use indentation: this reveals the entire code structure. 
  1. Follow a consistant [naming convention](https://en.wikipedia.org/wiki/Naming_convention_(programming)). [[1]](https://hackernoon.com/the-art-of-naming-variables-52f44de00aad)
# Debugging 
  * Keep your code splitted into chunks, with comments on top of each one.
   * Use comments // to disable part of the code.
  * Check ( = / == ) boolean '==' or declaring '='.
  * Positions of variables declaration.
# General tips
  * Plan your code, jot down your main structure & ideas, think whether there's a better way.
