#include <bits/stdc++.h>
using namespace std;

// Problem: toilet
// https://open.kattis.com/problems/toilet

int main () {
    string s; 
    getline(cin, s);

    int num_always_up = 0, num_always_down = 0, num_your_preference = 0;
    
    int n = s.size();
    for (int i = 1; i < n; i++) {
        if (s[i] == 'U') {
            num_always_down += 2;
        } 
        if (s[i] == 'D') {
            num_always_up += 2;
        }
        if (s[i] != s[i-1]) {
            num_your_preference += 1;
        }
    }
    // we may have assumed the first person saw an adjusted seat when they didn't
    if (s[0] == 'U' && s[1] == 'U') num_always_down--;
    if (s[0] == 'U' && s[1] == 'D') num_always_down++;
    if (s[0] == 'D' && s[1] == 'U') num_always_up++;
    if (s[0] == 'D' && s[1] == 'D') num_always_up--;

    cout << num_always_up << '\n' << num_always_down << '\n' << num_your_preference << '\n';
}