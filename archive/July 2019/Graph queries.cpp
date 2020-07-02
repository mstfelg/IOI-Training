    /*
    Title           :   Graph queries
    Author          :   ALELQ, MUSTAFA
    Date            :   3 July, 2019
    Description     :   Determining whether vertex v is connected to vertex y.
    */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    bool adj[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            adj[i][j] = 0;
        }
    }

    int a, b;
    for (int i = 0; i < m; ++i) {
        cin >> a >> b;
        adj[a][b] = true;
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> a >> b;
        if (adj[a][b] || adj[b][a]) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
