#include <bits/stdc++.h>
using namespace std;

struct Sculpture {
  int height, weight, original_pos;

  bool operator<(const Sculpture &other) const {
    return tie(height, weight, original_pos) <
           tie(other.height, other.weight, other.original_pos);
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  vector<Sculpture> sculptures(n);

  for (int i = 0; i < n; i++) {
    cin >> sculptures[i].height >> sculptures[i].weight;
    sculptures[i].original_pos = i;
  }

  sort(sculptures.begin(), sculptures.end());

  int total_distance = 0;
  for (int i = 0; i < n; i++) {
    total_distance += abs(sculptures[i].original_pos - i);
  }

  cout << total_distance << endl;

  return 0;
}
