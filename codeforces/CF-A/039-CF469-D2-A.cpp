/*
Title		:	A. I Wanna Be the Guy
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-26
Description	:	A solution to: https://codeforces.com/contest/469/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    // ifstream cin("input.txt");
    typedef unsigned short int small;

    set<int> levels;
    small n; cin >> n;
    small p; cin >> p;
    for (int i = 0; i < p; i++) {
        small m; cin >> m;
        levels.insert(m);
    }
    small q; cin >> q;
    for (int i = 0; i < q; i++)
    {
        small m; cin >> m;
        levels.insert(m);
    }
    cout << ((levels.size() == n) ? ("I become the guy.") : ("Oh, my keyboard!"));
    return 0;
}
