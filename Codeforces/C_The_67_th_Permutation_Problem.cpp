#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n; cin >> n;
    int f=1, s=3*n-1, t=3*n;
    for(int i = 1; i <=n; i++){
        cout<<f<<" "<<s<<" "<<t;
        f++;
        s-=2;
        t-=2;
        if(i!=n) cout<<" ";
    }
    cout<<endl;
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