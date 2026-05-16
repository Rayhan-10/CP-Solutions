#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    
    vector<ll> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    ll steps = 0;
    ll current_val = 0;
    
    for (int i = 0; i < n; i++) {
        steps += abs(b[i] - current_val);
        current_val = b[i];
    }
    
    cout << steps << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}