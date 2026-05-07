#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c; cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"Alice\n";
    }
    else if(b>a && b>c)
    {
        cout<<"Bob\n";
    }
    else
    {
        cout<<"Charlie\n";
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