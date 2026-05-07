#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    if(n<4)
    {
        cout<<"MILD\n";
    }
    else if(n >=4 && n<=7)
    {
        
        cout<<"Medium\n";
    }
    else
    {
        cout<<"HOT\n";
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