#include <bits/stdc++.h>
using namespace std;

// https://open.kattis.com/problems/basicprogramming2

int main() {
    int N, t;
    cin >> N >> t;
    int A[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    if (t == 1) {
        bool found = false;

        // your solution here

        cout << (found ? "Yes" : "No") << endl;
    }
    if (t == 2) {
        bool containsDuplicate = false;

        // your solution here

        cout << (containsDuplicate ? "Contains duplicate" : "Unique") << endl;
    }
    if (t == 3) {
        int ans = -1;

        // your solution here

        cout << ans << endl;
    }
    if (t == 4) {

        // do it yourself this time
    }
    if (t == 5) {

        // do it yourself this time
    }
}