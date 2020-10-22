#include <bits/stdc++.h>
using namespace std;

// Problem: bossbattle
// https://open.kattis.com/problems/bossbattle

int main () {
    int n;
    cin >> n;
    int min_num_bombs;
    if (n < 3) {
        min_num_bombs = 1;
    } else {
        min_num_bombs = n - 2;
    }
    cout << min_num_bombs << '\n';
}