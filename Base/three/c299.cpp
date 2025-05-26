#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n, e, mi = 1001, ma = 0;
    string res;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> e;
        mi=min(mi,e);
        ma=max(ma,e);
        if(ma-mi!=n-1){
            res="no";
        }else{
            res="yes";
        }
    }
    std::cout << mi <<" "<< ma <<" "<< res;
}