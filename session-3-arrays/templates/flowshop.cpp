#include <iostream>
#include <vector>

using namespace std;

// https://open.kattis.com/problems/flowshop

int main() {
    // these make your io really fast
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> TProcess(n, vector<int>(m, 0)); // and take input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> TProcess[i][j];
        }
    }
    vector<int> TSwatherReady(n, 0);
    vector<int> TWorkerReady(m, 0);
    
    //main logic here



    for (int i = 0; i < n; i++) {
        cout << TSwatherReady[i] << " ";
    }
    cout << endl;
}