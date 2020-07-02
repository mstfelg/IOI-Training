/*
Title		:	A. Anton and Danik
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-02
Description	:	A solution to: https://codeforces.com/contest/734/problem/A
*/
#include <bits/stdc++.h>
using namespace std;
int main () {
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");
    int n; cin >> n;
    string str; cin >> str;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
     count += (str[i] == 'A') - (str[i] == 'D');
    }
    cout << ((count > 0)?("Anton"):((count == 0)?("Friendship"):("Danik")));
    return 0;
}