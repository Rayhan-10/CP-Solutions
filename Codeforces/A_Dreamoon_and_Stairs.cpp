#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;

    if (n < m) {
        cout << -1 << endl;
        return;
    }

    int mx_moves = n;
    int mn_moves = (n + 1) / 2;
    int ans = -1;

    for (int i = mx_moves; i >= mn_moves; i--) 
    {
        if (i % m == 0) 
        {
            ans = i;
        }
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}