#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ll n;
    if (cin >> n) {
        ll ans = n;
        for (ll i = 1; i <= n; ++i) {
            ans += i * (n - i);
        }
        cout << ans << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
            solve();
        
    

    return 0;
}