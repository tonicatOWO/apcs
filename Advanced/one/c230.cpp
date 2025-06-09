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

    int maxHeight = -1;
    int maxDiff = -1;

    for (int i = 0; i < n; i++) {
      maxDiff = max(maxHeight - trees[i].h, maxDiff);
      maxHeight = max(maxHeight, trees[i].h);
    }

    cout << maxDiff << endl;
  }
  return 0;
}
