#include <iostream>
using namespace std;

// Problem: Rijeci (solved with memoization)
// https://open.kattis.com/problems/rijeci

// Global arrays (outside all functions)
// are auto-initialized with all zeroes
int memo[46];

int fib(int n) {
    // 1. get fib(n) from memo array if it's there
    // 2. otherwise, calculate f(n) - recursion
    // 3. save f(n) in memo array and return

    if (n == 0) {
        return 0;
    }

    // Check if fib(n) saved in memoization array
    if (memo[n] != 0) {
        return memo[n];
    }

    // Otherwise, calculate recursively, save in memo array, and return
    return memo[n] = fib(n-1) + fib(n-2);
}

int main() {
    // Input
    int K, A, B;
    cin >> K;

    // Base cases
    memo[0] = 0;
    memo[1] = 1;

    // Calculate answer
    A = fib(K-1);
    B  = fib(K);

    // Output
    cout << A << " " << B << endl;
}
