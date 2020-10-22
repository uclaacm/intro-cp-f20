#include <bits/stdc++.h>
using namespace std;

// Problem: Faktor
// https://open.kattis.com/problems/faktor

int main () {
    int A, I;
    cin >> A >> I;
    int num_scientists = A * (I-1) + 1;
    cout << num_scientists << '\n';
}