#include <bits/stdc++.h>
using namespace std;

void solve() {
    string  a, b;
    cin>>a>>b;
    // cout<<a<<b;
    for(int i=0; i < a.size(); i++)
    {
        int ans=a[i] ^ b[i];
        cout<<ans;
    }
    cout<<"\n";
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