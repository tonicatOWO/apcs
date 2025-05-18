#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  string str;

  while (getline(cin, str)) {
    stringstream ss(str);
    int n, sum = 0;

    while (ss >> n) {
      sum += n;
    }

    cout << sum << endl;
  }

  return 0;
}
