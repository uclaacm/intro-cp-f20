#include <bits/stdc++.h>
using namespace std;

// Problem: compass
// https://open.kattis.com/problems/compass
// The problem statement mentions mods, but fear not! 
// The problem can be solved without any mods.

int main () {
    int n1, n2;
    cin >> n1 >> n2;
    
    int shortest_spin;

    shortest_spin = n2 - n1;
    if (shortest_spin > 180) shortest_spin -= 360;
    else if (shortest_spin <= -180) shortest_spin += 360;

    cout << shortest_spin << '\n';
}