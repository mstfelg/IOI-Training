    /*
    Title           :   Taxi
    Author          :   ALELQ, MUSTAFA
    Date            :   25 June, 2019
    Description     :   Solution: https://codeforces.com/contest/158/problem/B
    */

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  // gi: #groups with i children
  int g1 = 0, g2 = 0, g3 = 0, g4 = 0;
  // Count gi
  for (int i = 0; i < n; i++) {
   int k;
   cin >> k;
   switch(k) {
     case 1:  g1++; break;
     case 2:  g2++; break;
     case 3:  g3++; break;
     default: g4++; break; 
   }
   }
  // compare g1, count min
  int min;
    if      (g3 >= g1)                                      min = g4 + g3 + (g2+1)/2;
    else if (((g1 - g3) % 4 == 1)||((g1 - g3) % 4 == 2))    min = g4 + g3 +  g2/2 + (g1-g3+3)/4;
    else                                                    min = g4 + g3 + (g2+1)/2 + (g1-g3+3)/4;
  cout << min;
  return 0;
}
