    /*
    Title           :   Presents
    Author          :   ALELQ, MUSTAFA
    Date            :   29 June, 2019
    Description     :   A solution to: https://codeforces.com/problemset/problem/136/A
                        Given a directed numbered graph, with start points, find end points 
    */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

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
