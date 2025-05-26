#include <iostream>
using namespace std;

int collatz_cycle_length(int n) {
    int length = 1;
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        length++;
    }
    return length;
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        int max_len = 0;
        for (int k = min(i,j); k <= max(i, j); k++) {
            int len = collatz_cycle_length(k);
            if (len > max_len)
                max_len = len;
        }
        cout << i << " " << j << " " << max_len << "\n";
    }
    return 0;
}

// #include <iostream>
// #include <algorithm>
// using namespace std;
//
// const int MAXN = 1000000;
// int memo[MAXN + 1] = {0};
//
// int collatz_cycle_length(long long n) {
//     if (n <= MAXN && memo[n] != 0) return memo[n];
//     long long next;
//     int length = 0;
//     if (n == 1) return 1;
//     if (n % 2 == 0) {
//         next = n >> 1;
//         length = 1 + collatz_cycle_length(next);
//     } else {
//         next = (3 * n + 1) >> 1;
//         length = 2 + collatz_cycle_length(next);
//     }
//     if (n <= MAXN) memo[n] = length;
//     return length;
// }
//
// int main() {
//     int i, j;
//     while (cin >> i >> j) {
//         int maxlen = 0;
//         for (int k = min(i,j); k <= max(i,j); ++k) {
//             int len = collatz_cycle_length(k);
//             if (len > maxlen) maxlen = len;
//         }
//         cout << i << " " << j << " " << maxlen << endl;
//     }
//     return 0;
// }

