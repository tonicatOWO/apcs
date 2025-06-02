#include <bits/stdc++.h>
using namespace std;

struct Tree {
  int x, y, h;
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  while (cin >> n) {
    vector<Tree> trees(n);

    for (int i = 0; i < n; i++) {
      cin >> trees[i].x >> trees[i].y >> trees[i].h;
    }

    sort(trees.begin(), trees.end(),
         [](const Tree &a, const Tree &b) { return a.x + a.y < b.x + b.y; });

    int max_height = -1;
    int max_diff = -1;

    for (int i = 0; i < n; i++) {
      max_diff = max(max_height - trees[i].h, max_diff);
      max_height = max(max_height, trees[i].h);
    }

    cout << max_diff << endl;
  }
  return 0;
}
