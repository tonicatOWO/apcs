#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long int N;
    while (cin >> N) {
        long long int quarter = N / 4;
        long long int height = (N - 2 * quarter) / 2;
        cout << quarter * height << endl;
    }
}

