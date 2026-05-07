#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    ll mxd=a[0];
    for(int i = 0; i < n-1; i++){
        ll d=a[i+1]-a[i];
        mxd=max(mxd, d);
    }
    ll g=2*(k-a[n-1]);
    ll ans = max(mxd, g);
    cout<<ans<<endl;
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