/*
Title		:	Black Square
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-06
Description	:	A solution to: https://codeforces.com/contest/431/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {    
    int a[5]; // Initialize the array of calories
    cin >> a[1] >> a[2] >> a[3] >> a[4];

    string s; cin >> s;
    int count = 0; // Calories count

    for (int i = 0; i < s.length(); i++)
    {
        count += a[s[i] - '0']; // Convert char to int then substitute in the array
    } 
    cout << count;

    return 0;
}