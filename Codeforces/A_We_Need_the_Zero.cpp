#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
      int n; 
    cin >> n;

    int total = 0, x;
    for(int i = 0; i < n; i++) {
        int v; 
        cin >> v;
        total ^= v;
    }

    if(n % 2 == 1) {
       
        x = total;
        cout << x << "\n";
    }
    else {
        if(total == 0) cout << 0 << "\n";
        else cout << -1 << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC;
    cin >> TC;
    while (TC--) {
        solve();
    }

    return 0;
}