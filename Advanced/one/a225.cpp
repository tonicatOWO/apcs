#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  vector<int> numbers(n);

  cin >> n;

  for (int i = 0; i < n; ++i) {
    cin >> numbers[i];
  }
  sort(numbers.begin(), numbers.end(), [](int a, int b) {
    int lastA = a % 10, lastB = b % 10;
    return lastA == lastB ? a > b : lastA < lastB;
  });
}
