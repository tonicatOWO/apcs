#include <bits/stdc++.h>
using namespace std;

long long cb(int n, int m) {
  if (m > n - m) {
    m = n - m;
  }

  long long res = 1;

  for (int i = 1; i <= m; i++) {
    res = res * (n - i + 1) / i;
  }

  return res;
}

int main() {
  int n, m;
  while (cin >> n >> m) {
    if (m < 0 || m > n) {
      cout << 0 << "\n";
    } else {
      cout << cb(n, m) << "\n";
    }
  }
  return 0;
}
