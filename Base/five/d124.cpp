#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    while (cin >> n) {
        int sum = 0;
        for (size_t i = (n[0] == '-' ? 1 : 0); i < n.size(); ++i) {
            sum += n[i] - '0';
        }
        if (sum % 3 == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}

