    /*
    Title           :   isTree
    Author          :   ALELQ, MUSTAFA
    Date            :   23 June, 2019
    Description     :   Given a graph with degrees of its vertices, determine if the graph is a tree or not
    */
    
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int d, sDeg = 0;
    for (int i = 0; i < n; ++i) {
        cin >> d;
        sDeg += d;
    }
    if (sDeg/2 == n-1) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
