#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int row_min = 2e9; 
        for (int j = 0; j < m; j++) {
            int val;
            cin >> val;
            row_min = min(row_min, val);
        }
        ans = max(ans, row_min);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int TC = 1;
    while (TC--) {
        solve();
    }

    return 0;
}