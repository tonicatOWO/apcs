#include <bits/stdc++.h>
using namespace std;

long long f(long long x) { return 2 * x - 3; }

long long g(long long x, long long y) { return 2 * x + y - 7; }

long long h(long long x, long long y, long long z) { return 3 * x - 2 * y + z; }

int math() {
  string str;
  cin >> str;

  if (str != "f" && str != "g" && str != "h") {
    return stoll(str);
  }

  if (str == "f") {
    long long x;
    x = math();
    return f(x);
  }
  if (str == "g") {
    long long x, y;
    x = math();
    y = math();
    return g(x, y);
  }

  if (str == "h") {
    long long x, y, z;
    x = math();
    y = math();
    z = math();
    return h(x, y, z);
  }

  return 0;
}

int main() {
  long long ans = math();
  cout << ans << "\n";
  return 0;
}
