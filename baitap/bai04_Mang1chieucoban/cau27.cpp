#include <bits/stdc++.h>
using namespace std;
#define ll long long


int mark[1000001];


int main () {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mark[a[i]]++;
    }
    for (int i = 0; i < 1000001; i++ ) {
        if(mark[i] > 0) {
            cout << i << ' ' << mark[i] << endl;
            mark[i] = 0;
        }
    }

}
