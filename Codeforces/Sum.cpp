#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b) == c)
    {
        cout<<"Yes"<<"\n";
        return;
    }
    else if((a+c) == b)
    {
        cout<<"Yes"<<"\n";
        return;
    }
    else if((b+c) == a)
    {
        cout<<"Yes"<<"\n";
        return;
    }
    else
    {
        cout<<"No"<<"\n";
        return;
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