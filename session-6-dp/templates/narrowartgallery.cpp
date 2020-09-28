#include <iostream>
using namespace std;

// Problem: Narrow Art Gallery
// https://open.kattis.com/problems/narrowartgallery

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    // Input
    int N, k, l, r, result;
    cin >> N >> k;

    // your code goes here (initialize dp array)

    cin >> l >> r;    
    // your code goes here (base cases - row zero)

    // Tabulate rows 1..N
    for (int i = 1; i <= N; ++i) {
        cin >> l >> r;
        // your code goes here (tabulate using recurrence relations)
    }

    // your code goes here (store answer in result var)

    // Output
    cout << result << endl;
}
