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
    int maxf = 0;
    int maxe = 0;
    for (int i = 0; i <= 1e6 ; i++ ) {
        if(mark[i] > maxf) {
                maxf = mark[i];
                maxe = i;
        }
    }
    cout << maxe << ' ' << maxf;

}
