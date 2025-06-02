#include <bits/stdc++.h>
using namespace std;

struct statue {
  int h, w, original_pos;

  bool operator<(const statue &other) const {
    return tie(h, w, original_pos) <
           tie(other.h, other.w, other.original_pos);
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<statue> sculptures(n);

  for (int i = 0; i < n; i++) {
    cin >> sculptures[i].h >> sculptures[i].w;
    sculptures[i].original_pos = i;
  }

  sort(sculptures.begin(), sculptures.end());

  int total = 0;
  for (int i = 0; i < n; i++) {
    total += abs(sculptures[i].original_pos - i);
  }

  cout << total << "\n";

  return 0;
}
