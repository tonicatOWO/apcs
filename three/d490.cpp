#include <iostream>
using namespace std;

long long S(long long x) {
    long long k = x / 2;    
    return k * (k + 1);
}

int main() {
    long long L, R;
    cin >> L >> R;
    cout << S(R) - S(L - 1) << endl;
    return 0;
}

