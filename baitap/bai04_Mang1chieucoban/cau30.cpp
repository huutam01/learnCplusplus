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
    for (int i = 0; i < n ; i++ ) {
        if(mark[a[i]] > maxf) {
                maxf = mark[a[i]];
                maxe = a[i];
        }
    }
    cout << maxe << ' ' << maxf;

}
