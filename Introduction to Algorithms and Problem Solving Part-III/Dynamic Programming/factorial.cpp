#include <bits/stdc++.h>
using namespace std;
int fact(int n) {
  if (n == 0) return 1;
  int small_factorial = fact(n - 1);
  return small_factorial * n;
}
int main() {
  int n;
  cin >> n;
  int ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
  }
  cout << ans << endl;
  return 0;
}