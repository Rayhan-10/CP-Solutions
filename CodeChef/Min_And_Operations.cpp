#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    long long ans = (n/2)*((n/2)+1);
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