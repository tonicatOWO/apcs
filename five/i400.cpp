#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n;
  std::cin >> m >> n;

  string e, t;
  std::cin >> e >> t;

  string s = "";
  s.resize(n);

  int L = 0, R = n - 1, cnt = 0;

  for (int i = 0; i < n; i++) {
    if (e[i] == '0') {
      s[L++] = t[i];
    } else { // to end
      s[R--] = t[i];
      cnt++;
    }
  }
  // cout << cnt << "\n" << s << "\n";
  if (cnt%2==1) {
    if (n%2==0) {
        s=s.substr(n/2,n/2) + s.substr(0,n/2);    
    }else {
      s=s.substr(n/2+1,n/2) + s[n/2]+s.substr(0,n/2);
    }
  }

  cout << s << "\n";
}
