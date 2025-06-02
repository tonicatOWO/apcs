#include <bits/stdc++.h>
using namespace std;

// v1

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
  return 0;
}

// v2

int v2main () {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  vector<int> v(n);

  for (auto &i : v) {
    cin >> i;
  }

  sort(v.begin(), v.end());

  for (const auto &i : v) {
    cout << i << " ";
  }

  return 0;
}
