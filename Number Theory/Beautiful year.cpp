    /*
    Title           :   Beautiful year
    Author          :   ALELQ, MUSTAFA
    Date            :   29 June, 2019
    Description     :   A solution to: https://codeforces.com/problemset/problem/271/A
                        Finding out length of consecutive numbers having at least 2 equal digits.
    */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Input
    int n;
    cin >> n;

    // Start with n+1, stop once i has distinct digits
    int i;
    bool hasDistinct = false;
    for (i = n + 1; !hasDistinct; ++i) {
        string _i = to_string(i);

        // Does numbers have >= 2 equal digits?
        bool hasEqual = false;
        set<char> s;
        // forall digit
        for (int d = 0; d < _i.size(); ++d) {
            if (s.count(_i[d]) == 0) {
                s.insert(_i[d]);
            }
            else {
                hasEqual = true;
                break;
            }
        }
        hasDistinct |= !hasEqual;
    }
    // Output
    cout << i-1;
    return 0;
}
