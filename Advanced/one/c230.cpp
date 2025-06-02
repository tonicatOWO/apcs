#include <bits/stdc++.h>
using namespace std;

struct Tree {
  int x, y, h;
  long long dist_sq;
  int index;

  bool operator<(const Tree &other) const { return dist_sq < other.dist_sq; }
};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin >> n;

  vector<Tree> trees(n);

  for (int i = 0; i < n; i++) {
    cin >> trees[i].x >> trees[i].y >> trees[i].h;
    trees[i].index = i;
    trees[i].dist_sq =
        (long long)trees[i].x * trees[i].x + (long long)trees[i].y * trees[i].y;
  }

  sort(trees.begin(), trees.end());

  int start_pos = -1, end_pos = -1;
  for (int i = 0; i < n; i++) {
    if (trees[i].index == 0)
      start_pos = i;
    if (trees[i].index == n - 1)
      end_pos = i;
  }

  vector<long long> dp(n, -1);
  dp[start_pos] = 0;

  for (int i = 0; i < n; i++) {
    if (dp[i] == -1)
      continue;

    for (int j = i + 1; j < n; j++) {
      long long fun = max(0, trees[i].h - trees[j].h);
      dp[j] = max(dp[j], dp[i] + fun);
    }
  }

  cout << dp[end_pos] << endl;

  return 0;
}
