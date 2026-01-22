#include <bits/stdc++.h>
using namespace std;
#define ll long long


bool ngto(int n) {
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) return false;
    }
    return n > 1;

}
int main () {
    int n; cin >> n;
    int a[n];
    int sum = 0;
    int suml = 0;
    int sumr = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for(int i = 0; i < n; i++) {
        sumr = sum - suml - a[i];
        if(ngto(sumr) && ngto(suml)) cout << i << " ";
        suml += a[i];
    }

}
