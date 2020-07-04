/*
Title		:	Petya and Strings
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-04
Description	:	A solution to: https://codeforces.com/contest/112/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main () {
    // ifstream cin("input.txt");
    // ofstream cout("output.txt");

    string str1, str2;
    cin >> str1 >> str2;
    bool flag = 0;

    for (int i = 0; !flag && i < min(str1.length(), str2.length()); i++)
    {
     if (tolower(str1[i]) > tolower(str2[i])) {
         flag = 1;
         cout << 1;
     }
     if (tolower(str1[i]) < tolower(str2[i])) {
         flag = 1;
         cout << -1;
     } 
    }
    if (!flag) {
        if (str1.length() > str2.length()) {cout << 1;}
        else if (str1.length() < str2.length()) {cout << -1;}
        else {cout << 0;}
    }
    return 0;
}