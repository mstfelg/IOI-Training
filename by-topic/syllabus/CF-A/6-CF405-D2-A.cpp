/*
Title		:	Gravity Flip
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-03
Description	:	A solution to: https://codeforces.com/contest/405/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main () {
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    int n; cin >> n;
    int arr[n-1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for (int i = 0; i < n; i++)
    {   
        cout << arr[i] << " ";
    }
    return 0;
}