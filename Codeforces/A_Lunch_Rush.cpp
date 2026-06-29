#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    ll mx = -2e9; 

    for (int i = 0; i < n; ++i) {
        ll f, t;
        cin >> f >> t;

        ll c;
        if (t > k) {
            c = f - (t - k);
        } else {
            c = f;
        }

        if (c > mx) {
            mx = c;
        }
    }

    cout << mx << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}