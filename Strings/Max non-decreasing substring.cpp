 /*
    Title           :   Maximum non-decreasing substring
    Author          :   ALELQ, MUSTAFA
    Date            :   26 June, 2019
    Description     :   Solution to: https://codeforces.com/problemset/problem/580/A
                        
*/

#include <bits/stdc++.h>
using namespace std;

// 
int nonDec(vector<int> a, int i) {
    int count = 1;
    // If i is NOT in the range of indeces return 0.
    if (!(i <= a.size()-1 && i >= 0)) return 0;
    // Otherwise check each two consecutive indices
    else {
        for (int j = 1; ( a[i+j-1] <= a[i+j] ) && ( i+j < a.size() ) ; j++) count++;
    }
    return count;
}

int main() {
    int max = 1, n;
    // Vector of numbers
    vector<int> nums;
    cin >> n;
    // Adding all numbers into nums
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        nums.push_back(k);
    }
    // Finding maximum among nonDec
    for (int i = 0; i < n; i++) if (max < nonDec(nums, i)) max = nonDec(nums, i);
    cout << max;
    return 0;
}
