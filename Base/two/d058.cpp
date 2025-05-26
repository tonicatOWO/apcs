#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    cout << (n != 0 ? n/abs(n) : 0) << endl;
    
    return 0;
}
