// Homework (Домашнее задание)
// Time Complexity O(N)

#include <iostream>
using namespace std;
int main() {
  long long t, sum = 0, r, l, mx = -1000, mn = 1000;
  cin >> t;
  long long mul = 1, a[t];
  for (int i = 0; i < t; i++) {
    cin >> a[i];
    if (a[i] > 0) sum += a[i];
    if (a[i] > mx){
      mx = a[i];
      r = i;
    }
    if (a[i] < mn){
      mn = a[i];
      l = i;
    }
  }
  if (min(l, r) + 1 < max(l, r)) {
    for (int i = min(l, r) + 1; i < max(l, r); i++) {
      mul *= a[i];
    }
  }
  else mul = 0;
  cout << sum << " " << mul;
  return 0;
}
