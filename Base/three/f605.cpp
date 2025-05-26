#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    int num = 0, totalnum = 0;

    for (int i = 0; i < n; i++) {
        vector<int> lst(3);
        for (int j = 0; j < 3; j++) {
            cin >> lst[j];
        }

        int maxval = *max_element(lst.begin(), lst.end());
        int minval = *min_element(lst.begin(), lst.end());

        if ((maxval - minval) >= b) {
            num++;
            totalnum += (lst[0] + lst[1] + lst[2]) / 3;
        }
    }

    cout << num << " " << totalnum << endl;
    return 0;
}

