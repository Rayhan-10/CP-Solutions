#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    int n,x; cin>>n>>x;
    int p=0;
    for(int i = 0; i < n; i++){
        int a; cin>>a;
        if(a % x==0) p=max(a,p);
    }
    cout<<p<<endl;
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