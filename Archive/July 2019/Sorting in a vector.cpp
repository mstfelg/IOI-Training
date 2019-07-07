/*
    Title           :   Sorting in a vector
    Author          :   ALELQ, MUSTAFA
    Date            :   24 June, 2019
    Description     :   Sorting n numbers entered by user into a vector. After finishing entering numbers enter any char.
*/ 

#include <iostream>
#include <sstream>
#include <math.h>
#include <vector>
using namespace std;

int main() {
  vector<int> number;
  string s;
    while (cin >> s, true) {
   // break the loop when ∄ a number
    if (!(s[0] >= '0' && s[0] <= '9')) {break;}
      stringstream ss(s);               
      int x;                            //  Define a stringstream, and some integer x,
      ss >> x;                          //  convert the string into integer x
      number.push_back(x);              //  Add x to vector "number"
  }
  return 0;
}
