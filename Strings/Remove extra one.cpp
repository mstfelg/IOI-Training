    /*
    Title           :   Remove extra one
    Author          :   ALELQ, MUSTAFA
    Date            :   4 July, 2019
    Description     :   A solution to: https://codeforces.com/problemset/problem/900/C
                        Given some permutation, optimize # of records by removing 1 element.
    Pseudocode1     :
                        1. Start from the left.
                        2. Take max0, max1.
                        3. If a number i is between max0, max1 then it's a candidate for being a record.
                        4. Find the first worst number that's taking out max # of candidates.
                        
                        Edge cases: n = 1;
                                    If the first worst number doesn't affect # of records after deleting it print 1.
    */
    
    int n;
    cin >> n;
    int arr[n];
    int bad[n];

    if (n == 1) {
        cout << 1;
    }
    
    else {
      // Initiate the two arrays
      for (int i = 0; i < n; ++i) {
          cin >> arr[i];
          bad[i] = 0;
      }

      // Check how bad each number is
      int max0 = 0, max1 = 0;
      for (int i = 0; i < n; ++i) {
          if (arr[i] >= max0) {
              max0 = arr[i];
          }
          else if (arr[i] > max1) {
              max1 = arr[i];
              ++bad[max0-1];
          }
      }

      // Take the worst number out
      int maxBad = 0;
      for (int i = 0; i < n; ++i) {
          maxBad = max(maxBad, bad[i]);
      }
      if ( !(maxBad - 1) || !maxBad) {cout << 1;}
      else {
          int i;
      for (i = 0; bad[i] != maxBad; ++i) {}

      // Output
      cout << i+1;
      }
    }
    return 0;
}
