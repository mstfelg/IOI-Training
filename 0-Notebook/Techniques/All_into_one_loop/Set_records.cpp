    /*
    Title           :   Remove extra one
    Author          :   ALELQ, MUSTAFA
    Date            :   4 July, 2019
    Description     :   A solution to: https://codeforces.com/problemset/problem/900/C
                        Given some permutation of [n], optimize # of records by removing 1 element.
                        element ai = record iff forall 1 <= j < i : aj < ai.
    Pseudocode1     :
                        1. Start from the left.
                        2. Take max0, max1.
                        3. If a number i is between max0, max1 then it's a candidate for being a record.
                        4. Find the first worst number that's taking out max # of candidates.
                        
                        Edge cases:
                        1. n == 1
                        2. The first number in each permutation is a record
                        3. If the first worst number doesn't affect # of records after deleting it print 1.
    */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Length of a string, n <= 1e5
    int n;
    cin >> n;

    // Array of permutation
    int arr[n];

    // bad[i] := # of candidate records that i+1 is affecting the 
    int bad[n] = {};

    // Edge case (1)
    if (n == 1) cout << 1;
    else {
        // Edge case (2)
        bad[0] = -1;
        // Initiate the array
        for (int i = 1; i < n; ++i) {
            cin >> arr[i];
            bad[i] = 0;
        }

        // Check how bad each number is
        int max0 = 0, max1 = 0;

        for (int i = 1; i < n; ++i) {

            if (arr[i] >= max0) {
                max1 = max0;
                max0 = arr[i];
            }
            
            // If a number is between max0, max1 then it's a candidate for a record.
            // max0 prevents that candidate
            else if (arr[i] >= max1) {
                max1 = arr[i];
                ++bad[max0-1];
            }
            // Since max0 is a record subtract 1
            --bad[max0-1];
        }

        // Take the worst number out
        int maxBad = -2;
        int m = 0;
        for (int i = 0; i < n; ++i) {
            if (maxBad < bad[i]) {
                maxBad = bad[i];

                // Store min value that yeilds max
                m = i;
            }
        }

        // If taking out a record doesn't affect, print 1.
        if ( !(maxBad - 1) ) {cout << 1;}

        // Otherwise print min value that yeilds max
        else {
        cout << m+1 << " ";
        }
    }
    return 0;
}
