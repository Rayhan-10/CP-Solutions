#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b; cin>>a>>b;
    if((a*2) > (b*5))
    {
        cout<<"Chocolate\n";
    }
    else if((a*2) < (b*5))
    {
        cout<<"Candy\n";
    }
    else
    {
        cout<<"Either\n";
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