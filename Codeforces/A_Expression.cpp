#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int a,b,c; cin>>a>>b>>c;
    ll ans = max({a + b + c, a * b * c, a + b * c, a * b + c, a * (b + c), (a + b) * c});
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}