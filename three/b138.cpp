#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int arm,ttall,ans=0;
vector<int> tree;

int main(){
  for (int i=0;i<10;i++) {
    std::cin >> ttall;
    ttall -= 30;
    tree.push_back(ttall);
  }
  std::cin >> arm;
  for (int i=0;i<10;i++) {
    if (arm >= tree[i]) ans++;
  }
  std::cout << ans << "\n";
}


