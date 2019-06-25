#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<vector<int>> a;
    int n, q;
    cin >> n >> q;

        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            vector<int> b;
                for (int j = 0; j < k; j++) {
                    int u;
                    cin >> u;
                    b.push_back(u);
                }
            a.push_back(b);
        }
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        cout << a[x][y] << "\n";
    }
    return 0;
}
