    /*
    Title           :   Sagheer the Hausmeister
    Author          :   ALELQ, MUSTAFA
    Date            :   10 July, 2019
    Description     :   A solution to: https://codeforces.com/problemset/problem/812/B

                        GIVEN: 1. n floors with m room in each. 2. Lighted rooms represented with 1
                        Find: Shortest path to turn all of them off.
    Pseudocode      :
                    Brute force approach:
                        1. Starting with a given position (R, L) 
                           in the current floor, turn off all the lights.
                        2. After you're done, return your final position & distance.
                        3. No represent going left by 0 and going right by 1.
                        4. Instruction script would be a binary of length <= 15.
                        5. Check each script and minimize total distance
                        
                        Edge cases:
                        1. No 1's in some floor
                        
    */

#include <bits/stdc++.h>
using namespace std;



// GIVEN: Position (R, L), binary string, RETURN: distance after turning lights off.
// int off(bool p, int light) {
// }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // n: floors (15), m: rooms (100)
    int n, m; cin >> n >> m;

    // Direction array (R, L?)
    int dir[n][2];

    // Forall n rows: find the right-most one and the left-most one
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        dir[i][0] = 1; dir[i][1] = 1;

        // Did you find Leftmost/rightmost?
        bool fndL = 0, fndR = 0;

        for (int j = 1; (!fndL || !fndR) && j < m + 1; ++j) {
            fndL |= s[j];       if (fndL) dir[i][0] = m+1-j;
            fndR |= s[m+1-j];   if (fndR) dir[i][1] = j+1;
        }
    }

    // Check each possibility (R, L) = (1, 0)
    int dis, mDis = n * (m + 2) - 1;

    // Initial position (R, L), Final position (R, L)
    bool pi = 0, pf = 0;
    int brute = 1 << n;

    // For each script
    for (int i = 0; i < brute; ++i) {
        
        // Go through all n floors, starting with dis = 0
        dis = 0;
        for (int j = 0; j < n; ++j) {
            // Do script
            pf = (i & (1 >> j));
            if (pi != pf) {dis += m+2;}
            else {dis += 2 * dir[i][pi];}
        }
        // In each script take the minimum
        mDis = min(mDis, dis);
    }

    cout << mDis;
    return 0;
}