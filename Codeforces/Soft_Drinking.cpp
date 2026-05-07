#include <bits/stdc++.h>
using namespace std;

void solve() {
    int  n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int tm= k*l;
    int a1= tm/nl;
    int a2= c*d;
    int a3= p/np;
    int ans = min(min(a1,a2), a3)/n;
    cout<<ans<<"\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int TC;
    // cin >> TC;
    // while (TC--) {
        solve();
    // }

    return 0;
}