#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x; cin>>x;
    long long ans = 100+ 4*x;
    if( ans < 300)
    {
        cout<<ans<<"\n";
    }
    else
    {
        cout<<300<<"\n";
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