#include <bits/stdc++.h>
using namespace std;

int main() {
  string cell;
  cin >> cell;

  int i = 0;
  while (i < cell.length() && isalpha(cell[i])) {
    i++;
  }
  string colStr = cell.substr(0, i);
  int row = stoi(cell.substr(i));

  int col = 0;
  for (char c : colStr) {
    col = col * 26 + (c - 'A' + 1);
  }

  long long total = (long long)col * row;

  cout << total << "\n";

  return 0;
}
