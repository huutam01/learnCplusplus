#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool mark[1000001];

int main () {
    int n; cin >> n;
    int a[n];
    int dem = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(!mark[a[i]]) {
            dem++;
            mark[a[i]] = true;
        }
    }
    cout << dem;
}
