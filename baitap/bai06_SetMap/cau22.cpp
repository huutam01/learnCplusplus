#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
    int n;
    cin >> n;
    multiset<int> v;
    int a[n];

     for (int i = 0; i < n ; i++ ) {
        cin >> a[i];
        v.insert(a[i]);
        cout << v.count(a[i]) << ' ';
    }

}
