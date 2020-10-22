#include <bits/stdc++.h>
using namespace std;

// Problem: Kornislav
// https://open.kattis.com/problems/kornislav

int main() {
    int A, B, C, D, area;
    cin >> A >> B >> C >> D;

    vector<int> order({A,B,C,D});
    // this can also be accomplished with some ifs
    sort(order.begin(),order.end());
    area = order[0] * order[2];

    cout << area << endl;
}
