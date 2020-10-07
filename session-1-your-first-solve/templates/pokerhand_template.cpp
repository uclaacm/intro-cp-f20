#include <bits/stdc++.h>
using namespace std;

// Problem: pokerhand
// https://open.kattis.com/problems/pokerhand

int main() {

  // a string is an array of characters. "icpc" = {'i','c','p','c'}
  string cards[5];

  for (int i = 0; i < 5; i++) {
    cin >> cards[i];
  }
  // cards[i][0] = rank of card i
  // cards[i][1] = suit of card i

  int max = 0;

  // put your solution here

  cout << max << '\n';

  return 0;
}
