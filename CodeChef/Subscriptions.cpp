#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ll a,b; cin>>a>>b;
    if(a%6 ==0) cout<<((a/6)*b)<<endl;
    else cout<<((a/6)+1)*b<<endl;
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