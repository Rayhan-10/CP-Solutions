#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'

void solve() {
    ll sum=0;
    int mx=INT_MIN;
    for(int i = 0; i < 7; i++){
        int a; cin>>a;
        mx=max(mx,a);
        sum-=a;
    }
    cout<<sum+(mx*2)<<endl;
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