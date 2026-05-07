#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b; cin>>a>>b;
    if(a<b) 
    {
        cout<<"REPAIR\n";
    }
    else if(a>b) 
    {
        cout<<"NEW PHONE\n";
    }
    else 
    {
        cout<<"ANY\n";
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