    /*
    Title           :   School queue
    Author          :   ALELQ, MUSTAFA
    Date            :   29 June, 2019
    Description     :   A solution to: https://codeforces.com/contest/266/problem/B
                        Swapping positions of some string of binary
    */
    
   #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // # of students & time (# of steps)
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;
    
    // In each step
    for (int step = 0; step < t; ++step) {
    
        // Pass through chars of s, and determine jump accordingly 
        for (int j = 0; j < n;) {
        
            // Once you find substring 'BG' inside s, swap positions, increment by 2.
            if (s[j-1] == 'B' && s[j] == 'G') {
                s[j-1] = 'G';
                s[j]   = 'B';
                j += 2;
            }
            
            // Otherwise keep incrementing 1
            else {++j;}
        }
    }
    

    cout << s;
    return 0;
}
