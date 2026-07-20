#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, t;
    cin >> n >> t;

    if (n == 1 && t == 10) {
        cout << -1 << endl;
        return;
    }

    if (t == 10) {
        cout << 1;
        for (int i = 0; i < n - 1; i++) {
            cout << 0;
        }
        cout << endl;
    } else {
        for (int i = 0; i < n; i++) {
            cout << t;
        }
        cout << endl;
    }
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