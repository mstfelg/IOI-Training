    /*
    Title           :   Dubstep
    Author          :   ALELQ, MUSTAFA
    Date            :   1 July, 2019
    Description     :   A solution to: https://codeforces.com/contest/208/problem/A
                        Deleting a substring "WUB" from a string, replace it with space if it's between 2 words.
    */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;
    
    // p: position of the first WUB from left to right.
    int p = 0;
    
    // while ∃ a position for WUB
    while ((p = s.find("WUB" , p)) != -1) {
    
      // Replace it with space if there's no space
        if (p > 0 && s[p-1] != ' ') {
            s.replace(p , 3 , " ");
        }
        else {
        
        // Otherwise just delete it
        s.replace(p , 3 , "");
        }
    }
    
    // while (s.size() && s.back() == ' ')
    //     s.pop_back();                        Add to remove the last space

    cout << s;
    return 0;
}
