#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin, s) && s != "END") {
        stringstream ss(s);
        string word;
        while(ss >> word){
            cout << char(toupper(word[0]));
        }
        cout << ' ' << word << endl;
    }
    return 0;
}
  
