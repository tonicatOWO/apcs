#include<bits/stdc++.h>
using namespace std;
int main(){
   int tol = 0;    
   int time;       
   int f;          
   int f2;         
   
   cin >> time >> f;
   tol = (f-1) * 3;    
   f2 = f;             
   
   for (int u = 1; u < time; u++){
       cin >> f;
       if (f - f2 < 0){          
           tol += (f2 - f) * 2;
       }else if (f - f2 > 0){    
           tol += (f - f2) * 3;
       }
       f2 = f;                   
   }
   
   cout << tol << endl;
}

