#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y;
    cin >> x >> y;

 
    if ((x - 2 * y) % 3 != 0) {
        cout << "NO\n";
        return;
    }

    
    if (y >= 0) {
        if (x >= 2 * y) cout << "YES\n";
        else cout << "NO\n";
    } else {
        if (x >= 4 * abs(y)) cout << "YES\n";
        else cout << "NO\n";
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