#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, k, n1;
    if (!(cin >> n >> k >> n1)) return;

    if (n1 >= n) {
        cout << "YES" << endl;
    } else if (n1 * 2 >= n && k >= 4) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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