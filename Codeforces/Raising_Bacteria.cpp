#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        if(n %2==0)
        {
            n=n/2;
        }
        else
        {
            n=n-1;
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