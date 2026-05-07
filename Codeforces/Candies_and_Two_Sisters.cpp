#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin>>n;
    long long m= n/2+1;
    long long ans = n%m;
    cout<<ans<<"\n";

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