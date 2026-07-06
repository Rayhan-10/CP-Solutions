#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int b; cin >> b;

    for (int i = 0; i < 3; i++) {
        int u, v;
        cin >> u >> v;
        if (b == u) {
            b = v;
        } else if (b == v) {
            b = u;
        }
    }

    cout << b << endl;
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