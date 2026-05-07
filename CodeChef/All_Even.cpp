#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        int a; cin>>a;
        sum+=a;
    }
    if(sum % 2){
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