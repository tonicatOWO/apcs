#include <iostream>
using namespace std;

int main() {
    unsigned long long  L, R;
    cin >> L >> R;
    int t = (((L+1)/2)*2+((R/2)*2))*0.5*((R-L)+(L%2==0)+(R%2==0))/2;
    std::cout << t << endl;
    return 0;
}


