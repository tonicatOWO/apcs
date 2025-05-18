#include <bits/stdc++.h>
using namespace std;

struct web {
    string name;
    int v;
};

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; ++i) {
        web w[15];
        int mx = -1;
        for (int j = 0; j < 10; ++j) {
            cin >> w[j].name >> w[j].v;
            mx = max(mx, w[j].v);
        }
        cout << "Case #" << i << ":\n";
        for (int j = 0; j < 10; ++j) {
            if (w[j].v == mx) {
                cout << w[j].name << "\n";
            }
        }
    }
    return 0;
}

