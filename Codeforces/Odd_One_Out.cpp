#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b,c;
    cin>>a>>b>>c;
    int ans = a^b^c;
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