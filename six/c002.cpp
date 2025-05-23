#include <bits/stdc++.h>
using namespace std;

int f91(int n) {
  if (n >= 101)
    return n - 10;
  return f91(f91(n + 11));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  while (cin >> n && n != 0) {
    cout << "f91(" << n << ") = " << f91(n) << "\n";
  }

  return 0;
}
