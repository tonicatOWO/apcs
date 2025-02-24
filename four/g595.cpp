#include <iostream>  
using namespace std;  

int main() {  
    int n, h[105];  

    cin >> n;  
    for(int i = 0; i < n; i++) {  
        cin >> h[i];  
    }  

    int sum = 0;  
    for(int i = 0; i < n; i++) {  
        sum += h[i];  
    }  

    cout << sum << endl;  

    return 0;  
}

