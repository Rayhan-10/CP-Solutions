#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ll n, k;
    cin >> n >> k;

    ll rem1 = n - (k - 1);
    if (rem1 > 0 && rem1 % 2 != 0) {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; i++) {
            cout << 1 << " ";
        }
        cout << rem1 << endl;
        return;
    }

    ll rem2 = n - 2 * (k - 1);
    if (rem2 > 0 && rem2 % 2 == 0) {
        cout << "YES" << endl;
        for (int i = 0; i < k - 1; i++) {
            cout << 2 << " ";
        }
        cout << rem2 << endl;
        return;
    }

    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}