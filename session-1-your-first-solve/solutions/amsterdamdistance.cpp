#include <bits/stdc++.h>
using namespace std;

// Problem: Amsterdam Distance
// Link: https://open.kattis.com/problems/amsterdamdistance

int main() {
    double M, N;
    double R;
    double ax, ay, bx, by;
    cin >> M >> N;
    cin >> R;
    cin >> ax >> ay >> bx >> by;

    // safe since R <= 1000
    double minDis;

    double angle = abs(ax-bx) * M_PI / M;

    if (angle < 2.0) {
      minDis = abs(ay-by) * R / N + angle * min(ay,by) * R / N;
    } else {
      minDis = (ay + by) * R / N;
    }

    /*
        Do something here.
        Store your result in variable minDis
    */

    cout << setprecision(10) << minDis << endl;
}
