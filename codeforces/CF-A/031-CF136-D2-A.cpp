/*
Title		:	Presents
Author		:	ALELQ, MUSTAFA
Date		:	2019-06-29
Description	:	A solution to: https://codeforces.com/contest/136/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    // ifstream cin("input.txt");
    int n; cin >> n;
 
    int p[n];
    for (int i = 0; i < n; ++i) {
        int pi;
        cin >> pi;
        p[pi-1] = i+1;
    }
    for (int i = 0; i < n; ++i) {
        cout << p[i] << " ";
    }
    return 0;
}