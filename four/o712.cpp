#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n, k, r, c, mp[105][105];
  cin >> m >> n >> k >> r >> c;

  for (int i = 0; i < 105; i++)
    for (int j = 0; j < 105; j++)
      mp[i][j] = -1;

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> mp[i][j];
    }
  }

  r++, c++;
  int score = 0, gem = 0, dir = 0;
  int dr[4] = {0, 1, 0, -1}, dc[4] = {1, 0, -1, 0};

  while (mp[r][c] != 0) {
    score += mp[r][c];
    mp[r][c]--;
    gem++;

    if (score % k == 0) {
      dir = (dir + 1) % 4;
    }

    while (r + dr[dir] < 1 || r + dr[dir] > m || c + dc[dir] < 1 ||
           c + dc[dir] > n || mp[r + dr[dir]][c + dc[dir]] == -1) {
      dir = (dir + 1) % 4;
    }

    r += dr[dir];
    c += dc[dir];
  }

  cout << gem << '\n';
  return 0;
}
