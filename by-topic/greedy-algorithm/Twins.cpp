    /*
    Title           :   Twins
    Author          :   ALELQ, MUSTAFA
    Date            :   23 June, 2019
    Description     :   Solution to: https://codeforces.com/problemset/problem/160/A
                                     Minimum # of elements of a set with a sum > sum of the other elements
    */
    
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    // Array of values of the coins
    int v[n];
    // Populate the array while summing down its elements
    int vSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        vSum += v[i];
    }
    // Sort the array
    sort(v, v+n, greater<int>());
    // Define our "greedy" sum & index i outside the loop
    int gSum = 0;
    int i;
    // Keep adding to gSum until it's > vSum/2
    for (i = 0; gSum <= vSum/2 && i < n; i++) {
        gSum += v[i];
    }
    cout << i;
    return 0;
}
