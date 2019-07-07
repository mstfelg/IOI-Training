    /*
    Title           :   Vessels
    Author          :   ALELQ, MUSTAFA
    Date            :   6 July, 2019
    Description     :   A solution to: https://codeforces.com/problemset/problem/371/D
                        Given n vessels on top of each other & water pouring queries,
                        return number of liters of water in vessel v.
    Pseudocode      :
                        1. let ves[n] & wa[n] be arrays of vessel capacity & water quantity respectively.
                        2. Pass through each query, check its type.
                        3. If it's type1 then just print
                        4. If it's type2 then add water to wa[i-1] then handle the overflow.
                        5. Define ovf function to handle the overflow:
                            1. Check edge case (1)
                            2. 
                        
                        Edge cases:
                        1. Overflow in the last vessel.
                        2. n == 1.
    */

#include <bits/stdc++.h>
using namespace std;

/*  GIVEN: v : starting vessel (zero-based),
          sz : #of vessels,
          wa : water quantities,
          ves: vessels capacities,
          nxt: next non-full vessel (reduces complexity)

    DO   : Handle the overflow */
void ovf(int v, int sz, int wa[], int ves[], int nxt[]) {
    // Edge case (1) & (2)
    if (v == sz-1 && wa[v] > ves[v]) {wa[v] = ves[v];}

    // If there's an overflow start from vessel v 
    // and move down to vessels under it:
    else if (wa[v] > ves[v]) {

        // Redirect the overflow to the next vessel
        wa[nxt[v+1]] += (wa[v] - ves[v]);

        // Reset water quantity in v
        wa[v] = ves[v];

        // Handle the overflow in the next vessel
        ovf(nxt[v+1], sz, wa, ves, nxt);

        // After handling the overflow, set the next vessel to be nxt[v+1]
        nxt[v] = nxt[v+1];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // n: number of vessels (2e5)
    int n; cin >> n;
    
    // ves[i]: capacity of vessel i (1e9)
    int ves[n];
    for (int i = 0; i < n; ++i) {cin >> ves[i];}
    // wa[i]: water quantity in vessel i, wa[i] <= ves[i]
    int wa[n] = {};
    // nxt[i]: next non-full vessel
    int nxt[n];
    for (int i = 0; i < n; ++i) {nxt[i] = i;}

    int m; cin >> m;
    int a, v, l;
    // m: #queries (2e5) type1: 1 vi li, type2: 2 vi
    for (int i = 0; i < m; ++i) {
        cin >> a;
        if (a == 1) {
            cin >> v >> l;
            wa[nxt[v-1]] += l;
            ovf(nxt[v-1], n, wa, ves, nxt);
        }
        else {
            cin >> v;
            cout << wa[v-1] << endl;
        }
    }

    return 0;
}

/* SECOND SOLUTION */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    int cap[n];
    for (int i = 0; i < n; ++i) cin >> cap[i];
    int sz[n] = {};
    set<int> nfld;
    for (int i = 0; i < n; ++i) {nfld.insert(i);}

    int m; cin >> m;
    int q, v, l;
    for (int i = 0; i < m; ++i) {
        cin >> q;
        if (q == 1) {
            cin >> v >> l;
            --v;
            while (l) {
                // there are remaining liters
                auto it = nfld.lower_bound(v);
                if (it == nfld.end()) break;
                // found a not full vessel
                int q = min(cap[*it] - sz[*it] , l);
                sz[*it] += q;
                l -= q;

                if (sz[*it] == cap[*it])
                    nfld.erase(it);
            }
        }
        else {
            cin >> v;
            cout << sz[v-1] << endl;
        }
    }

    return 0;
}
