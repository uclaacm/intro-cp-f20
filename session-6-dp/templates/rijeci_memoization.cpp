#include <iostream>
using namespace std;

// Problem: Rijeci (use memoization to solve)
// https://open.kattis.com/problems/rijeci

// Global arrays (outside all functions)
// are auto-initialized with all zeroes
int memo[46];

int fib(int n) {
    // 1. get fib(n) from memo array if it's there
    // 2. otherwise, calculate f(n) - recursion
    // 3. save f(n) in memo array and return

    // your code goes here
}

int main() {
    int K, A, B;
    cin >> K;

    // your code goes here

    cout << A << " " << B << endl;
}
