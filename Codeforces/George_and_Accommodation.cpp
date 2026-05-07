#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int count=0;
    for(int i=0; i<n; i++)
    {
        int p,q;
        cin>>p>>q;
        if((p+1) < q)
        {
            count++;
        }
    }
    cout<<count<<"\n";
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