#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    std::cin >> a >> b >> c;
    int area;
    area = ((a+b+c)/2)*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c);
    std::cout << area;
}
