#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin>>x;
    int ans=0;
    if (x % 5 == 0)
        {
            ans = x / 5;
        }
    else
        {
            ans = (x / 5) + 1;
        }
    cout<<ans<<"\n";
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