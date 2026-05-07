#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x, y;
    cin>>n>>x>>y;
    if(n >= 2*x && n >= 2*y)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";

    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int TC;
    // cin >> TC;
    // while (TC--) {
        solve();
    // }

    return 0;
}