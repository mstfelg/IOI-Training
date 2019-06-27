    /*
    Title           :   Finding a structure of a word inside a string
    Author          :   ALELQ, MUSTAFA
    Date            :   27 June, 2019
    Description     :   Determining of there's HELLO inside a given string
    */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Vector ontaining pairs {char, consecutive appearances}
    vector<pair<char, int>> a;
    string s;
    cin >> s;

    // First check size of s
    if (s.size() < 5) cout << "NO";
    else {
        // Inserting string chars & appearances into a
        for (int i = 0; i < s.size();) {
            int count = 0;
            // Count # of consecutive appearances 
            for (int j = 0; s[i] == s[i+j]; j++) {
                count++;
            }
            a.push_back({s[i], count});
            // cout << s[i] << " " << count << endl;
            // Jump to the next distinct char
            i += count;
            }
        // Determining values of consecutive chars, 
        bool flag = false;
        for (int i = 0; !flag && i < a.size()-3; i++) {
            flag |= (
                 a[i].first == 'h' 
            && a[i+1].first == 'e' 
            && a[i+2].first == 'l' && a[i+2].second >= 2 
            && a[i+3].first == 'o'
            );
            }
        // Output
        if (flag) cout << "YES";
        else cout << "NO";
    }
    return 0;
}
