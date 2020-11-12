#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> first_row(n);
  for (int i = 0; i < n; i++) {
    cin >> first_row[i];
  }

  vector<int> second_row(n);
  for (int i = 0; i < n; i++) {
    cin >> second_row[i];
  }

  int max_weight;

  // write your code here...

  cout << max_weight << endl;

  return 0;
}

