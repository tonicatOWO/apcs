#include <bits/stdc++.h>
using namespace std;

int main() {

  int n;
  while (cin >> n) {

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }

    sort(nums.begin(), nums.end(), [](int a, int b) {
      int lastA = a % 10, lastB = b % 10;
      return lastA == lastB ? a > b : lastA < lastB;
    });

    for (int i = 0; i < n; i++) {
      cout << nums[i] << (i == n - 1 ? "\n" : " ");
    }
  }
  return 0;
}
