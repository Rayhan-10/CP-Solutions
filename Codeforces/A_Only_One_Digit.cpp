#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    int minE=INT_MAX;
    while(n>0)
    {
        int ld= n%10;
        minE=min(ld, minE);
        n/=10;
    }
    cout<<minE<<"\n";
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