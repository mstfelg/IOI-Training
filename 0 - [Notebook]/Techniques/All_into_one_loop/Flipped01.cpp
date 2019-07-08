    /*
    Title           :   Flipping game
    Author          :   ALELQ, MUSTAFA
    Date            :   23 June, 2019
    Description     :   Solution to: https://codeforces.com/problemset/problem/327/A
                        GIVEN: a binary string and ONE step consisting of 
                        flipping consecutive digits (1 --> 0, 0 --> 1),
                        
                        MAXIMIZE: # of 1's 

    Pseudocode      :
                        1. Step1
                        2. Step2
                        3. Step3
                        4. Step4
                        5. Step5
    */

                    /* ________________ Naive approach ________________ */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // # of (0's + 1's)
    int n;
    cin >> n;
    // Insert into an array & count 1's, 0's
    int count0 = 0, count1 = 0;
    int v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        // At the same time count # of 1's & # of 0's
        if (v[i] == 0) {
            count0++;
        }
        else {
            count1++;
        }
    }
    int max1 = 0;
    // Choose a start
    for (int i = 0; i < n; i++) {
      // Choose an end
        for (int j = i; j < n; j++) {
            // Count # of flipped 1's & 0's
            int tempCount0 = 0, tempCount1 = 0;
            // Start from i to j pass through each digit
            for (int k = 0; i+k <= j; k++) {
            // Flip the counting
            if      (v[i+k] == 0)  tempCount1++;
            else                   tempCount0++;
            }
            // Maximize the total number of 1's
            max1 = max(max1, count1 + tempCount1 - tempCount0);
        }
    }
    // Output
    cout << max1;
    
    return 0;
}
                /* ________________ A better solution ________________ */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // # of (0's + 1's)
    int n;
    cin >> n;

    // # of 1's & # of 1's after flipping
    int s1 = 0, _s1 = 0;

    // max & min # of ones after flipping
    int maxS1 = -1, minS1 = 0;

    int d;
    for (int i = 0; i < n; ++i) {
        cin >> d;

         s1 += d;
        _s1 += 1 - 2*d;

        // Maximize
        maxS1 = max(maxS1, _s1 - maxS1);

        // Smallest # of 1's after flipping
        minS1 = min(_s1, minS1);
    }

    cout << s1 + maxS1;

    return 0;
}
