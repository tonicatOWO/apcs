#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, setNum = 1;
    while (cin >> n && n != 0) {
        vector<int> h(n);
        int total = 0;
        for (int &x : h) {
            cin >> x;
            total += x;
        }
        int avg = total / n, moves = 0;
        for (int x : h) {
            if (x > avg) moves += x - avg;
        }
        cout << "Set #" << setNum++ << endl;
        cout << "The minimum number of moves is " << moves << "." << endl << endl;
    }
    return 0;
}

