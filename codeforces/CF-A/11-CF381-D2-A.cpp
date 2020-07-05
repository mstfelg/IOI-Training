/*
Title		:	Sereja and Dima
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-05
Description	:	A solution to: https://codeforces.com/contest/381/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    // Array initialization
    int n; cin >> n;
    int cards[n];
    for (int i = 0; i < n; i++)
    {
    cin >> cards[i];
    }

    int s1 = 0, s2 = n-1;   // Indexers of the leftmost and rightmost numbers
    int p[n] = {0, 0};      // Total sum counters for players A, B
    bool turn = 0;          // Boolean counter for turns

    for (int i = 0; i < n; i++)
    {
        if (cards[s1] > cards[s2]) {
            p[turn] += cards[s1];
            s1++;
        }
        else {
            p[turn] += cards[s2];
            s2--;
        }
        turn = !turn;
    }
    
    cout << p[0] << " " << p[1];
    
    return 0;
}