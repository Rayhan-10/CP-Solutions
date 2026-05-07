#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int count=0, maxE= INT_MIN;
    for(int i=0; i<n; i++)
    {
        int p,q;
        cin>>p>>q;
        count-=p;
        count+=q;
        maxE= max(count, maxE);
    }
    cout<<maxE<<"\n";
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