#include <bits/stdc++.h>
using namespace std;

bool check(const string &a, const string &b) {
  if (a.length() != b.length())
    return false;

  int cnt[128] = {0};

  for (char c : a)
    cnt[c]++;
  for (char c : b)
    cnt[c]--;

  for (int i = 33; i <= 126; i++) {
    if (cnt[i] != 0)
      return false;
  }

  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string a, b;
  while (getline(cin, a)) {
    if (a == "STOP!!")
      break;
    getline(cin, b);
    cout << (check(a, b) ? "yes" : "no") << "\n";
  }

  return 0;
}
