// https://open.kattis.com/problems/inflation
 
#include <bits/stdc++.h>
using namespace std;
 
int main() { 
    // input
    int n; cin >> n;
    vector<int> canisters(n);
    for (int i = 0; i < n; i++) {
        cin >> canisters[i];
    }
 
    // variables to format output
    bool possible = true;
    double frac = 0;
    // TODO: Your solution here
 
 
    if (possible)
        cout << frac << "\n";
    else
        cout << "impossible" << "\n";
} 