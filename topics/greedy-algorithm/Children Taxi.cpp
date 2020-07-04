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
  int min;
    // Group g2 with themselves, g1 with g3.
    // if (g1 - g3) remained after grouping, group them with themselves. If the remainder %4 allows adding 2, then add.
    // otherwise we have the situation: g4 + #(g2 grouped with themselves) + g3 + ((g1 - g3) grouped with themselves).

    if      (g3 >= g1)                                      min = g4 + g3 + (g2+1)/2;
    else if (((g1 - g3) % 4 == 1)||((g1 - g3) % 4 == 2))    min = g4 + g3 +  g2/2 + (g1-g3+3)/4;
    else                                                    min = g4 + g3 + (g2+1)/2 + (g1-g3+3)/4;

  cout << min;
  return 0;
}
