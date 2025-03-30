#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> tree(10);
    int arm, ans = 0;
    for (int &ttall : tree) {
        cin >> ttall;
        ttall -= 30;
    }
    cin >> arm;
    for (int ttall : tree) {
        if (arm >= ttall) ans++;
    }
    cout << ans << "\n";
    return 0;
}

