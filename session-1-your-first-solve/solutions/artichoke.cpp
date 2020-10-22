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
    
    double max_so_far = price(1);
    double max_decline = 0.;

    for (int i = 1; i <= n; i++) {
        double curr_price = price(i);
        max_decline = max(max_decline, max_so_far - curr_price);
        max_so_far = max(max_so_far, curr_price);
    }

    // problem accepts relative error of 10^-6, so this is fine
    cout << setprecision(8) << max_decline << '\n';
}