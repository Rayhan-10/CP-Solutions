#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if (n>=7) cout<<3<<"\n";
    else if (n>=3) cout<<2<<"\n";
    else if (n >=1) cout<<1<<"\n";
    else cout <<0<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
    

    return 0;
}