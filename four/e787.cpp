#include <iostream>
using namespace std; 

int main() {  
  int n, m;
  cin >> n >> m;
  
  int mp[105][105];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> mp[i][j];
    }
  }
  
  int t[105][105];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> t[i][j];
    }
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int sum = 0;
      
      for (int c = 0; c < m; c++) {
        sum += t[i][c];
      }
      
      for (int f = 0; f < n; f++) {
        sum += t[f][j];
      }
      
      sum -= t[i][j];
            
      cout << (sum % 2 == 1) ? !mp[i][j] : mp[i][j]; << " ";
    }
    cout << endl;
  }
   
  return 0;
}

