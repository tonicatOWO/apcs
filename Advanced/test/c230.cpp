#include <bits/stdc++.h>
using namespace std;

struct tre {
  int x, y, h;
} S[100005];

bool cmp(tre &a, tre &b) {
  return a.x*a.x + a.y*a.y < b.x*b.x + b.y*b.y;
  
}

int main() {
  int n;
  while (cin >> n) {
    int ans = 0;

    for (int i = 0; i < n; i++) {
      cin >> S[i].x >> S[i].y >> S[i].h;
    }
    sort(S, S + n, cmp);

    for (int i = 0; i < n - 1; i++) {
      if (S[i].h - S[i + 1].h > ans) {
        ans = S[i].h - S[i + 1].h;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
