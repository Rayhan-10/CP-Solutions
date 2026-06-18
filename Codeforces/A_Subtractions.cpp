#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ll a, b;
    cin >> a >> b;
    
    ll ans = 0;
    while (a > 0 && b > 0) {
        if (a > b) {
            ans += a / b;
            a %= b;
        } else {
            ans += b / a;
            b %= a;
        }
    }
    cout << ans << endl;
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