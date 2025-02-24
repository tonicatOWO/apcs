#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (void){
    int n;
    cin >> n;
    int h[n];
    int total = 0; 
    int temp;
     
    for(int i=0;i<n;i++) cin >> h[i];
    for(int i=1;i<n-1;i++){
        if(h[i] == 0){
            temp = min(h[i-1],h[i+1]);
            total += temp;
        }
    } 
    if(h[0] == 0) total += h[1]; 
    if(h[n-1] == 0) total += h[n-2];
    
    cout << total << endl;
    return 0; 
}
