#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[3], b[3], x, n;
    long long s = LLONG_MIN; 
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 3; i++){
        cin >> b[i];
    }
    cin >> n;
    
    for(int X = 0; X <= n; X++){
        x = n - X;
        long long current = a[0]*X*X + a[1]*X + a[2] + b[0]*x*x + b[1]*x + b[2];
        if(current > s){
            s = current;
        }
    }
    cout << s;
    return 0;
}
