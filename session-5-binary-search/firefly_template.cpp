#include <bits/stdc++.h>

using namespace std;

int main() {
  int N, H;
  cin >> N >> H;
  vector<int> stalagmites(N/2);
  vector<int> stalactites(N/2);
  for (int i = 0; i < N/2; i++) {
    cin >> stalagmites[i];
    cin >> stalactites[i];
  }

  int min_obstacles = INT_MAX;
  int possible_heights = 0;

  // write your code here...

  cout << min_obstacles << " " << possible_heights << endl;

  return 0;
}
