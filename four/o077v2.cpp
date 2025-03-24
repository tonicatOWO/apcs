#include <bits/stdc++.h>
using namespace std;

int pic[100][100]={0};

int main() {
    int h, w, n;
    cin >> h >> w >> n;

    while (n--) {
        int r, c, t, x;
        cin >> r >>c >>t >>x;
        for (int j = 0; j < h; j++) {
            for (int l = 0; l < w; l++) {
                if (abs(j - r) + abs(l - c) <= t) {
                    pic[j][l] += x;
                }
            }
        }
    }
    for (int j = 0; j < n; j++) {
        for (int l = 0; l < w; l++) {
            cout << pic[j][l] << ' ';
        }
        cout << endl;
    }
}

