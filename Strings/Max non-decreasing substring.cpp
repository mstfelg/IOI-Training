 /*
    Title           :   Maximum non-decreasing substring (Kefa and the first steps)
    Author          :   ALELQ, MUSTAFA
    Date            :   27 June, 2019
    Description     :   Solution to: https://codeforces.com/problemset/problem/580/A
                        
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int nums[n];
    cin >> nums[0];
    int countMax = 1, count = 1;
    for (int i = 1; i < n; i++) {
        cin >> nums[i];
        if (nums[i-1] <= nums[i]) {
            count++;
            // * Set countMax to whatever number bigger than him
            countMax = max(countMax, count);
        }
        // Reset the counter whenever the chars differ
        else count = 1;
    }
    cout << countMax;
    return 0;
}
