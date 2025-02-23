#include <iostream>

using namespace std;

int main() {
    int N;
    std::cin >> N;
    int res;
    res = (N/13)*50 + (N%12)*5;     
    std::cout << res;
}
