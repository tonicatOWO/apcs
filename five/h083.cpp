#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int m;
  string s[50005];
  std::cin >> m;
  for (int i=0; i<m ;i++) {
    std::cin >> s[i];
  }
  int ans;
  for (int i=0;i<m;i++) {
    for (int j=i+1;j<m;j++) {
      /*std::cout << i << " " << j << "\n";*/
      string x =s[i]+s[j];
      if (x.substr(0,x.size()/2)==x.substr(x.size()/2)) {
        ans++;
      }
    }
  }
    std::cout << ans << "\n";
}  
