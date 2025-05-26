#include <bits/stdc++.h>
using namespace std;

long long sumPrimesBelow(int n) {
  vector<bool> isPrime(n, true);

  isPrime[0] = isPrime[1] = false;

  for (int i = 2; i * i < n; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j < n; j += i) {
        isPrime[j] = false;
      }
    }
  }

  long long sum = 0;
  for (int i = 2; i < n; i++) {
    if (isPrime[i]) {
      sum += i;
    }
  }

  return sum;
}

int main() {
  int limit = 2000000;
  long long res = sumPrimesBelow(limit);
  cout << res << "\n";
  return 0;
}
