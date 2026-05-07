#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c; cin>>a>>b>>c;
    int maxE= max({a,b,c});
    if(maxE > (a+b+c)-maxE)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
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