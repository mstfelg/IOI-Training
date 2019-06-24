#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

// A solution to https://codeforces.com/problemset/problem/1185/B


void insert(string str, vector<pair<char, int>> &a) {             // a function converts a string to pairs of chars with # of appearances

  for (int i = 0; i < str.size();) {
      int count = 1;
      for (int j = 1; i+j < str.size() && str[i] == str[i+j]; j++) count++;            // counting frequency of a character
      a.push_back({str[i], count});                                // pushing it into a pair to the vector
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
      if (flag) cout << "YES";
      else cout << "NO";
  return 0;
}
