#include<bits/stdc++.h>
using namespace std;
int n,x[105],y[105],mx=INT_MIN,mn=INT_MAX;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n-1;i++){
        mx=max(mx,abs(x[i]-x[i+1])+abs(y[i]-y[i+1]));
        mn=min(mn,abs(x[i]-x[i+1])+abs(y[i]-y[i+1]));
    }
    cout<<mx<<" "<<mn;
}

