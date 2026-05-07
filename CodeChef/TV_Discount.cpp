#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d; cin>>a>>b>>c>>d;
    int f=a-c, g=b-d;
    if(f < g)
    {
        cout<<"First\n";
    }
    else if(g<f)
    {
        cout<<"Second\n";
    }
    else
    {
        cout<<"Any\n";
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