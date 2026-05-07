#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b; cin>>a>>b;
    if((a+b) % 2==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
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