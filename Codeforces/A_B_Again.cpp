#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int sum=0;
    sum+=n/10;
    sum+=n%10;
    cout<<sum<<"\n";
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