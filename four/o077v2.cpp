#include <bits/stdc++.h>
using namespace std;

int pic[100][100] = {0};

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    while(n--){
        int r, c, t, x;
        cin >> r >> c >> t >> x;
        for (int i = 0; i < h; i++){
            for (int j = 0; j < w; j++){
                if (abs(i - r) + abs(j - c) <= t){
                    pic[i][j] += x;
                }
            }
        }
    }
    for (int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            cout << pic[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

