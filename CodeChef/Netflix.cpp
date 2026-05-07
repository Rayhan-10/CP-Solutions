#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ll a,b,c,x; cin>>a>>b>>c>>x;
    if(a+b >=x) cout<<"YES\n";
    else if(a+c >=x) cout<<"YES\n";
    else if(b+c >=x) cout<<"YES\n";
    else cout<<"NO\n";
    
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