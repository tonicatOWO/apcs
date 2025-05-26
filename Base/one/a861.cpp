#include <iostream>

using namespace std;

int main() {
    int h, w;
    while (cin >> h >> w) {
        int p;
        p = h * 2 + w * 2;
        std::cout << p << endl;
    }
}