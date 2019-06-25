    /*
    Title           :   Broken keyboard
    Author          :   ALELQ, MUSTAFA
    Date            :   25 June, 2019
    Description     :   Solution to Problem1: https://codeforces.com/problemset/problem/1185/B
                                    Problem2: https://open.kattis.com/problems/apaxiaaans
    */


// Problem1

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

// a function converts a string to pairs of chars with # of appearances
void insert(string str, vector<pair<char, int>> &a) {

  for (int i = 0; i < str.size();) {
      int count = 1;
    // counting frequency of a character
      for (int j = 1; i+j < str.size() && str[i] == str[i+j]; j++) count++;        
    // pushing it into a pair to the vector
      a.push_back({str[i], count});                                
      i += count;
    }
}

int main() {
  vector<pair<char,int>> x;
  vector<pair<char,int>> y;
  string str1, str2;
  cin >> str1 >> str2;
  insert(str1, x);
  insert(str2, y);
  bool flag = x.size() == y.size();
  for (int i = 0; i < x.size() && flag; i++)
      flag &= (x[i].first == y[i].first)&&(x[i].second <= y[i].second);
      if (flag) cout << "YES\n";
      else cout << "NO\n";
  return 0;
}

// Problem2
void noRept(string str) {
    for (int i = 0; i < str.size();) {
      cout << str[i];
      int count = 0;
      // Determining the size of increment needed
    for (int j = 0; str[i]==str[i+j]; j++) count++;
        i += count;
      }
    cout << endl;
}
