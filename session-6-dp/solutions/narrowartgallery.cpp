#include <iostream>
using namespace std;

// Problem: Narrow Art Gallery
// https://open.kattis.com/problems/narrowartgallery

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    // Input
    int N, k, l, r, result;
    cin >> N >> k;

    // Dimensions are N by k by s
    // dp[a][b][c] = S(a,b,c)
    // for s: index 0 represents both rooms of row n open, 1 is left open only, 2 is right open only
    int dp[201][201][3];

    // Fill dp with -1 initially
    for (int i = 0; i < 201; ++i) {
        for (int j = 0; j < 201; ++j) {
            for (int k = 0; k < 3; ++k) {
                dp[i][j][k] = -1;
            }
        }
    }

    // Base cases (row zero)
    cin >> l >> r;
    dp[0][0][0] = l + r;
    dp[0][1][1] = l;
    dp[0][1][2] = r;

    // Tabulate rows 1..N
    for (int i = 1; i <= N; ++i) {
        cin >> l >> r;
        dp[i][0][0] = dp[i-1][0][0] + l + r;
        for (int j = 1; j <= k && j <= i + 1; ++j) {
            // Recurrence relations
            dp[i][j][0] = max(max(dp[i-1][j][0], dp[i-1][j][1]), dp[i-1][j][2]);
            if (dp[i][j][0] != -1) dp[i][j][0] += l + r;
            dp[i][j][1] = max(dp[i-1][j-1][0], dp[i-1][j-1][1]);
            if (dp[i][j][1] != -1) dp[i][j][1] += l;
            dp[i][j][2] = max(dp[i-1][j-1][0], dp[i-1][j-1][2]);
            if (dp[i][j][2] != -1) dp[i][j][2] += r;
        }
    }

    // Extract desired value
    result = dp[N][k][0];

    // Output
    cout << result << endl;
}
