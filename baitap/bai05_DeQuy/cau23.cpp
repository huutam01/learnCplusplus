#include <bits/stdc++.h>
using namespace std;
#define ll long long

int toanchan(int a[], int n) {
    if(n == 1) {
        if(a[n-1] % 2 == 1) return 0;
        else return 1;
    }
    if(a[n-1] % 2 == 1) return 0;
    else return toanchan(a, n-1);

}

int main () {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n ; i++ ) {
        cin >> a[i];
    }

    if(toanchan(a, n)) cout << "YES";
    else cout << "NO";
}
