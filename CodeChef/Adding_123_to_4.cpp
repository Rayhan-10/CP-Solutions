#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, z;
    cin>>x>>y>>z;
    int ans  = min(x,z) + y/2;
    cout<<ans<<"\n";
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