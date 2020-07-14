/*
Title		:	A. Carrot Cakes
Author		:	ALELQ, MUSTAFA
Date		:	2020-07-14
Description	:	A solution to: https://codeforces.com/contest/799/problem/A
                n: required cakes; t: time for an oven to make k cakes; d: time required to build a new oven

                Compare between T0 and T1, where:
                T0 = ceil(n/k) * t  (The time needed without an additional oven)
                n = k * floor(T1/t) + k * floor((T1-d)/t) (The time when building another furnace)

                Simplifying the final relation:
                T0/t = floor(T1/t) + floor((T1-d)/t)
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    const int batches = n/k + bool(n%k); // Number of batches = ceil(n/k)
    const int T0 = t * batches; // Total time for one oven
    const int q = (batches + d/t + bool(d%t))/2; // quotient of T1 when divided by t
    const int T1 = q*t + (d%t)*bool(!((batches + d/t + bool(d%t))%2)); // Total time when an additional oven is built

    if (!(d%t)) { // If the two ovens finish at the same time...
        if (T0 <= d + t) cout << "NO";
        else cout << "YES";
    }
    else{ // If the ovens finish at different times...
        if (T1 >= T0) cout << "NO";
        else cout << "YES";
    }
    return 0;
}