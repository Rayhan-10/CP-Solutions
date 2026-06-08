#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll total_clicks = 0;
    for (ll i = 0; i < n; i++) {
        ll wrong_options = a[i] - 1;
        ll cost_per_wrong_attempt = i + 1;
        
        total_clicks += (wrong_options * cost_per_wrong_attempt);
        total_clicks += 1;
    }

    cout << total_clicks << endl;
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