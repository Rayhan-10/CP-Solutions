#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;
    long long ans;
    if(n % 2 == 0)
    {
        ans=n/2;
    } 
    else
    {
        ans= -ceil((double)n/2);
    }
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