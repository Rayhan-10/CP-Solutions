#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n; cin >> n;

    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] < x) {
            cout << "NO" << endl;
            return;
        }

        if (i != n - 1) {
            ll y = a[i] - x;
            a[i + 1] += y;
        }

        x++;
    }

    cout << "YES" << endl;
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