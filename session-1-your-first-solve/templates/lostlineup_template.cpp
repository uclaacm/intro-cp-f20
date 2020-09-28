#include <bits/stdc++.h>
using namespace std;

// Problem: lostlineup
// https://open.kattis.com/problems/lostlineup

int main () {
    int n;
    cin >> n;
    vector<int> d(n-1);
    for (int i = 0; i < (n-1); i++) {
        cin >> d[i];
    }

    vector<int> order;

    // figure out the order

    for (int person : order) {
        cout << person << ' ';
    }
    cout << '\n';
}