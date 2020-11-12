#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> citations(n);
  for (int i = 0; i < n; i++) {
    cin >> citations[i];
  }

  int h_index = 0;

  // write your code here...

  cout << h_index << endl;

  return 0;
}
