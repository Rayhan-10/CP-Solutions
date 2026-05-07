#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ll a,b,c; cin>>a>>b>>c;
    if(a+b <= c) cout<<2<<endl;
    else if(a<=c) cout<<1<<endl;
    else cout<<0<<endl;
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