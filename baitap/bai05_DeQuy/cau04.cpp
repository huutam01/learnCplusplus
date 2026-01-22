#include <bits/stdc++.h>
using namespace std;
#define ll long long

    int sum(int n) {
        if(n == 1) return -1;
        else if(n % 2 == 0) return n + sum(n-1);
        else return -n + sum(n-1);
    }



int main () {
    int n; cin >> n;
    cout << sum(n);
}
