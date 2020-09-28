#include <iostream>
using namespace std;

// Problem: Rijeci (solved with tabulation)
// https://open.kattis.com/problems/rijeci

int main() {
    // Input
    int K, A, B;
    cin >> K;

    // 1. Create table to store Fibonacci #s
    // 2. Fill the table, starting with base cases
    // 3. Output desired results

    // Define table
    int table[46];

    // Base cases
    table[0] = 0;
    table[1] = 1;

    // Tabulate (fill table)
    for (int i = 2; i <= K; ++i) {
        table[i] = table[i-1] + table[i-2];
    }

    A = table[K-1];
    B = table[K];

    // Output
    cout << A << " " << B << endl;
}
