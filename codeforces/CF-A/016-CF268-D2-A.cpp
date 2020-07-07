/*
Title		:	A. Games
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-07
Description	:	A solution to: https://codeforces.com/contest/268/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    map<int, int> h;
    map<int, int> g;

    int n; cin >> n;
    for (int i = 0; i < n; i++)
    {
    int a, b;
    cin >> a >> b;
    ++h[a]; ++g[b];
    }
    
    int sum = 0;
    for (const auto &element : h) {
        sum += element.second * g[element.first];
    }
    cout << sum;

    return 0;
}