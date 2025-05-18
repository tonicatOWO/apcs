#include <iostream>
#include <string>
using namespace std;

int main() {
  string msg;
  char n;

  cin >> msg >> n;

  string filtered = "";
  for (char ch : msg) {
    if (ch != n) {
      filtered += ch;
    }
  }

  bool isPalindrome = true;
  for (int i = 0; i < filtered.length() / 2; i++) {
    if (filtered[i] != filtered[filtered.length() - 1 - i]) {
      isPalindrome = false;
      break;
    }
  }

  cout << (isPalindrome ? "Yes" : "No") << endl;

  return 0;
}
