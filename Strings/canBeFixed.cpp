    /*
    Title           :   Chat room (canBeFixed)
    Author          :   ALELQ, MUSTAFA
    Date            :   27 June, 2019
    Description     :   Solution to: https://codeforces.com/contest/58/problem/A
                        Determining whether it's possible to get a substring by erasing chars of a given substring.
                        Solution need to be enhanced, and generalized.
    */
  // Problem: given a string s, is it possible to get the word hello by erasing chars of s (without shifting)
    
    /*  _____________________________ First solution _____________________________ */ 
    string s;
    cin >> s;
    
    // booleans to check if there is 'h', 'e', 'o' & a counter for 'L' to check there are at least 2 l's
    bool isH=0, isE=0, isO=0;
    int countL = 0;
    
    // Pass through each char of s, update booleans in order 'h', 'e', countL, 'o'
    for (int i = 0; i < s.size(); i++) {
      // Once you find H update isH
        isH  |= (s[i] == 'h');
        // Once you find E update isE (IF) isH is updated
        isE  |= (s[i] == 'e')&&isH;
        // Count # l after 'e'
            if ((s[i] == 'l')&&isE) countL++;
        // if you find o after at least 2 l's update it with 1.
        isO  |= (s[i] == 'o')&&(countL>1);
    }
    // Output
    if (isO) cout << "YES";
    else cout << "NO";

    /* _____________________________ Second BETTER solution _____________________________ */ 

    // Targeted string to find inside s is "Hello"
    string s, target = "hello";
    cin >> s;
    // Define index i pointing at target[i]
    int i = 0;

    // While index i didn't reach to the end,
    for (int j = 0; i < 5 && j < s.size(); j++) 
    
    // Add 1 to i whenever the equality holds
    i += (s[j] == target[i]);

    // Output
    cout << (i == 5 ? "YES" : "NO");
