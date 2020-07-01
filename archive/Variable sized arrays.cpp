/*
    Title           :   Variable sized arrays
    Author          :   ALELQ, MUSTAFA
    Date            :   23 June, 2019
    Description     :   Getting queries of variable sized arrays.
                        A solution to https://www.hackerrank.com/challenges/variable-sized-arrays/problem
*/

#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    
    // n: #rows, q: #queries
    vector<vector<int>> a;
    int n, q;
    cin >> n >> q;

        for (int i = 0; i < n; i++) {
            // k: #columns for each row in n
            int k;
            cin >> k;
            // Define b, and push back elements to it
            vector<int> b;
                for (int j = 0; j < k; j++) {
                    int u;
                    cin >> u;
                    b.push_back(u);
                }
            // For each vector push it back to the main vector a.
            a.push_back(b);
        }
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        cout << a[x][y] << "\n";
    }
    return 0;
}
