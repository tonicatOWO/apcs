#include <iostream>  
using namespace std;  

int main() {  
  int n,m;
  cin >> n >> m;
  int mp[150][105],t[105][105];
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++) cin>>mp[i][j];
  }
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++) cin>>t[i][j];
  }
  int sum;
  for (int i=0;i<n;i++){
    for (int j=0;j<m;j++) {
      std::cout << mp[i][j];
    }
  }
}
