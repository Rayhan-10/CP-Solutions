#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, h;
    cin>>n>>h;
    int count=0;
    for(int i=0; i<n; i++)
    {
        int p;
        cin>>p;
        if(p <= h)
        {
            count++;
        }
        else
        {
            count+=2;
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