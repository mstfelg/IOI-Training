    /*
    Title           :   1-2-3
    Author          :   ALELQ, MUSTAFA
    Date            :   11 July, 2019
    Description     :   A solution to: https://codeforces.com/problemset/problem/863/C

                        GIVEN : # of games, initial choices, table of next choices
                            (3 -> 2, 2 -> 1, 1 -> 3)
                        RETURN: Score of each one. 
    Pseudocode      :
                    Recursive approach:
                        1. Initiate an array of choices, chsA, chsB.
                        2. For each game:
                            A) Get current choices, a, b.
                            B) Determine scores. ++scrA, ++scrB.
                            C) Set a, b to be the next choices from chsA, chsB.
                        
                        Edge cases:
                        1. No next choices for the final game.
                        
    */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k, a, b;
    cin >> k >> a >> b;

    // Initiate choices
    short chsA[3][3], chsB[3][3];

    // i: choice of A, j: choice of B
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> chsA[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> chsB[i][j];
        }
    }

    // Determine score for each game
    int scrA = 0, scrB = 0;
    for (int i = 0; i < k; ++i) {
        
        //Scoring system
        scrA += ( (a - b == 1) || (a - b == -2) );
        scrB += ( (b - a == 1) || (b - a == -2) );

        // Determine next move
        int tmp = a;
        a = chsA[a-1][b-1];
        b = chsB[tmp-1][b-1];
    }
    cout << scrA << " " << scrB;
    return 0;
}