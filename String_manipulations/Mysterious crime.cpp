    /*
    Title           :   Mysterious crime
    Author          :   ALELQ, MUSTAFA & others
    Date            :   3 July, 2019
    Description     :   A solution to: https://codeforces.com/blog/entry/62797
    */
    
    // === First solution ===
    #include <bits/stdc++.h>
     
    using namespace std;
     
    const int N = 1e5 + 5;
    int arr[N];
    set<int> nxt[N];
     
    int main() {
        int n , m;
        scanf("%d%d" , &m , &n);
        for (int i = 0 ;i < n ;i++) {
            for (int j = 0 ;j < m ;j++) {
                scanf("%d" , &arr[j]);
                if (j) nxt[arr[j - 1]].insert(arr[j]);
            }
            nxt[arr[m - 1]].insert(m + 1);
        }
        
        long long ans = 0;
        for (int i = 0 ;i < m; i++) {
            int cnt = 1;
            while (i + 1 < m && nxt[arr[i]].size() == 1) 
                i++ , cnt++;
            ans += (cnt * (cnt + 1ll)) / 2;
        }
        
        printf("%lld" , ans);
    }
