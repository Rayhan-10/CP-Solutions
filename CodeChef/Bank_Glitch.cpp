#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,x,y; cin>>a>>b>>x>>y;
    int k = a / x;
    cout<<a+b+k*(y-x)<<"\n";
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