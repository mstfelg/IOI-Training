/*
Title		:	A. Free Ice Cream
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-16
Description	:	A solution to: https://codeforces.com/contest/686/problem/A
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    unsigned long long int x;
    cin >> n >> x;
    int count = 0; // Number of distressed children
    for (int i = 0; i < n; i++)
    {
        char sign;
        cin >> sign;
        int pack;
        cin >> pack;

        if (sign == '-')
            if (x >= pack)
                x -= pack;
            else
                count++;
        else 
            x += pack;
    }
    cout << x << ' ' << count;
    
    return 0;
}