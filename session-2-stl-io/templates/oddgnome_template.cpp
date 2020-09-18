#include <bits/stdc++.h>
using namespace std;

// Problem: Odd Gnome
// https://open.kattis.com/problems/oddgnome

int main () {
    // total number of testcases
    int n; cin >> n;
    // for each testcase
    for (int t = 0; t < n; t++) {
        // number of gnomes in this group
        int g; cin >> g;
        vector<int> gnome_nums(g);
        for (int i = 0; i < g; i++) {
            cin >> gnome_nums[i];
        }

        int king_position;
        // your code goes here

        cout << king_position << '\n';
    }
}