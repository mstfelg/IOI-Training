# Complexity Issues
  * It's better to use printf, scanf; with the code:
     ```
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
