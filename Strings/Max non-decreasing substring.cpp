 /*
    Title           :   Maximum non-decreasing substring
    Author          :   ALELQ, MUSTAFA
    Date            :   26 June, 2019
    Description     :   Solution to: https://codeforces.com/problemset/problem/580/A
                        
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    scanf("", n);
    // Vector of numbers
    vector<int> nums;
    // Adding all numbers into nums
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        nums.push_back(k);
    }
    // counting non-decreasing length
    int max = 0;
    for (int i = 0; i < n; ++i) {
        int count = 1;
        for (int j = 1; ( nums[i+j-1] <= nums[i+j] ) && i+j < nums.size() ; j++) {count++;}
        if (max < count) max = count;
    }
    cout << max;
    return 0;
}
