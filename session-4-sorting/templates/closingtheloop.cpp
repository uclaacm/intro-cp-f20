#include <bits/stdc++.h>
using namespace std;

// https://open.kattis.com/problems/closingtheloop

int main() {
    int N;
    cin >> N;
    for (size_t testcase = 0; testcase < N; testcase++) {
        int S;
        cin >> S;
        string ropes[S];
        for (size_t i = 0; i < S; i++) {
            cin >> ropes[i];
        }

        int ans = 0;

        // your solution here

        cout << "Case #" << testcase + 1 << ": " << ans << endl;
    }
}