#include <bits/stdc++.h>
using namespace std;

// Problem: Permutation Descent Counts
// https://open.kattis.com/problems/permutationdescent

long long pdc(int N, int v) {

    // your code goes here

}

int main() {
    int P;
    cin >> P;
    for (int i = 0; i < P; ++i) {
        int K, N, v;
        cin >> K >> N >> v;
        cout << K << ' ' << pdc(N, v) << '\n';
    }
}