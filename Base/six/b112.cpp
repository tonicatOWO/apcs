#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  if (a % b == 0) {
    return b;
  }
  return gcd(b, a % b);
}

int main() {
  int schools;
  while (cin >> schools) {
    int res;
    cin >> res;
    for (int i = 1; i < schools; i++) {
      int stu;
      cin >> stu;
      res = gcd(res, stu);
    }
    cout << res << "\n";
  }
}
