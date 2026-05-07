#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ll a,b; cin>>a>>b;
    if(a%b == 0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<b-(a%b)<<endl;
    }
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