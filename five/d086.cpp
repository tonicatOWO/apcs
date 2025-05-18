#include <bits/stdc++.h>
using namespace std;

int calc(string s) {
  for (char c : s) {
    if (!isalpha(c)) {
      return -1;
    }
  }

  int sum = 0;
  for (char c : s) {
    sum += (tolower(c) - 'a' + 1);
  }

  return sum;
}

int main() {
  string s;

  while (true) {
    cin >> s;

    if (s == "0") {
      break;
    }

    int val = calc(s);
    if (val == -1) {
      cout << "Fail" << endl;
    } else {
      cout << val << endl;
    }
  }

  return 0;
}
