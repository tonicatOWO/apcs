#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;
  string e[105], t;
  for (int i; i < m; i++) {
    cin >> e[i];
  }
  cin >> t;
  for (int i = m - 1; i >= 0; i--) {

    string s = " ";
    s.resize(n);
    int l, r, cnt;
    l = 0;
    r = n - 1;
    cnt = 0;
    for (int j = 0; j < n; j++) {
      if (e[i][j] == '0') {
        s[l++] = t[j];

      } else {
        s[r--] = t[j];
        cnt++;
      }
    }
    if (cnt % 2 == 1) {
      if (n % 2 == 0) {
        s = s.substr(n / 2, n / 2) + s.substr(0, n / 2);
      } else {
        s = s.substr(n / 2 + 1, n / 2) + s[n / 2] + s.substr(0, n / 2);
      }
    }
    t = s;
  }
  cout << t << endl;
}
