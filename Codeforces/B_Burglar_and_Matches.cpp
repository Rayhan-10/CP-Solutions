#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ll n;
    int m;
    if (!(cin >> n >> m)) return;

    vector<pair<ll, ll>> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i].second >> v[i].first;
    }

    sort(v.rbegin(), v.rend());

    ll total_matches = 0;
    for (int i = 0; i < m; i++) {
        if (n == 0) break;
        
        ll take = min(n, v[i].second);
        total_matches += take * v[i].first;
        n -= take;
    }

    cout << total_matches << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}