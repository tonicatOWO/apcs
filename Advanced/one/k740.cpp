#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<vector<int>> v(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    v[i][0] = 1;
    for (int j = 1; j <= i; j++) {
      if (j == i) {
        v[i][j] = 1;
      } else {
        v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << v[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}

// version 2.0

int mainV2() {
  int n;
  cin >> n;

  vector<vector<int>> v(n, vector<int>(n));
  for (int i; i < n; i++) {
    v[i].resize(i + 1);
    v[i][0] = 1;
    v[i][i] = 1;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 1; j <= i; j++) {
      v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
    }
  }

  for (const auto &row : v) {
    for (int val : row) {
      if (val != 0)
        cout << val << " ";
    }
    cout << "\n";
  }
  return 0;
}
