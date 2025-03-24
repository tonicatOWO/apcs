#include <bits/stdc++.h>
using namespace std;

// 畫布
int pic[100][100];

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    // 處理每次下筆
    while (q--) {
        int x, y, t, k;
        cin >> x >> y >> t >> k;
        // 嘗試更新每個位置的值
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < m; l++) {
                // 只修改距離 <= t 的位置
                if (abs(j - x) + abs(l - y) <= t) {
                    // 更新顏色 (因為會混色所以是 +=)
                    pic[j][l] += k;
                }
            }
        }
    }
    // 輸出畫布
    for (int j = 0; j < n; j++) {
        for (int l = 0; l < m; l++) {
            cout << pic[j][l] << ' ';
        }
        cout << endl;
    }
}

