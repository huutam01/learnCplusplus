#include <bits/stdc++.h>
using namespace std;
#define ll long long





int main () {
    int n; cin >> n;
    vector <pair<int, pair<int, int>>> v;
    for(int i = 0; i < n ; i++ ) {
        int x, y, z; cin >> x >> y >> z;
        v.push_back({x, {y, z}});
    }
    for(pair<int, pair<int, int>> it : v) {
        cout << it.first + it.second.first + it.second.second << ' ';
    }

}
