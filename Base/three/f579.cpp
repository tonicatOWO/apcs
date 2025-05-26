#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b,store, people;
  while (store!=0) {   
    cin >> a >> b >> people;

    int total = 0;

    for (int c = 0; c < people; c++) {
        int anum = 0, bnum = 0;
        for (int i = 0; i < 2; i++) {
            cin >> store;

            if (store == a) {
                anum++;
            } else if (store == -a) {
                anum--;
            } else if (store == b) {
                bnum++;
            } else if (store == -b) {
                bnum--;
            }
        }

        if (anum > 0 && bnum > 0) {
            total++;
        }
    }

    cout << total << endl;
    return 0;
  }
}

