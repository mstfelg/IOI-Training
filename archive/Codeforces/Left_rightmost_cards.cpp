    /*
    Title           :   Leftmost rightmost cards
    Author          :   ALELQ, MUSTAFA
    Date            :   30 October, 2019
    Description     :   A solution to: https://codeforces.com/contest/381/problem/A

                        GIVEN : # of cards, numbers written on cards, 2 players A, B
                            Step: pick the largest number between leftmost and rightmost cards
                        RETURN: Score of A, B. 
    Pseudocode      :
                        1. Initiate an array of cards, crd.
                        2. Define rightmost, leftmost cards: crd[r], crd[l].
                        3. A has ceil(n/2) moves.
                        3. For each step in the loop (while i < n/2 + 1):
                            Both A and B play their turns
                        
                        Edge cases:
                        1. A picks the final card
                        
    */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int crd[n];
    for (int i = 0; i < n; ++i) {
        cin >> crd[i];
    }

    // Defining leftmost, rightmost
    int r = n-1, l = 0;
    // Scores of a, b
    int a = 0, b = 0;

    // Scoring system
    for (int i = 0; i < (n+1)/2; ++i) {
        // A's turn:
        a += crd[r] * (crd[r] >= crd[l]) + crd[l] * (crd[l] > crd[r]);
        
        // Shifting rightmost, leftmost
        int tmp = r;
        r -= (crd[r] >= crd[l]);
        l += (crd[l] > crd[tmp]);

        // B's turn
        b += crd[r] * (crd[r] >= crd[l]) + crd[l] * (crd[l] > crd[r]);
        
        // Shifting rightmost, leftmost
        tmp = r;
        r -= (crd[r] >= crd[l]);
        l += (crd[l] > crd[tmp]);
    }
        // (n&1): checks if n: odd. If it's so, then we must subtract b since r=l.
        b -= (l = r) * crd[l];

        // Output
        cout << a << ' ' << b;

    return 0;
}