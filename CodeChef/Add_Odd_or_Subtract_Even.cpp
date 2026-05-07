#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin>>a>>b;
    if(a < b)
    {
        if((b-a) % 2 == 1)
        {
            cout<<1<<"\n";
        }
        else
        {
            cout<<2<<"\n";
        }
    }
    else if( a == b)
    {
        cout<<0<<"\n";
    }
    else
    {
        if((a - b) % 2 == 0)
        {
            cout<<1<<"\n";
        }
        else
        {
            cout<<2<<"\n";
        }
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