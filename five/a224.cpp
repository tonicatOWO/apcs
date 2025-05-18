#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
  int f[26] = {0};

  for (char c : s) {
    if (isalpha(c)) {
      f[tolower(c) - 'a']++;
    }
  }

  int odd = 0;
  for (int i = 0; i < 26; i++) {
    if (f[i] % 2 != 0) {
      odd++;
    }
  }

  return odd <= 1;
}

int main() {
  string s;

  while (getline(cin, s)) {
    if (check(s)) {
      cout << "yes !" << "\n";
    } else {
      cout << "no..." << "\n";
    }
  }

  return 0;
}
