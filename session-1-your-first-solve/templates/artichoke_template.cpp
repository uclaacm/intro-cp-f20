#include <bits/stdc++.h>
using namespace std;

// Problem: artichoke
// https://open.kattis.com/problems/artichoke

int a, b, c, d, p;

double price(int k) {
    return (sin(a*k+b) + cos(c*k+d) + 2.) * p;
}

int main () {
    int n;
    cin >> p >> a >> b >> c >> d >> n;
    
    double max_decline;

    

    // problem accepts relative error of 10^-6, so this is fine
    cout << setprecision(8) << max_decline << '\n';
}