#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  while (getline(cin, x)) {
    int A = 0, B = 0;
    for (int i = 0; i < x.size(); ++i) {
      int digit = x[i] - '0';
      (i % 2) ? (A += digit) : (B += digit);
    }
    cout << abs(A - B) << endl;
  }
  return 0;
}
