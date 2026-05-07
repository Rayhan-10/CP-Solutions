#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    if(n%2==0)
    {
        cout<<n/2<<"\n";
    }
    else
    {
        cout<<(n/2)+1<<"\n";
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