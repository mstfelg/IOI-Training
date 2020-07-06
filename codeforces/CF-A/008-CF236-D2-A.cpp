    /*
    Title           :   Boy or Girl
    Author          :   ALELQ, MUSTAFA
    Date            :   26 June, 2019
    Description     :   Solution to: https://codeforces.com/problemset/problem/236/A
                        Determining the parity of distinct characters in a string
                        A better solution with set.insert() function.
    */

#include <bits/stdc++.h>
using namespace std;

// Check if charactar ch is in string st
bool inStr(char ch, string str) {
    bool flag = false;
    // Pass through each str[i], update flag once you find str[i] == ch & stop the loop.
    for (int i = 0; !flag && i < str.size(); i++) flag |= (str[i]==ch);
    return flag;
}

int main() {
    // Define strTemp to assemble distinct letters from str.
    string str, strTemp;
    cin >> str;
    strTemp = "";
    // For each char in str, if it's NOT in strTemp then add it:
    for (int i = 0; i < str.size(); i++) if(!inStr(str[i], strTemp)) strTemp += str[i];
    // Check parity & print the result
    cout << ((strTemp.size() % 2 == 0) ? ("CHAT WITH HER!") : ("IGNORE HIM!"));
    return 0;
}