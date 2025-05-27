#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n,res=0;
  while (cin >> n) {
    vector<int> nums(n);

    for (int i; i < n; i++) {
      cin >> nums[i];
    }

    sort(nums.begin(), nums.end(),
         [](int a, int b) { return abs(a) > abs(b); });

    for (int i = 0; i < n-1; i++) {
      if (nums[i]*nums[i+1] < 0) {
        res++;
      }
    }
    cout << res << "\n";
    return 0;
  }
}
